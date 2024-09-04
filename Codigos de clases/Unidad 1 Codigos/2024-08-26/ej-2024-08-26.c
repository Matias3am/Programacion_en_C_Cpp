// Código de la clase del 21 de agosto.
// Revisión main con parámetros y uso básico de función printf)
// A continuar en la siguiente clase

// Incluye librería stdio.h (para uso de entradas y salidas estándares. En este ejemplo, uso de printf
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
  /* Función main con argumentos argc y argv.
  argc contiene el número de argumentos desde la línea de comandos, incluyendo el path al ejecutable
  argv contiene la lista de argumentos como cadenas de carácteres.
  */
  
  char argumento[5];

  //printf("\n\nHola\\ \n \n \n");
  printf("Número de argumentos: %d\n",argc); //Imprime el número de argumentos (argc) en formato decimal.
  
  for(int i=0; i<argc; i++)
    printf("Argumento N° %d = %s\n",i,argv[i]);
    
  //printf("\n\n\n%c\n",argv[1]);
  
/*  strcpy(argumento,argv[1]);
  printf("\nArgumento: %s\n",argumento);
  for(int i=0; i<sizeof(argumento); i++)
    printf("argumentoq [%d] = %d\n",i,argumento[i]);*/
    
/*  char *p = argv[1];
  for(int i=0; i<10; i++){
    printf("argumento[%d] = %d\n",i,*p);
    p++;
  }
  
  for(int i=0; i<argc; i++){
    
  }*/
  
  
  int res = atoi(argv[1])*2;
  printf("Resultado= %d\n",res);
  
  
  
  return 0;
}
