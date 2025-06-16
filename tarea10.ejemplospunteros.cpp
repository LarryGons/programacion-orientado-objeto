#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* px = &x;

    *px = 20; // Cambia el valor de x a través del puntero

    cout << "Nuevo valor de x: " << x << endl;

    return 0;
}
