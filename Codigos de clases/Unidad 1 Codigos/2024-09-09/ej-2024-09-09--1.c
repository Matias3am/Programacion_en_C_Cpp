
#include <stdio.h>

struct direc_ipv4{
  unsigned int a,b,c,d;
};

union union_direc_ipv4{
  unsigned int a,b,c,d;
};

int main(int argc, char **argv){

  unsigned int dir_host, mascara, dir_red;
  struct direc_ipv4 direc_ip, masc_red;
  int n_valores=-1;

  if(argc != 3)
  {
    printf("Error de uso. Usar dir_red IP MASK.\n");
    return 1;
  }
  
  n_valores=sscanf(argv[1],"%d.%d.%d.%d",&direc_ip.a,&direc_ip.b,&direc_ip.c,&direc_ip.d);
  n_valores=sscanf(argv[2],"%d.%d.%d.%d",&masc_red.a,&masc_red.b,&masc_red.c,&masc_red.d);  
  
  
  printf("Número valores: %d\n",n_valores);
  
  
  printf("Dirección IP\t:\t%d.%d.%d.%d\n",direc_ip.a,direc_ip.b,direc_ip.c,direc_ip.d);
  printf("Máscara IP\t:\t%d.%d.%d.%d\n",masc_red.a,masc_red.b,masc_red.c,masc_red.d);
  
  dir_host = direc_ip.d | (direc_ip.c << 8) | (direc_ip.b << 16) | (direc_ip.a << 24);
  mascara = masc_red.d | (masc_red.c << 8) | (masc_red.b << 16) | (masc_red.a << 24);
  
  dir_red = dir_host & mascara;
  
  printf("Dirección de red %X\n",dir_red);
  
  unsigned char *p = &dir_red;
  p+=3;
  printf("%d.",*p);
  p--;
  printf("%d.",*p);
  p--;
  printf("%d.",*p);
  p--;
  printf("%d\n",*p);
 
  printf("Tamaño de struc direc_ipv4 es  %d bytes\n",sizeof(struct direc_ipv4));
  printf("Tamaño de union-direc_ipv4 es  %d bytes\n",sizeof(union union_direc_ipv4)); 
  
  
  
   
  
  return 0;

}
