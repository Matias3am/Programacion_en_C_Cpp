#include <stdio.h>

int main(){
  
  char c=4, c2=-4;
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
  
  
  printf("c vale: %x (en hexa) y c2 vale: %x (en hexa)\n",c, c2);
  
  printf("c vale: %d (en decimal) y c2 vale: %d (en decimal)\n", c, c2);  
 
   printf("c vale: %d (en decimal) y c2 vale: %d (en decimal)\n",(unsigned char) c,(unsigned char)  c2);
   
   printf("Posiciones de memoria:\n");
  
   printf("c: %p\n",&c);
   printf("s: %p\n",&s);
   printf("i: %p\n",&i);
   
   s=1;
   short *pc = &s;
  
   printf("pc contiene: %p\n",pc);
   printf("0 : %d\n",*pc);
   pc++;
   printf("1 : %d\n",*pc);
   
  
  return 0;
}
