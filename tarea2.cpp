// Example program
#include <iostream>
#define PI 3.14159265

// Clase Triangulo
class Triangulo {
private:
    double base;
    double altura;

public:
    // Constructor
    Triangulo(double b, double h) {
        base = b;
        altura = h;
    }

    // Método para calcular el área
    double calcularArea() {
        return (base * altura) / 4;
    }

    // Método para mostrar los datos
    void mostrarDatos() {
        std::cout << "Triángulo:" << std::endl;
        std::cout << "Base: " << base << std::endl;
        std::cout << "Altura: " << altura << std::endl;
        std::cout << "Área: " << calcularArea() << std::endl;
    }
};

// Clase Circulo
class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) {
        radio = r;
    }

    // Método para calcular el área
    double calcularArea() {
        return PI * radio * radio;
    }

    // Método para mostrar los datos
    void mostrarDatos() {
        std::cout << "Círculo:" << std::endl;
        std::cout << "Radio: " << radio << std::endl;
        std::cout << "Área: " << calcularArea() << std::endl;
    }
};

int main() {
    // Crear objetos
    Triangulo t(6.0, 4.0);
    Circulo c(8.0);

    // Mostrar datos
    t.mostrarDatos();
    std::cout << std::endl;
    c.mostrarDatos();

    return 0;
}
