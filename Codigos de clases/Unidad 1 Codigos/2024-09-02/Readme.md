
# Clase del 2 de Septiembre

Este repositorio contiene el código revisado en la clase del 2 de septiembre. En esta clase, se revisaron operadores lógicos y bit a bit en C, así como el uso de la función `printf` para imprimir resultados.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye la librería `stdio.h` para el uso de entradas y salidas estándar.

2. Define la función `main` sin argumentos.

3. Declara e inicializa una variable `int` y varias variables `unsigned char`.

4. Utiliza operadores lógicos (`&&`, `||`, `!`) y bit a bit (`&`, `|`, `~`) para realizar operaciones sobre las variables `unsigned char`.

5. Imprime los resultados de estas operaciones utilizando la función `printf`.

### Código

```c
#include <stdio.h>

int main(){
  int i = -1000;
  //int p, q, f, g;
  /*  printf("i vale: %d\n", ++i);
  
  printf("i vale: %d\n", i);*/
  
  /*  if(!i)
    printf("Falso\n");
  else
    printf("Verdadero\n");
    
  
  p = i != 0;
  printf("p = %d\n", p);*/
  
  /*  p = (!i) ? 10 : 20;
  printf("p = %d\n", p);  */
  
  unsigned char p, q, f, g;
  
  p = 4; q = 0;
  
  printf("p && q = %x\n", p && q);
  printf("p || q = %x\n", p || q); 
  printf("no p = %x\n", !p);   
  
  printf("p & q = %x\n", p & q);
  printf("p | q = %x\n", p | q);   
  printf("no p = %x\n", ~p);     	
}
```


# Continuación clase 2 de Septiembre

Este repositorio contiene el código revisado en la clase del 2 de septiembre. En esta clase, se revisó el uso de argumentos de línea de comandos y la función `sscanf` para analizar direcciones IP en C.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye la librería `stdio.h` para el uso de entradas y salidas estándar.

2. Define la función `main` con argumentos `argc` y `argv`.
   - `argc` contiene el número de argumentos pasados desde la línea de comandos, incluyendo el path al ejecutable.
   - `argv` contiene la lista de argumentos como cadenas de caracteres.

3. Declara variables para almacenar la dirección IP y la máscara de red.

4. Verifica que el número de argumentos pasados sea correcto (deben ser 3: el nombre del programa, la dirección IP y la máscara).
   - Si el número de argumentos es incorrecto, imprime un mensaje de error y termina el programa.

5. Utiliza la función `sscanf` para analizar la dirección IP pasada como argumento y descomponerla en cuatro enteros.

6. Imprime la dirección IP descompuesta.

### Código

```c
#include <stdio.h>

int main(int argc, char **argv){

  unsigned int dir_host, mascara;
  unsigned int a, b, c, d;

  if(argc != 3)
  {
    printf("Error de uso. Usar dir_red IP MASK.\n");
    return 1;
  }
  
  sscanf(argv[1], "%d.%d.%d.%d", &a, &b, &c, &d);
  
  printf("Dirección IP: %d.%d.%d.%d\n", a, b, c, d);
  
  return 0;
}
```

## Instrucciones
Para compilar y ejecutar el código, sigue estos pasos:

* Abre una terminal y navega al directorio donde se encuentra el archivo main.c.
* Compila el código utilizando el compilador gcc:
    * gcc -o main main.c

* Ejecuta el programa pasando una dirección IP y una máscara como argumentos:
    * ./main 192.168.1.1 255.255.255.0
