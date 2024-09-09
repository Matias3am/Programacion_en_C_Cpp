
# Clase del 28 de agosto

Este repositorio contiene el código revisado en la clase del 28 de agosto. En esta clase, se revisó el uso de la función `sizeof` para determinar el tamaño de diferentes tipos de datos y variables en C, así como la impresión de valores en diferentes formatos.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye la librería `stdio.h` para el uso de entradas y salidas estándar.

2. Define la función `main` sin argumentos.

3. Declara y, en algunos casos, inicializa variables de diferentes tipos (`char`, `int`, `short`).

4. Utiliza la función `sizeof` para imprimir el tamaño en bytes de diferentes tipos de datos y variables.

5. Imprime los valores de las variables `char` en formato hexadecimal y decimal.

6. Imprime las direcciones de memoria de las variables.

7. Utiliza un puntero para acceder y modificar el valor de una variable `short`.

### Código

```c
#include <stdio.h>

int main(){
  
  char c = 4, c2 = -4;
  int i;
  
  short s;
  
  printf("El tamaño de un char es: %d bytes.\n", sizeof(char));
  printf("El tamaño de un char es: %d bytes.\n", sizeof(c));
  
  printf("El tamaño de un char * es: %d bytes.\n", sizeof(char *));

  printf("El tamaño de un short es: %d bytes.\n", sizeof(short));
  printf("El tamaño de un short es: %d bytes.\n", sizeof(s));
  printf("El tamaño de un short * es: %d bytes.\n", sizeof(short *));

  printf("El tamaño de un int es: %d bytes.\n", sizeof(int));
  printf("El tamaño de un int es: %d bytes.\n", sizeof(i));
  printf("El tamaño de un int * es: %d bytes.\n", sizeof(int *));  
  
  printf("c vale: %x (en hexa) y c2 vale: %x (en hexa)\n", c, c2);
  
  printf("c vale: %d (en decimal) y c2 vale: %d (en decimal)\n", c, c2);  
 
  printf("c vale: %d (en decimal) y c2 vale: %d (en decimal)\n", (unsigned char) c, (unsigned char) c2);
   
  printf("Posiciones de memoria:\n");
  
  printf("c: %p\n", &c);
  printf("s: %p\n", &s);
  printf("i: %p\n", &i);
   
  s = 1;
  short *pc = &s;
  
  printf("pc contiene: %p\n", pc);
  printf("0 : %d\n", *pc);
  pc++;
  printf("1 : %d\n", *pc);
   
  return 0;
}
```

Una de las cosas más importantes de esta clase es el de confirmar que el tamaño de un puntero es siempre el mismo (8 bytes), independiente si el puntero este referenciando a un char, short, int, float, etc. 
