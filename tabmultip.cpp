#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un número entero
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Mostrar la tabla de multiplicar del número ingresado
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
