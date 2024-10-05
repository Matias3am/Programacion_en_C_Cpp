# Clase del 23 de septiembre 1.c

El programa realizado en esta clase vuelve a tomar de referencia la resolución factorial vista en la anterior. 
Se calcula el factorial de un número entero positivo utilizando una función estándar y otra función que usa el paso de parámetros por referencia. Además, 
maneja la entrada del usuario mediante la función atoi.


## Funciones
### Función factorial
La función factorial calcula el factorial de un número entero positivo. Si el número es negativo, la función imprime un mensaje y retorna 0.

```c
int factorial(int n){
  int i;
  
  if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i=2; i<=n; i++)
    factorial_de_n *= i;
  
  return factorial_de_n;
}
```

### Función factorial_ref
La función factorial_ref también calcula el factorial, 
pero usa el paso de parámetros por referencia para almacenar el resultado en la variable apuntada por el puntero facto. 
Si el número es negativo, la función imprime un mensaje y retorna 0.

```c
int factorial_ref(int *facto, int n){
  int i;
  
  if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i=2; i<=n; i++)
    factorial_de_n *= i;
    
  *facto = factorial_de_n;
  
  return 1;
}
```
## Código 
```c
#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
  int i;
  
  if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i=2; i<=n; i++)
    factorial_de_n *= i;
  
  return factorial_de_n;
}

int factorial_ref(int *facto, int n){
  int i;
  
  if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i=2; i<=n; i++)
    factorial_de_n *= i;
    
  *facto = factorial_de_n;
  
  return 1;
}

int main(int argc, char**argv){

  int n, factorial_de_n;
  
  n = atoi(argv[1]);

  if(factorial_ref(&factorial_de_n,n))
    printf("El factorial de %d es %d.\nCon paso de parámetros por referencia.\n",n,factorial_de_n);
  else
    printf("Error de cálculo de factorial\n");

  return 0;
}
```

## Cómo Usar
Compila el programa con gcc:

```console
gcc -o factorial_ref_calculator factorial_ref_calculator.c
# Ejecuta el programa con un número entero positivo como argumento:
./factorial_ref_calculator 5
```

# Clase del 23 de septiembre 2.c

El programa realizado en esta clase realiza la operación de división entre dos números enteros, 
calculando el cociente y el resto mediante una función que usa el paso de parámetros por referencia. 
La entrada del usuario se maneja a través de argumentos de línea de comandos.

## Función dividir
La función dividir calcula el cociente y el resto de la división de dos números enteros. 
Los resultados se almacenan en las variables apuntadas por cociente y resto.

```c
void dividir(int *cociente, int *resto, int dividendo, int divisor)
{
  *cociente = (int) dividendo / divisor;
  *resto = dividendo % divisor;
}
```

## Código

```c
#include <stdio.h>
#include <stdlib.h>

void dividir(int *cociente, int *resto, int dividendo, int divisor)
{
  *cociente = (int) dividendo / divisor;
  *resto = dividendo % divisor;
}

int main(int argc, char**argv){

  int resultado, resto;
  int a = atoi(argv[1]), b = atoi(argv[2]);
  
  dividir(&resultado, &resto, a, b);

  printf("%d dividido en %d es %d y su resto es %d.\n", a, b, resultado, resto);
  return 0;
}
```

## Cómo Usar
Compila el programa con gcc:

```console
gcc -o division_calculator division_calculator.c
# Ejecuta el programa con dos números enteros como argumentos:
./division_calculator 10 3
```
