#include "pedir_valores.h"
#include <iostream>

using namespace std;

// Función que solicita dos valores al usuario y los guarda en el arreglo
void pedirValores(int valores[]) {
    cout << "Ingrese el primer valor: ";
    cin >> valores[0];  // Guardar el primer valor en el arreglo
    cout << "Ingrese el segundo valor: ";
    cin >> valores[1];  // Guardar el segundo valor en el arreglo
}
