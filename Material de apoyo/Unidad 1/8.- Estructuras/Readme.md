# 1) Estructuras 

Una estructura es una forma de agrupar distintos tipos de datos bajo un solo nombre, en un mismo lugar. 
 A diferencia de un array, que solo puede almacenar múltiples datos del mismo tipo, 
una estructura puede contener variables de diferentes tipos (int, float, char, etc.), sin necesidad de que sean del mismo tipo de dato.

# 1.1) Sintaxis 

Para declarar una estructura, se utiliza la siguiente sintaxis:

```c
struct nombre_estructura {
  float dato1;
  int dato2;
  char dato3;
};
```

Dentro de la estructura, solo se declaran las variables. La asignación de valores se realiza fuera de la declaración de la estructura.

# 1.2) Acceder / Modificar datos de una variable

Para asignar valores a una estructura, primero debemos crear una instancia de la misma. Una estructura actúa como un molde o base.

Imaginemos que creamos una estructura llamada “estudiante” que contiene el nombre, la edad y la carrera. Cada estudiante es distinto, 
por lo que debemos inicializar un “molde/base” para cada uno de ellos.

```c
struct estudiante {
  char nombre[50];
  int edad;
  char carrera[50];
};

// Crear una instancia de la estructura
struct estudiante estudiante1;
struct estudiante estudiante2;
struct estudiante estudiante3;

// ETC.....
```

Volvamos al ejemplo anterior 

```c
#include <stdio.h>

struct nombre_estructura {
  float dato1;
  int dato2;
  char dato3;
};

int main(){
    struct nombre_estructura ejemplo;
    
    ejemplo.dato1 = 4.51;
    ejemplo.dato2 = 10;
    ejemplo.dato3 = 'b';

    struct nombre_estructura ejemplo2 = {4.51, 10 , 'b'};

    return 0;
}
```

La asignación de datos en una estructura se puede hacer de 2 formas:

## 1.2.1) Instanciar y asignar después
```c
// Generar instancia
struct nombre_estructura ejemplo;

// Asignar valores a las propiedades
ejemplo.dato1 = 4.51;
ejemplo.dato2 = 10;
ejemplo.dato3 = 'b';
```

## 1.2.2) Instanciar y asignar en el instante

```c
// Generar instancia y asignar
struct nombre_estructura ejemplo2 = {4.51, 10 , 'b'};
```

## 1.2.3) Desplegar información de una estructura

Así como asignamos valores tambien podemos desplegarlos usando la función printf() como se puede visualizar en el siguiente código:

```c
#include <stdio.h>

struct nombre_estructura {
  float dato1;
  int dato2;
  char dato3;
};

int main(){
    struct nombre_estructura ejemplo;

    ejemplo.dato1 = 4.51;
    ejemplo.dato2 = 10;
    ejemplo.dato3 = 'b';

    struct nombre_estructura ejemplo2 = {4.51,10,'b'};


    printf("Caracteristicas de ejemplo: \n");
    printf("el dato1 es: %f, el dato2 es: %d, el dato3 es: %c\n", ejemplo.dato1, ejemplo.dato2, ejemplo.dato3);
    printf("Caracteristicas de ejemplo2: \n");
    printf("el dato1 es: %f, el dato2 es: %d, el dato3 es: %c\n", ejemplo2.dato1, ejemplo2.dato2, ejemplo2.dato3);
    return 0;
}
```

Salida del código:

```
Caracteristicas de ejemplo: 
el dato1 es: 4.510000, el dato2 es: 10, el dato3 es: b
Caracteristicas de ejemplo2: 
el dato1 es: 4.510000, el dato2 es: 10, el dato3 es: b
```

# 2) Estructura con punteros 

En C, los punteros pueden apuntar a estructuras, lo que permite manipular los datos de la estructura a través de sus direcciones de memoria. 
Esto es útil para pasar estructuras a funciones sin necesidad de copiar toda la estructura, lo que ahorra memoria y tiempo de ejecución.

# 2.1) Sintaxis

Utilizando el mismo caso anterior, para declarar un puntero a una estructura, se utiliza la siguiente sintaxis:

```c
struct nombre_estructura {
  float dato1;
  int dato2;
  char dato3;
};

struct nombre_estructura *ptr;
```
En este ejemplo, ptr es un puntero a una estructura de tipo nombre_estructura.

# 2.3) Asignación de punteros a estructuras

Para asignar un puntero a una estructura, primero se debe crear una instancia de la estructura 
y luego asignar la dirección de esa instancia al puntero utilizando el operador &.

```c
struct nombre_estructura ejemplo;
struct nombre_estructura *ptr;

ptr = &ejemplo;
```

# 2.4) Acceder / Modificar datos de una variable de la Estructura a través del Puntero

Para acceder a los campos de la estructura a través del puntero, se utiliza el operador de flecha (->).

```c
ptr->dato1 = 4.51;
ptr->dato2 = 10;
ptr->dato3 = 'b';
```

## 2.4.1) Ejemplo en código:

```c
#include <stdio.h>

struct nombre_estructura {
  float dato1;
  int dato2;
  char dato3;
};

int main() {
    struct nombre_estructura ejemplo;
    struct nombre_estructura *ptr;

    // Asignar la dirección de la estructura al puntero
    ptr = &ejemplo;

    // Asignar valores a través del puntero
    ptr->dato1 = 4.51;
    ptr->dato2 = 10;
    ptr->dato3 = 'b';

    // Imprimir valores
    printf("Caracteristicas de ejemplo: \n");
    printf("dato1: %.2f\n", ptr->dato1);
    printf("dato2: %d\n", ptr->dato2);
    printf("dato3: %c\n", ptr->dato3);

    return 0;
}
```

Salida del código:

```
Caracteristicas de ejemplo: 
dato1: 4.51
dato2: 10
dato3: b
```

