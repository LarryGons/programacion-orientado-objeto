/ Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Constante global
const float PI = 3.14;

// Función para calcular el área de un círculo
float areaCirculo(float radio) {
    return PI * radio * radio;
}

// Función para calcular el área de un cuadrado
float areaCuadrado(float lado) {

    return lado * lado;
}

// Función para calcular el área de un triángulo
float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    float radio, lado, base, altura;

    // Entrada de datos
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    // Salida de resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Area del circulo: " << areaCirculo(radio) << endl;
    cout << "Area del cuadrado: " << areaCuadrado(lado) << endl;
    cout << "Area del triangulo: " << areaTriangulo(base, altura) << endl;

    return 0;
}
