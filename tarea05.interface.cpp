#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

// Interfaz solo para imprimir detalles
class FigGeoPrinter {
public:
    virtual void PrintDetails() = 0; // método puro, interfaz
};

// Clase abstracta de figura geométrica
class FigGeo {
protected:
    float area;

public:
    virtual float calcArea() = 0; // método puro
    float getArea() {
        return area;
    }

    void saveArea() {
        if (area == 0) {
            cout << "calculando area..." << endl;
            area = calcArea();
        }
    }
};

// Clase derivada Circle que implementa la interfaz
class Circle : public FigGeo, public FigGeoPrinter {
private:
    float radius;

public:
    Circle() {
        radius = 1.0;
        area = 0;
    }

    Circle(float inData) {
        radius = inData;
        area = 0;
    }

    float calcArea() override {
        return pi * radius * radius;
    }

    void PrintDetails() override {
        cout << "radio = " << radius << ", area = " << area << endl;
    }
};

// Función principal para probar
int main() {
    Circle c1(5.0);        // Círculo con radio 5
    c1.saveArea();         // Calcula el área si no está calculada
    c1.PrintDetails();     // Muestra radio y área

    return 0;
}
