#include <stdio.h>
#include <stdlib.h>

void dividir(int *cociente, int *resto, int dividendo, int divisor)
{
  *cociente = (int) dividendo / divisor;
  *resto = dividendo % divisor;
}

int main(int argc, char**argv){

  int resultado, resto;
  int a = atoi(argv[1]), b=atoi(argv[2]);
  
  dividir(&resultado, &resto, a,b);

  printf("%d dividido en %d es %d y su resto es %d.\n",a, b, resultado, resto);
  return 0;
}
