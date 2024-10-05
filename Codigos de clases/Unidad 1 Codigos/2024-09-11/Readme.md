# Clase del 11 de septiembre

El programa realizado en esta clase calcula el factorial de un número entero positivo. 
Utiliza una función separada para calcular el factorial y maneja la entrada del usuario mediante la función scanf.

## Función factorial
La función factorial calcula el factorial de un número entero positivo. Si el número es negativo, la función imprime un mensaje y retorna 0.

El factorial es algo como lo siguiente: 
```
1! = 1 * 1 = 1
3! = 1 * 2 * 3 = 6
5! = 1 * 2 * 3 * 4 * 5 = 70
```

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

## Código
```c
#include <stdio.h>

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

int main(int argc, char**argv){

  int n = 20, factorial_de_n;
  
  printf("Ingrese n: ");
  if( !scanf("%d",&n) )
  {
    printf("Error de dato.\n");
    return 1;
  }
    
  factorial_de_n = factorial(n);
  
  if(factorial_de_n)
    printf("El factorial de %d es %d.\n",n,factorial_de_n);
  else
    printf("Error de cálculo de factorial\n");

  return 0;
}
```

## Cómo usar
Compila el programa con gcc:

```console
gcc -o calculadora_factorial calculadora_factorial.c
# Ejecuta el programa:
./calculadora_factorial
```
