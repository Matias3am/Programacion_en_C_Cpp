
# Clase del 26 de agosto

Este repositorio contiene la extensión del código revisado en la clase del 21 de agosto. En esta clase, se revisó el uso de la función `main` con parámetros y el uso básico de la función `printf`.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye las librerías `stdio.h`, `string.h` y `stdlib.h` para el uso de entradas y salidas estándar, manipulación de cadenas y conversiones de tipos, respectivamente.

2. Define la función `main` con argumentos `argc` y `argv`.
   - `argc` contiene el número de argumentos pasados desde la línea de comandos, incluyendo el path al ejecutable.
   - `argv` contiene la lista de argumentos como cadenas de caracteres.

3. Imprime el número de argumentos (`argc`) en formato decimal utilizando la función `printf`.

4. Itera sobre los argumentos y los imprime uno por uno.

5. Convierte el primer argumento a un entero utilizando `atoi` y lo multiplica por 2, imprimiendo el resultado.

### Código

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
  /* Función main con argumentos argc y argv.
  argc contiene el número de argumentos desde la línea de comandos, incluyendo el path al ejecutable
  argv contiene la lista de argumentos como cadenas de caracteres.
  */
  
  char argumento[5];

  //printf("\n\nHola\\ \n \n \n");
  printf("Número de argumentos: %d\n", argc); // Imprime el número de argumentos (argc) en formato decimal.
  
  for(int i = 0; i < argc; i++)
    printf("Argumento N° %d = %s\n", i, argv[i]);
    
  /*  strcpy(argumento, argv[1]);
  printf("\nArgumento: %s\n", argumento);
  for(int i = 0; i < sizeof(argumento); i++)
    printf("argumento[%d] = %d\n", i, argumento[i]);*/
    
  /*  char *p = argv[1];
  for(int i = 0; i < 10; i++){
    printf("argumento[%d] = %d\n", i, *p);
    p++;
  }
  
  int res = atoi(argv[1]) * 2;
  printf("Resultado = %d\n", res);
  
  return 0;
}
```

También en el código están presentes estas lineas de código comentadas : 

```c
  strcpy(argumento, argv[1]);
  printf("\nArgumento: %s\n", argumento);
  for(int i = 0; i < sizeof(argumento); i++)
    printf("argumento[%d] = %d\n", i, argumento[i]);
    
  char *p = argv[1];
  for(int i = 0; i < 10; i++){
    printf("argumento[%d] = %d\n", i, *p);
    p++;
  } 
```

La primera parte lo que hace es escribir el string que se encuentra en argv[1] en la variable argumento, para luego iterar sobre este. 

En la segunda parte lo que se hace es crear un puntero que "apunte" al primer caracter de la linea de comandos argv[1] e itera sobre argv[] con p++,
 lo que hace que si *p estaba apuntado al primer valor, entonces despues apunte al segundo y así consecutivamente 
