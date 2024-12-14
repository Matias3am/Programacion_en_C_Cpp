#include <iostream>
#include "pedir_valores.h"
#include "encontrar_maximo.h"

using namespace std;

int main() {
    int valores[2];  // Crear un arreglo para almacenar dos valores

    // Llamar a la librería para pedir los valores al usuario
    pedirValores(valores);

    // Encontrar el valor máximo en el arreglo
    int maximo = encontrarMaximo(valores, 2);
    cout << "El valor mayor entre los dos valores es: " << maximo << endl;

    return 0;
}
