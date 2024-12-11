# 1.- Memoria Dinámica en C

## 1.1.- Introducción
La memoria dinámica en C permite a los programas gestionar manualmente el uso de memoria durante la ejecución, en lugar de depender exclusivamente de la memoria estática o automática (local). Esto resulta especialmente útil cuando:

- **El tamaño de los datos no se conoce de antemano**. Por ejemplo, al leer un archivo cuya longitud no es conocida o al gestionar estructuras de datos dinámicas como listas enlazadas, pilas o colas.
- **Se requiere optimización en el uso de memoria**. Solo se asigna la memoria necesaria, y se libera cuando ya no es requerida, ayudando a evitar desperdicios.

C proporciona las siguientes funciones para trabajar con memoria dinámica:  
- `malloc`  
- `calloc`  
- `realloc`  
- `free`

Estas funciones permiten asignar memoria en el **heap** (área de memoria utilizada para almacenamiento dinámico) y liberar esa memoria cuando ya no es necesaria, evitando **fugas de memoria**.


## 1.2.- Funciones de Memoria Dinámica

### 1.2.1.- `malloc`

La función `malloc` (**memory allocation**) solicita un bloque contiguo de memoria de un tamaño específico en bytes.  

**Nota importante:**  

El contenido del bloque de memoria no se inicializa, lo que significa que puede contener valores basura.  

#### Sintaxis

```c
void *malloc(size_t size);
```
- `size`: Número de bytes a asignar.  
- Devuelve: Un puntero al primer byte del bloque asignado, o `NULL` si la asignación falla.  

#### Ejemplo 1: Uso básico de `malloc`

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int));  // Asignar memoria para un entero

    if (ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    *ptr = 100;  // Asignar valor a la memoria asignada
    printf("Valor: %d\n", *ptr);

    free(ptr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `malloc(sizeof(int))` solicita memoria suficiente para almacenar un entero (normalmente 4 bytes).  
2. `if (ptr == NULL)` verifica si la asignación falló. Esto puede suceder si el sistema no tiene memoria suficiente.  
3. El puntero `ptr` apunta al bloque asignado, y el valor `100` se almacena en esta dirección de memoria.  
4. Finalmente, `free(ptr)` libera la memoria. **Siempre se debe liberar la memoria asignada para evitar fugas de memoria.**  


#### Ejemplo 2: Asignación de memoria para un array

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    arr = (int *)malloc(n * sizeof(int));  // Asignar memoria para un array de 5 enteros

    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Asignar valores al array
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `malloc(n * sizeof(int))` - Solicita memoria para un array de `n` enteros.
2. Se asignan valores al array y se imprimen.
3. `free(arr)` - Libera la memoria asignada.

**Puntos adicionales sobre este ejemplo:**  
- El tamaño de memoria solicitado es `n * sizeof(int)`, donde `n` es la cantidad de enteros. Esto garantiza que el bloque tenga espacio suficiente.  
- La memoria no está inicializada; por eso, los valores se asignan manualmente en el bucle `for`.  


### 1.2.2.- `calloc`

La función `calloc` (**contiguous allocation**) funciona de manera similar a `malloc`, pero:  
1. Solicita memoria para un número específico de elementos, cada uno de un tamaño específico.  
2. Inicializa todos los bytes de la memoria asignada a `0`.  

#### Sintaxis

```c
void *calloc(size_t num, size_t size);
```

- `num`: Número de elementos a asignar.  
- `size`: Tamaño de cada elemento en bytes.  
- Devuelve: Un puntero al bloque de memoria inicializado a `0`, o `NULL` si la asignación falla.  

#### Ejemplo 1: Uso básico de `calloc`

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)calloc(1, sizeof(int));  // Asignar memoria para un entero e inicializar a cero

    if (ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    printf("Valor inicial: %d\n", *ptr);

    *ptr = 100;  // Asignar valor a la memoria asignada
    printf("Nuevo valor: %d\n", *ptr);

    free(ptr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `calloc(1, sizeof(int))` - Solicita memoria para un entero e inicializa a cero.
2. `if (ptr == NULL)` - Verifica si la asignación de memoria fue exitosa.
3. `*ptr = 100` - Asigna un valor a la memoria asignada.
4. `free(ptr)` - Libera la memoria asignada.

#### Ejemplo 2: Asignación de memoria para un array

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    arr = (int *)calloc(n, sizeof(int));  // Asignar memoria para un array de 5 enteros e inicializar a cero

    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);  // Imprimir valores inicializados a cero
    }

    free(arr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `calloc(n, sizeof(int))` - Solicita memoria para un array de `n` enteros e inicializa a cero.
2. Se imprimen los valores inicializados a cero.
3. `free(arr)` - Libera la memoria asignada.

### 1.2.3.- `realloc`

La función `realloc` (**reallocation**) ajusta el tamaño de un bloque de memoria previamente asignado por `malloc` o `calloc`. Esto permite expandir o reducir el tamaño del bloque según sea necesario.

#### Sintaxis

```c
void *realloc(void *ptr, size_t new_size);
```

- `ptr`: Puntero al bloque de memoria previamente asignado.  
- `new_size`: Nuevo tamaño en bytes.  
- Devuelve: Un puntero al bloque redimensionado, o `NULL` si falla.  

#### Ejemplo 1: Redimensionar un array

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    arr = (int *)malloc(n * sizeof(int));  // Asignar memoria para un array de 5 enteros

    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Asignar valores al array
    }

    n = 10;
    arr = (int *)realloc(arr, n * sizeof(int));  // Redimensionar el array a 10 enteros

    if (arr == NULL) {
        printf("Error al redimensionar memoria\n");
        return 1;
    }

    for (int i = 5; i < n; i++) {
        arr[i] = i + 1;  // Asignar valores adicionales al array
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `malloc(n * sizeof(int))` - Solicita memoria para un array de `n` enteros.
2. `realloc(arr, n * sizeof(int))` - Redimensiona el array a un nuevo tamaño.
3. Se asignan valores adicionales al array y se imprimen.
4. `free(arr)` - Libera la memoria asignada.

**Notas importantes sobre `realloc`:**  
- Si el nuevo tamaño es mayor, el contenido previo permanece intacto. Los bytes adicionales no están inicializados.  
- Si falla, el bloque original no se libera automáticamente, por lo que es importante manejar este caso adecuadamente.  

#### Ejemplo 2: Redimensionar un bloque de memoria

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(2 * sizeof(int));  // Asignar memoria para 2 enteros

    if (ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    ptr[0] = 1;
    ptr[1] = 2;

    ptr = (int *)realloc(ptr, 4 * sizeof(int));  // Redimensionar memoria para 4 enteros

    if (ptr == NULL) {
        printf("Error al redimensionar memoria\n");
        return 1;
    }

    ptr[2] = 3;
    ptr[3] = 4;

    for (int i = 0; i < 4; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `malloc(2 * sizeof(int))` - Solicita memoria para 2 enteros.
2. `realloc(ptr, 4 * sizeof(int))` - Redimensiona la memoria para 4 enteros.
3. Se asignan valores adicionales y se imprimen.
4. `free(ptr)` - Libera la memoria asignada.

### 1.2.5.- `free`

La función `free` libera un bloque de memoria previamente asignado.

**Reglas importantes:**  
1. No se debe intentar acceder a la memoria liberada; esto puede causar errores impredecibles.  
2. Liberar memoria innecesaria ayuda a evitar fugas de memoria en programas largos o intensivos.

#### Ejemplo 1: Liberar memoria asignada con `malloc`

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int));  // Asignar memoria para un entero

    if (ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    *ptr = 100;  // Asignar valor a la memoria asignada
    printf("Valor: %d\n", *ptr);

    free(ptr);  // Liberar la memoria asignada
    return 0;
}
```

**Explicación:**

1. `malloc(sizeof(int))` - Solicita memoria para un entero.
2. `free(ptr)` - Libera la memoria asignada.
