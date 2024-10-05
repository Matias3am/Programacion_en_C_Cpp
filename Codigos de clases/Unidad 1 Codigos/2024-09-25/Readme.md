# Clase del 25 de septiembre 1.c

En esta clase se mantiene el ejemplo de factorial realizado en las anteriores, 
pero en este caso utilizando tres métodos diferentes: una función recursiva, una función iterativa, y una función que usa el paso de parámetros por referencia.

## Funciones
### Función factorial_rec
La función factorial_rec calcula el factorial de un número de forma recursiva. 
Si el número es negativo, la función imprime un mensaje y retorna 0. Si el número es 0, la función retorna 1.

```c
int factorial_rec(int n){
  if(n < 0){
    printf("Ident.\n");
    return 0;
  }
  
  if(n == 0) return 1;
  
  return n * factorial_rec(n - 1);
}
```

### Función factorial
La función factorial calcula el factorial de un número de forma iterativa. Si el número es negativo, la función imprime un mensaje y retorna 0.

```c
int factorial(int n){
  int i;
  
  if(n < 0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i = 2; i <= n; i++)
    factorial_de_n *= i;
  
  return factorial_de_n;
}
```

### Función factorial_ref
La función factorial_ref también calcula el factorial de forma iterativa, 
pero usa el paso de parámetros por referencia para almacenar el resultado en la variable apuntada por el puntero facto. 
Si el número es negativo, la función imprime un mensaje y retorna 0.

```c
int factorial_ref(int *facto, int n){
  int i;
  
  if(n < 0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i = 2; i <= n; i++)
    factorial_de_n *= i;
    
  *facto = factorial_de_n;
  
  return 1;
```

## Código 

```c
#include <stdio.h>
#include <stdlib.h>

int factorial_rec(int n){
  if(n < 0){
    printf("Ident.\n");
    return 0;
  }
  
  if(n == 0) return 1;
  
  return n * factorial_rec(n - 1);
}

int factorial(int n){
  int i;
  
  if(n < 0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i = 2; i <= n; i++)
    factorial_de_n *= i;
  
  return factorial_de_n;
}

int factorial_ref(int *facto, int n){
  int i;
  
  if(n < 0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i = 2; i <= n; i++)
    factorial_de_n *= i;
    
  *facto = factorial_de_n;
  
  return 1;
}

int main(int argc, char**argv){

  int n, factorial_de_n;
  
  n = atoi(argv[1]);
  
  if(factorial_de_n = factorial_rec(n))
    printf("El factorial de %d es %d.\n", n, factorial_de_n);
  else
    printf("Error de cálculo de factorial\n");

  return 0;
}

```

## Cómo usar

Compila el programa con gcc:

```console
gcc -o metodo_factorial metodo_factorial.c
# Ejecuta el programa con un número entero positivo como argumento:
./metodo_factorial 5
```

# Clase del 25 de septiembre 2.c

En esta clase se desarrolló un programa que demuestra cómo manipular matrices y arreglos unidimensionales, 
y cómo imprimir sus ubicaciones en memoria y sus valores. 
El código define una matriz y un arreglo, asigna valores a cada elemento y luego imprime estos valores junto con sus direcciones de memoria.

## Macros
El programa utiliza macros para definir las dimensiones de la matriz:

```c
#define N 2
#define M 3
```

La función main inicializa la matriz Mapa con valores específicos y asigna valores al arreglo Array. 
Luego, imprime los valores y las direcciones de memoria de los elementos de la matriz y del arreglo.


## Código 
```c
#include <stdio.h>
#define N 2
#define M 3

int main(int argc, char **argv){
  int Mapa[N][M] = {{1,2,3},{4,5,6}};
  int Array[N];
  int a = 10;
  
  for(int i = 0; i < N; i++)
    Array[i] = i;
      
  printf("Datos:\n");
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++)
      printf("Mem[%p]: (%d,%d) = %d\t", &Mapa[i][j], i, j, Mapa[i][j]);
    printf("\n");
  }
  
  printf("Mapa Mem[%p]: %d\n", &Mapa);    
    
  printf("\n\n"); 
  for(int i = 0; i < N; i++)
    printf("Mem[%p]: %d\n", &Array[i], Array[i]);
    
  printf("Array Mem[%p]: %d\n", &Array);    

  printf("\n");
}

```

## Cómo Usar
Compila el programa con gcc:

``` console
gcc -o ejemplo_matriz ejemplo_matriz.c
# Ejecuta el programa:
./ejemplo_matriz
```

