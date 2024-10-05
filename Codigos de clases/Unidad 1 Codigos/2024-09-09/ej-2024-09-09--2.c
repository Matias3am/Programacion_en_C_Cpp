
#include <stdio.h>

struct direc_ipv4{
  unsigned int a,b,c,d;
};

union union_direc_ipv4{
  unsigned int direc_ip;
  unsigned char x[4];
//  unsigned char a,b,c,d;
};

int main(int argc, char **argv){

  struct direc_ipv4 direc_ip, masc_red;
  union union_direc_ipv4 u_direc_ip;
  
  
  printf("Tamaño de struc direc_ipv4 es  %d bytes\n",sizeof(struct direc_ipv4));
  printf("Tamaño de union-direc_ipv4 es  %d bytes\n",sizeof(union union_direc_ipv4));   
  
  
  direc_ip.a = 10;
  direc_ip.b = 20;  
  direc_ip.c = 30;  
  direc_ip.d = 40;  
  
  printf("Dirección IP\t:\t%d.%d.%d.%d\n",direc_ip.a,direc_ip.b,direc_ip.c,direc_ip.d);

  u_direc_ip.direc_ip = 0xC0A80000;
 /* u_direc_ip.a = 10;
  u_direc_ip.b = 20;  
  u_direc_ip.c = 30;  
  u_direc_ip.d = 40;*/
  
  printf("Dirección IP\t:\t%d.%d.%d.%d\n",u_direc_ip.x[3],u_direc_ip.x[2],u_direc_ip.x[1],u_direc_ip.x[0]);
  
}
