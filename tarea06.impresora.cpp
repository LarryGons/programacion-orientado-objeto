// Online C++ compiler to run C++ program online
#include <iostream>

#include <iostream>
using namespace std;

#define pi 3.14

// Interfaz para impresión
class FigGeoPrinter {
public:
    virtual void PrintDetails() = 0;
};

// Clase base de figuras
class FigGeo {
protected:
    float area;
public:
    virtual float calcArea() = 0;

    float getArea() {
        return area;
    }

    void saveArea() {
        if (area == 0) {
            cout << "calculando area...\n";
            area = calcArea();
        }
    }
};

// Clase Circulo
class Circle : public FigGeo, public FigGeoPrinter {
    float radius;
public:
    Circle() {
        radius = 1.0;
        area = 0;
    }

    Circle(float r) {
        radius = r;
        area = 0;
    }

    float calcArea() override {
        return pi * radius * radius;
    }

    void PrintDetails() override {
        cout << "Circulo: radio = " << radius << ", area = " << area << endl;
    }
};

// Clase Triángulo
class Triangle : public FigGeo, public FigGeoPrinter {
    float base, height;
public:
    Triangle(float b = 1.0, float h = 1.0) {
        base = b;
        height = h;
        area = 0;
    }

    float calcArea() override {
        return 0.5 * base * height;
    }

    void PrintDetails() override {
        cout << "Triangulo: base = " << base << ", altura = " << height << ", area = " << area << endl;
    }
};

// Clase Cuadrado
class Square : public FigGeo, public FigGeoPrinter {
    float lado;
public:
    Square(float l = 1.0) {
        lado = l;
        area = 0;
    }

    float calcArea() override {
        return lado * lado;
    }

    void PrintDetails() override {
        cout << "Cuadrado: lado = " << lado << ", area = " << area << endl;
    }
};

// Clase Impresora
class FigPrinter {
public:
    void Print(FigGeoPrinter* figura) {
        cout << "---- Imprimiendo Figura ----" << endl;
        figura->PrintDetails();
        cout << "----------------------------\n" << endl;
    }
};

// Main
int main() {
    Circle c1(2.0);
    Triangle t1(3.0, 4.0);
    Square s1(5.0);

    c1.saveArea();
    t1.saveArea();
    s1.saveArea();

    FigPrinter printer;

    printer.Print(&c1);
    printer.Print(&t1);
    printer.Print(&s1);

    return 0;
}
