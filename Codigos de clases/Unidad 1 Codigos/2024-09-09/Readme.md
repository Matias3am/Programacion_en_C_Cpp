# Clase del 9 de septiembre 1.c

Este repositorio contiene el código revisado en la clase del 9 de septiembre, 
el programa desarrollado en la clase calcula la dirección de red dada una dirección IP y una máscara de subred. 
Demuestra el uso de struct y union en C para manejar direcciones IPv4.

## Definición de Estructura y Unión

El programa define una estructura direc_ipv4 y una unión union_direc_ipv4 para manejar direcciones IPv4. 
Cada una contiene cuatro enteros sin signo que representan los cuatro octetos de una dirección IPv4.

Es bueno a tener en cuenta que la diferencia entre una estructura y una union es que la estructura almacena secuencialmente en la memoria 
las variables definidas dentro de esta. Caso contrario en las uniones lo que se hace es guardar todas las variables en el mismo espacio de memoria utilizando 
el tamaño del tipo de dato más grande.

```c
struct direc_ipv4{
  unsigned int a,b,c,d;
};

union union_direc_ipv4{
  unsigned int a,b,c,d;
};
```

## Función Principal

La función main toma dos argumentos de línea de comandos: una dirección IP y una máscara de subred. 
Calcula la dirección de red realizando una operación AND a nivel de bit entre la dirección IP y la máscara de subred.

## Argumentos de Línea de Comandos

El programa espera dos argumentos:

* Dirección IP (en notación decimal con puntos)
* Máscara de subred (en notación decimal con puntos)

## Código : 

```c
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

  if(argc != 3) {
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

```

## Cómo Usar

Compila el programa con gcc:

```console
gcc -o ipv4_calculator ipv4_calculator.c
# Ejecuta el programa con una dirección IP y una máscara de subred:
./ipv4_calculator 192.168.1.1 255.255.255.0
```

# Clase del 9 de septiembre 2.c

El programa desarrollado en esta clase es una continuación de lo anterior, operar a través de struct y union.


## Definición de Estructura y Unión

El programa define una estructura direc_ipv4 y una unión union_direc_ipv4 para manejar direcciones IPv4. 
La estructura tiene cuatro enteros sin signo que representan los cuatro octetos de una dirección IPv4. 
La unión puede almacenar la dirección IP completa como un solo entero sin signo o como un arreglo de cuatro bytes.

```c
struct direc_ipv4{
  unsigned int a,b,c,d;
};

union union_direc_ipv4{
  unsigned int direc_ip;
  unsigned char x[4];
};

```

## Código

```c
#include <stdio.h>

struct direc_ipv4{
  unsigned int a,b,c,d;
};

union union_direc_ipv4{
  unsigned int direc_ip;
  unsigned char x[4];
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
  
  printf("Dirección IP\t:\t%d.%d.%d.%d\n",u_direc_ip.x[3],u_direc_ip.x[2],u_direc_ip.x[1],u_direc_ip.x[0]);
}

```

## Cómo usar
Compila el programa con gcc:

```console
gcc -o ipv4_struct_union ipv4_struct_union.c
# Ejecuta el programa:
./ipv4_struct_union
```

A diferencia del caso anterior, aquí se definen las direcciones dentro del mismo código y no usando ingreso de datos a través de la terminal
