
#include <stdio.h>

int main(int argc, char **argv){

  unsigned int dir_host, mascara, dir_red;
  unsigned int a,b,c,d;
  unsigned int e,f,g,h;
  int n_valores=-1;

  if(argc != 3)
  {
    printf("Error de uso. Usar dir_red IP MASK.\n");
    return 1;
  }
  
  n_valores=sscanf(argv[1],"%d.%d.%d.%d",&a,&b,&c,&d);
  n_valores=sscanf(argv[2],"%d.%d.%d.%d",&e,&f,&g,&h);  
  
  //printf("Número valores: %d\n",n_valores);
  
  printf("Dirección IP\t:\t%d.%d.%d.%d\n",a,b,c,d);
  printf("Máscara IP\t:\t%d.%d.%d.%d\n",e,f,g,h);
  
  dir_host = d | (c << 8) | (b << 16) | (a << 24);
  mascara = h | (g << 8) | (f << 16) | (e << 24);
  
  dir_red = dir_host & mascara;
  
  printf("Dirección de red %X",dir_red);
  
  return 0;

}
