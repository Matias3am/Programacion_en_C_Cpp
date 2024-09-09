
# Clase del 21 de agosto

Este repositorio contiene el código revisado en la clase del 21 de agosto. En esta clase, se revisó el uso de la función `main` con parámetros y el uso básico de la función `printf`.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye la librería `stdio.h` para el uso de entradas y salidas estándar. En este ejemplo, se utiliza la función `printf`.

2. Define la función `main` con argumentos `argc` y `argv`.
   - `argc` contiene el número de argumentos pasados desde la línea de comandos, incluyendo el path al ejecutable.
   - `argv` contiene la lista de argumentos como cadenas de caracteres.

3. Imprime el número de argumentos (`argc`) en formato decimal utilizando la función `printf`.

### Código

```c
#include <stdio.h>

int main(int argc, char **argv){
  /* Función main con argumentos argc y argv.
  argc contiene el número de argumentos desde la línea de comandos, incluyendo el path al ejecutable
  argv contiene la lista de argumentos como cadenas de caracteres.
  */

  //printf("\n\nHola\\ \n \n \n");
  printf("Número de argumentos: %d\n", argc); // Imprime el número de argumentos (argc) en formato decimal.
}
```

## Instrucciones

Para compilar y ejecutar el código, sigue estos pasos:

* Abre una terminal y navega al directorio donde se encuentra el archivo main.c.
* Compila el código utilizando el compilador gcc: gcc main.c -o main
* Ejecuta el programa: ./main arg1 arg2 arg3
  * Reemplaza arg1, arg2, arg3, etc., con los argumentos que desees pasar al programa.
