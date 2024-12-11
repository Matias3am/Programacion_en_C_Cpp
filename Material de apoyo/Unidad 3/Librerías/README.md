# 1.- Introducción

Las librerías en C son colecciones de funciones y macros predefinidas que pueden ser reutilizadas en diferentes programas. Estas librerías permiten realizar tareas comunes sin tener que escribir el código desde cero. Existen dos tipos principales de librerías en C:

1. **Librerías estáticas**: El código de la librería se copia al programa ejecutable durante la compilación.
2. **Librerías dinámicas**: El código de la librería se carga en tiempo de ejecución, reduciendo el tamaño del ejecutable.

## Ejemplo 1: Uso de `math.h`
La librería `math.h` proporciona funciones matemáticas avanzadas como senos, cosenos, logaritmos, entre otros.

```c
#include <stdio.h>
#include <math.h>

int main() {
    double numero = 9.0;

    // Calcular la raíz cuadrada
    double raiz = sqrt(numero);
    printf("La raíz cuadrada de %.2f es %.2f\n", numero, raiz);

    // Calcular el logaritmo natural
    double logaritmo = log(numero);
    printf("El logaritmo natural de %.2f es %.2f\n", numero, logaritmo);

    return 0;
}
```

**Explicación:**
1. `sqrt(numero)`: Calcula la raíz cuadrada del número.
2. `log(numero)`: Calcula el logaritmo natural (base e) del número.

---

## Ejemplo 2: Uso de `string.h`
La librería `string.h` contiene funciones para manipular cadenas de texto.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hola";
    char str2[20] = " Mundo";

    // Concatenar cadenas
    strcat(str1, str2);
    printf("Cadena concatenada: %s\n", str1);

    // Longitud de la cadena
    int longitud = strlen(str1);
    printf("Longitud de la cadena: %d\n", longitud);

    // Comparar cadenas
    int resultado = strcmp(str1, "Hola Mundo");
    if (resultado == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
```

**Explicación:**
1. `strcat(str1, str2)`: Une `str2` al final de `str1`.
2. `strlen(str1)`: Calcula la longitud de la cadena `str1`.
3. `strcmp(str1, "Hola Mundo")`: Compara dos cadenas y devuelve 0 si son iguales.

---

## Ejemplo 3: Uso de `stdlib.h`
La librería `stdlib.h` proporciona funciones generales como conversión de cadenas a números, asignación de memoria dinámica y más.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *numStr = "12345";

    // Convertir cadena a entero
    int numero = atoi(numStr);
    printf("El entero es: %d\n", numero);

    // Asignar memoria dinámica
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);  // Liberar memoria asignada
    return 0;
}
```

**Explicación:**
1. `atoi(numStr)`: Convierte una cadena que representa un número en un entero.
2. `malloc(size)`: Asigna un bloque de memoria dinámica.
3. `free(ptr)`: Libera la memoria previamente asignada.

---

## 1.2.- Conclusión
Las librerías en C son herramientas fundamentales que simplifican el desarrollo de programas al proporcionar funciones reutilizables. Es importante conocer las librerías más utilizadas para optimizar el código y resolver problemas comunes con eficiencia.

