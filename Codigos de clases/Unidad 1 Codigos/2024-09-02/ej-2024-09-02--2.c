
#include <stdio.h>

int main(int argc, char **argv){

  unsigned int dir_host, mascara;
  unsigned int a,b,c,d;

  if(argc != 3)
  {
    printf("Error de uso. Usar dir_red IP MASK.\n");
    return 1;
  }
  
  sscanf(argv[1],"%d.%d.%d.%d",&a,&b,&c,&d);
  
  printf("Dirección IP: %d.%d.%d.%d\n",a,b,c,d);
  
  return 0;

}
