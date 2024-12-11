# 1.- Implementación de Punteros y Estructuras con Punteros

## 1.1.- Introducción

En este documento, aprenderás sobre la implementación de punteros y estructuras con punteros en C. Los punteros son una característica poderosa del lenguaje C que permite manipular directamente la memoria. Las estructuras, por otro lado, son una forma de agrupar diferentes tipos de datos bajo un mismo nombre.

## 1.2.- Punteros

### 1.2.1.- ¿Qué es un puntero?

Un puntero es una variable que almacena la dirección de memoria de otra variable. En lugar de almacenar un valor directo, un puntero almacena la ubicación donde se encuentra ese valor.

### 1.2.2.- Ejemplo 1: Puntero a un entero

```c
#include <stdio.h>

int main() {
    int var = 10;       // Declaración de una variable entera
    int *ptr = &var;    // Declaración de un puntero y asignación de la dirección de var

    printf("Valor de var: %d\n", var);
    printf("Dirección de var: %p\n", &var);
    printf("Valor del puntero ptr: %p\n", ptr);
    printf("Valor al que apunta ptr: %d\n", *ptr);

    return 0;
}
```

**Explicación:**

1. `int var = 10;` - Se declara una variable entera `var` y se le asigna el valor 10.
2. `int *ptr = &var;` - Se declara un puntero `ptr` que almacena la dirección de `var`.
3. `printf` - Se imprimen el valor de `var`, su dirección, el valor del puntero (que es la dirección de `var`) y el valor al que apunta el puntero (que es el valor de `var`).

### 1.2.3.- Ejemplo 2: Puntero a un array

```c
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};  // Declaración de un array de enteros
    int *ptr = arr;          // Declaración de un puntero que apunta al primer elemento del array

    for (int i = 0; i < 3; i++) {
        printf("Valor de arr[%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}
```

**Explicación:**

1. `int arr[3] = {1, 2, 3};` - Se declara un array de enteros `arr` con 3 elementos.
2. `int *ptr = arr;` - Se declara un puntero `ptr` que apunta al primer elemento del array.
3. `for` loop - Se recorre el array usando el puntero para acceder a cada elemento.

## 1.3.- Estructuras con Punteros

### 1.3.1.- ¿Qué es una estructura?

Una estructura es una colección de variables (de diferentes tipos) agrupadas bajo un mismo nombre. Las estructuras permiten manejar datos relacionados como una sola unidad.

### 1.3.2.- Ejemplo 1: Estructura con puntero a entero

```c
#include <stdio.h>

struct Persona {
    char nombre[50];
    int *edad;
};

int main() {
    int edad = 30;
    struct Persona persona;

    persona.edad = &edad;
    printf("Edad de la persona: %d\n", *(persona.edad));

    return 0;
}
```

**Explicación:**

1. `struct Persona` - Se define una estructura `Persona` con un puntero a entero `edad`.
2. `int edad = 30;` - Se declara una variable entera `edad`.
3. `persona.edad = &edad;` - Se asigna la dirección de `edad` al puntero `edad` de la estructura `persona`.
4. `printf` - Se imprime la edad de la persona accediendo al valor al que apunta el puntero `edad`.

### 1.3.3.- Ejemplo 2: Estructura con puntero a estructura

```c
#include <stdio.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int main() {
    struct Nodo nodo1, nodo2;

    nodo1.dato = 10;
    nodo1.siguiente = &nodo2;

    nodo2.dato = 20;
    nodo2.siguiente = NULL;

    printf("Dato del primer nodo: %d\n", nodo1.dato);
    printf("Dato del segundo nodo: %d\n", nodo1.siguiente->dato);

    return 0;
}
```

**Explicación:**

1. `struct Nodo` - Se define una estructura `Nodo` con un entero `dato` y un puntero a `Nodo` `siguiente`.
2. `nodo1.dato = 10;` - Se asigna el valor 10 al campo `dato` del primer nodo.
3. `nodo1.siguiente = &nodo2;` - Se asigna la dirección del segundo nodo al puntero `siguiente` del primer nodo.
4. `nodo2.dato = 20;` - Se asigna el valor 20 al campo `dato` del segundo nodo.
5. `nodo2.siguiente = NULL;` - Se asigna `NULL` al puntero `siguiente` del segundo nodo.
6. `printf` - Se imprimen los datos de ambos nodos.

