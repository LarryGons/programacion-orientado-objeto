#include <iostream>
#include <vector>
using namespace std;

// Interfaz del repositorio
class IRepo {
public:
    virtual void Save(float area) = 0;         // Guarda un área
    virtual float GetArea(int index) const = 0; // Devuelve el área en una posición
    virtual ~IRepo() {}
};

// Implementación concreta con vector
class RepoVector : public IRepo {
private:
    vector<float> areas;

public:
    void Save(float area) override {
        cout << "Guardando área: " << area << endl;
        areas.push_back(area);
    }

    float GetArea(int index) const override {
        if (index >= 0 && index < areas.size()) {
            return areas[index];
        }
        cout << "¡Índice fuera de rango!" << endl;
        return -1;
    }

    void MostrarTodas() const {
        cout << "Áreas guardadas: ";
        for (float area : areas) {
            cout << area << " ";
        }
        cout << endl;
    }
};

// Función principal de prueba
int main() {
    RepoVector repo;

    repo.Save(12.34);
    repo.Save(78.90);
    repo.Save(45.67);

    float area = repo.GetArea(1); // debería devolver 78.90
    cout << "Área en índice 1: " << area << endl;

    repo.MostrarTodas();

    return 0;
}
