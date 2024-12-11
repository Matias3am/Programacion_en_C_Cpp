# Introducción

En C, una función es un bloque de código que realiza una tarea específica. Las funciones permiten dividir un programa en partes más manejables, facilitando la reutilización y el mantenimiento del código.

## 1. Definición y Declaración de Funciones

Una función en C se compone de:

- **Declaración (prototipo)**: Indica el nombre de la función, su tipo de retorno y los parámetros que recibe.
- **Definición**: Contiene el código de la función.
- **Llamada**: Invoca la función para ejecutar su código.

### Ejemplo: Declaración y Definición

```c
#include <stdio.h>

// Declaración de la función
int suma(int a, int b);

int main() {
    int resultado = suma(5, 3); // Llamada a la función
    printf("La suma es: %d\n", resultado);
    return 0;
}

// Definición de la función
int suma(int a, int b) {
    return a + b;
}
```

**Explicación:**

1. Se declara la función `suma` antes del `main`.
2. En el `main`, se llama a la función con dos argumentos.
3. La función devuelve el resultado de la operación.



## 2. Tipos de Funciones

### 2.1. Funciones que Devuelven un Valor

Estas funciones realizan una operación y devuelven un resultado.

#### Ejemplo: Calcular el cuadrado de un número

```c
#include <stdio.h>

int cuadrado(int num);

int main() {
    int num = 4;
    printf("El cuadrado de %d es %d\n", num, cuadrado(num));
    return 0;
}

int cuadrado(int num) {
    return num * num;
}
```

**Explicación:**

- La función `cuadrado` recibe un entero y devuelve su cuadrado.
- El valor devuelto se usa directamente en el `printf`.

### 2.2. Funciones que No Devuelven un Valor

Estas funciones tienen un tipo de retorno `void` y no usan `return`.

#### Ejemplo: Mostrar un mensaje

```c
#include <stdio.h>

void mostrarMensaje();

int main() {
    mostrarMensaje(); // Llamada a la función
    return 0;
}

void mostrarMensaje() {
    printf("Hola, esta es una función void.\n");
}
```

**Explicación:**

- La función `mostrarMensaje` imprime un mensaje en pantalla.
- No devuelve ningún valor.

### 2.3. Funciones con Parámetros

Las funciones pueden recibir parámetros para realizar cálculos o tareas específicas.

#### Ejemplo: Calcular el área de un rectángulo

```c
#include <stdio.h>

float calcularArea(float base, float altura);

int main() {
    float base = 5.0, altura = 3.0;
    printf("El área del rectángulo es: %.2f\n", calcularArea(base, altura));
    return 0;
}

float calcularArea(float base, float altura) {
    return base * altura;
}
```

**Explicación:**

- La función `calcularArea` recibe dos parámetros (`base` y `altura`) y devuelve su producto.

### 2.4. Funciones sin Parámetros

Estas funciones no reciben argumentos.

#### Ejemplo: Generar un número aleatorio

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarNumeroAleatorio();

int main() {
    srand(time(0)); // Semilla para números aleatorios
    printf("Número aleatorio: %d\n", generarNumeroAleatorio());
    return 0;
}

int generarNumeroAleatorio() {
    return rand() % 100; // Número entre 0 y 99
}
```

**Explicación:**

- `generarNumeroAleatorio` no recibe parámetros y genera un número aleatorio.



## 3. Ámbito y Ciclo de Vida de las Variables

### 3.1. Variables Locales

Son definidas dentro de una función y solo son accesibles en ella.

#### Ejemplo:

```c
#include <stdio.h>

void funcion();

int main() {
    funcion();
    return 0;
}

void funcion() {
    int x = 10; // Variable local
    printf("Valor de x: %d\n", x);
}
```

### 3.2. Variables Globales

Son definidas fuera de cualquier función y son accesibles desde todas las funciones.

#### Ejemplo:

```c
#include <stdio.h>

int x = 20; // Variable global

void funcion();

int main() {
    printf("Valor de x en main: %d\n", x);
    funcion();
    return 0;
}

void funcion() {
    printf("Valor de x en funcion: %d\n", x);
}
```

**Nota:** El uso excesivo de variables globales puede dificultar el mantenimiento del código.



## 4. Recursividad

Una función recursiva es aquella que se llama a sí misma.

### Ejemplo: Calcular el factorial de un número

```c
#include <stdio.h>

int factorial(int n);

int main() {
    int num = 5;
    printf("El factorial de %d es %d\n", num, factorial(num));
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1; // Caso base
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}
```

**Explicación:**

- Si `n` es 0, el factorial es 1 (caso base).
- En otros casos, la función se llama a sí misma con `n - 1`.


## 5. Buenas Prácticas

1. Usa nombres descriptivos para las funciones.
2. Declara prototipos de funciones al principio del programa.
3. Divide el código en funciones pequeñas y reutilizables.
4. Libera recursos si las funciones utilizan memoria dinámica.
5. Evita el uso excesivo de variables globales.


