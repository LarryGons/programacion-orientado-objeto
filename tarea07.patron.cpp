// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#define PI 3.14

// Clase base abstracta
class FigGeo {
public:
    virtual float calcArea() = 0;
    virtual void printDetails() = 0;
    virtual ~FigGeo() {}
};

// Clase Circle
class Circle : public FigGeo {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    float calcArea() override {
        return PI * radius * radius;
    }

    void printDetails() override {
        cout << "Figura: Círculo\n";
        cout << "Radio: " << radius << "\n";
        cout << "Área: " << calcArea() << "\n\n";
    }
};

// Clase Square (Cuadro)
class Square : public FigGeo {
    float lado;
public:
    Square(float l) {
        lado = l;
    }

    float calcArea() override {
        return lado * lado;
    }

    void printDetails() override {
        cout << "Figura: Cuadro (Cuadrado)\n";
        cout << "Lado: " << lado << "\n";
        cout << "Área: " << calcArea() << "\n\n";
    }
};

// Clase Triangle
class Triangle : public FigGeo {
    float base, altura;
public:
    Triangle(float b, float h) {
        base = b;
        altura = h;
    }

    float calcArea() override {
        return 0.5 * base * altura;
    }

    void printDetails() override {
        cout << "Figura: Triángulo\n";
        cout << "Base: " << base << ", Altura: " << altura << "\n";
        cout << "Área: " << calcArea() << "\n\n";
    }
};

// Fábrica de Figuras
class FigFactory {
public:
    static FigGeo* createFigure(int tipo) {
        switch (tipo) {
            case 1:
                return new Circle(2.0);
            case 2:
                return new Square(3.0);
            case 3:
                return new Triangle(4.0, 5.0);
            default:
                return nullptr;
        }
    }
};

// MAIN
int main() {
    for (int i = 1; i <= 3; i++) {
        FigGeo* figura = FigFactory::createFigure(i);
        if (figura) {
            figura->printDetails();
            delete figura;
        } else {
            cout << "Opción inválida.\n";
        }https://cpp.sh/#
    }

    return 0;
}
