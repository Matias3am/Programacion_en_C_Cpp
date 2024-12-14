#include "encontrar_maximo.h"

// Función que encuentra el valor máximo en el arreglo
int encontrarMaximo(int valores[], int N) {
    int maximo = valores[0];  // Inicializar el máximo con el primer valor

    for (int i = 1; i < N; ++i) {
        if (valores[i] > maximo) {
            maximo = valores[i];
        }
    }

    return maximo;
}
