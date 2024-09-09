#include <stdio.h>

int main(){

  int n=-6;
  
  if(n>0)
    goto Positivo;

  printf("Negativo.\n");  
  
  goto Fin;
  
  Positivo:
    printf("Positivo.\n");
    
  Fin:
  
  return 0;
}
