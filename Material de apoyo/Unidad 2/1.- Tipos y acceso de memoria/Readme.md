# 1.- Tipos y Accesos de Memoria en Lenguaje C

## 1.1.- Introducción

En el lenguaje de programación C, la gestión de memoria es fundamental para el rendimiento y la eficiencia de los programas. C proporciona un control detallado sobre cómo se asigna y se accede a la memoria, lo que permite a los programadores optimizar el uso de recursos.

## 1.2.- Tipos de Memoria

En un programa en C, la memoria se organiza en varias áreas distintas:

1.2.1.- **Memoria Global**: 
   - Almacena variables globales y estáticas, así como constantes de cadena.
   - Estas variables están disponibles durante toda la ejecución del programa.

1.2.2.- **Pila (Stack)**:
   - Utilizada para almacenar variables locales de las funciones.
   - Las variables en la pila tienen un ámbito limitado a la función en la que se declaran y se gestionan automáticamente.

1.2.3.- **Montón (Heap)**:
   - Área de memoria dinámica que se puede asignar y liberar en tiempo de ejecución.
   - Utilizada para estructuras de datos cuyo tamaño no se conoce hasta que el programa está en ejecución.

## 1.3.- Acceso a la Memoria

### 1.3.1.- Variables Globales y Estáticas

Las variables globales y estáticas se declaran fuera de cualquier función y tienen una duración de vida que abarca toda la ejecución del programa.

```c
#include <stdio.h>

int global_variable = 10; // Variable global

void function() {
    static int static_variable = 5; // Variable estática
    printf("Variable estatica: %d\n", static_variable);
}

int main() {
    printf("Variable global : %d\n", global_variable);
    function();
    return 0;
}
```

### 1.3.2.- Variables Locales
Las variables locales se declaran dentro de las funciones y se almacenan en la pila. Su duración de vida está limitada al bloque de código en el que se declaran.

```c
#include <stdio.h>

void function() {
    int local_var = 10; // Variable local
    printf("Local Var: %d\n", local_var);
}

int main() {
    function();
    return 0;
}
```

### 1.3.3.- Memoria Dinámica
La memoria dinámica se gestiona mediante las funciones malloc(), calloc(), realloc() y free().

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5); // Asignación dinámica de memoria
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    free(ptr); // Liberar memoria
    return 0;
}
```

En el código anterior lo que hace el programa es generar un espacio de memoria del tamaño de un (int * 5), 
osea que si generalmente un dato del tipo entero utiliza 4 bytes de memoria en el sistema, en el código estamos
pidiendo unos 20 bytes de espacio en memoria para agrupar datos. 

Se explicará sobre la memoria dinámica y sus funciones más a fondo en su capitulo correspondiente. 
