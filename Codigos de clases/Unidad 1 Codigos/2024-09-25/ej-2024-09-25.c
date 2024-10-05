#include <stdio.h>
#include <stdlib.h>

int factorial_rec(int n){
  int i;
  
 
  if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  if(n==0) return 1;
  
  int factorial_de_n = n*factorial_rec(n-1);
  
  return factorial_de_n;
}

int factorial(int n){
  int i;
  
  if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  int factorial_de_n = 1;
  for(i=2; i<=n; i++)
    factorial_de_n*=i;
  
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
    factorial_de_n*=i;
    
  *facto = factorial_de_n;
  
  return 1;
}

int main(int argc, char**argv){

  int n, factorial_de_n;
  
/*  printf("Ingrese n: ");
  if( !scanf("%d",&n) )
  {
    printf("Error de dato.\n");
    return 1;
  }*/
  
  n = atoi(argv[1]);
  
  /*if(n<0){
    printf("Ident.\n");
    return 0;
  }
  
  factorial_de_n = 1;
  for(i=2; i<=n; i++)
    factorial_de_n*=i;*/
  
  if(factorial_de_n=factorial_rec(4))
    printf("El factorial de %d es %d.\n",n,factorial_de_n);
  else
    printf("Error de cálculo de factorial\n");

/*  if(factorial_ref(&factorial_de_n,n))
    printf("El factorial de %d es %d.\nCon paso de parámetros por referencia.\n",n,factorial_de_n);
  else
    printf("Error de cálculo de factorial\n");*/

  return 0;
}
