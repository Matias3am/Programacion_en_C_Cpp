#include <stdio.h>
#define N 2
#define M 3

//const int N=2;
//const int M=2;

int main(int argc, char **argv){
  int Mapa[N][M]={{1,2,3},{4,5,6}};
  int Array[N];
  int a=10;
  
/*  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++)  
      Mapa[i][j]=i+j;*/
  
  for(int i=0; i<N; i++)
    Array[i]=i;
      
  printf("Datos:\n");
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++)
      printf("Mem[%p]: (%d,%d)=%d\t",&Mapa[i][j],i,j,Mapa[i][j]);
    printf("\n");
  }
  
  printf("Mapa Mem[%p]: %d\n",&Mapa);    
  
    
  printf("\n\n"); 
  for(int i=0; i<N; i++)
    printf("Mem[%p]: %d\n",&Array[i],Array[i]);
    
  printf("Array Mem[%p]: %d\n",&Array);    

  printf("\n");
}
