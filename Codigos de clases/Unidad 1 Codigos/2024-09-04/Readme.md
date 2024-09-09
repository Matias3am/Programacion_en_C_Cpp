# Clase del 4 de septiembre

Este repositorio contiene el código revisado en la clase del 4 de septiembre. En esta clase, se revisó el uso de argumentos de línea de comandos, la función `sscanf` para analizar direcciones IP y máscaras, y la manipulación de bits para calcular la dirección de red en C.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye la librería `stdio.h` para el uso de entradas y salidas estándar.

2. Define la función `main` con argumentos `argc` y `argv`.
   - `argc` contiene el número de argumentos pasados desde la línea de comandos, incluyendo el path al ejecutable.
   - `argv` contiene la lista de argumentos como cadenas de caracteres.

3. Declara variables para almacenar la dirección IP, la máscara de red y la dirección de red.

4. Verifica que el número de argumentos pasados sea correcto (deben ser 3: el nombre del programa, la dirección IP y la máscara).
   - Si el número de argumentos es incorrecto, imprime un mensaje de error y termina el programa.

5. Utiliza la función `sscanf` para analizar la dirección IP y la máscara pasadas como argumentos y descomponerlas en cuatro enteros.

6. Imprime la dirección IP y la máscara descompuestas.

7. Calcula la dirección de host y la máscara en formato de 32 bits.

8. Calcula la dirección de red aplicando una operación AND bit a bit entre la dirección de host y la máscara.

9. Imprime la dirección de red en formato hexadecimal.

### Código

```c
#include <stdio.h>

int main(int argc, char **argv){

  unsigned int dir_host, mascara, dir_red;
  unsigned int a, b, c, d;
  unsigned int e, f, g, h;
  int n_valores = -1;

  if(argc != 3)
  {
    printf("Error de uso. Usar dir_red IP MASK.\n");
    return 1;
  }
  
  n_valores = sscanf(argv[1], "%d.%d.%d.%d", &a, &b, &c, &d);
  n_valores = sscanf(argv[2], "%d.%d.%d.%d", &e, &f, &g, &h);  
  
  //printf("Número valores: %d\n", n_valores);
  
  printf("Dirección IP\t:\t%d.%d.%d.%d\n", a, b, c, d);
  printf("Máscara IP\t:\t%d.%d.%d.%d\n", e, f, g, h);
  
  dir_host = d | (c << 8) | (b << 16) | (a << 24);
  mascara = h | (g << 8) | (f << 16) | (e << 24);
  
  dir_red = dir_host & mascara;
  
  printf("Dirección de red %X", dir_red);
  
  return 0;
}
```

## Instrucciones
Para compilar y ejecutar el código, sigue estos pasos:

* Abre una terminal y navega al directorio donde se encuentra el archivo main.c.
* Compila el código utilizando el compilador gcc:
    * gcc -o main main.c
* Ejecuta el programa pasando una dirección IP y una máscara como argumentos:
    * ./main 192.168.1.1 255.255.255.0   ( Prueba con los valores que tu quieras)
 
# Continuación clase del 4 de septiembre

Este repositorio contiene el código revisado en la clase del 4 de septiembre. En esta clase, se revisó el uso de la instrucción `goto` en C para controlar el flujo del programa.

## Descripción del Código

El código incluido en este repositorio realiza las siguientes acciones:

1. Incluye la librería `stdio.h` para el uso de entradas y salidas estándar.

2. Define la función `main` sin argumentos.

3. Declara e inicializa una variable `int`.

4. Utiliza la instrucción `goto` para saltar a diferentes partes del código basándose en la condición de la variable `int`.

5. Imprime mensajes indicando si el valor de la variable es positivo o negativo.

### Código

```c
#include <stdio.h>

int main(){

  int n = -6;
  
  if(n > 0)
    goto Positivo;

  printf("Negativo.\n");  
  
  goto Fin;
  
  Positivo:
    printf("Positivo.\n");
    
  Fin:
  
  return 0;
}

