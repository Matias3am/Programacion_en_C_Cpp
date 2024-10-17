# 1.- Manejo de Archivos en C

El manejo de archivos en C se realiza mediante un conjunto de funciones estándar proporcionadas por la biblioteca estándar stdio.h. 
Los archivos se pueden manipular de diversas maneras, incluyendo lectura, escritura y actualización.

## 1.1.- Abrir un Archivo
Para abrir un archivo, se utiliza la función fopen(). 
Esta función toma dos argumentos: el nombre del archivo y el modo en que deseas abrir el archivo.

```c
FILE *filePointer;
filePointer = fopen("example.txt", "r");
```

## 1.2.- Modos de Apertura

En el manejo de archivos tenemos varios modos para operar en estos: 

* "r": Abre el archivo para lectura (debe existir).
* "w": Abre el archivo para escritura (se crea si no existe, se trunca si existe).
* "a": Abre el archivo para añadir datos (se crea si no existe).
* "r+": Abre el archivo para lectura y escritura.
* "w+": Abre el archivo para lectura y escritura (se crea si no existe, se trunca si existe).
* "a+": Abre el archivo para lectura y añadir datos (se crea si no existe).

## 1.3.- Leer un archivo

Para leer datos de un archivo, puedes usar las funciones fscanf(), fgets(), o fread(), dependiendo del tipo de datos que estés leyendo.

### 1.3.1.- Leer una Cadena de Texto

```c
char buffer[100];
if (fgets(buffer, 100, filePointer) != NULL) {
    printf("%s", buffer);
}
```

### 1.3.2.- Leer Datos Numericos

```c
int number;
fscanf(filePointer, "%d", &number);
```

### 1.3.3.- Leer Datos Binarios

```c
fread(&number, sizeof(int),
```

## 1.4.- Escribir en un Archivo
Para escribir datos en un archivo, puedes usar las funciones fprintf(), fputs(), o fwrite(), 
dependiendo del tipo de datos que estés escribiendo.


### 1.4.1.- Escribir una Cadena de Texto

```c
fputs("Este es un ejemplo de texto.\n", filePointer);
```

### 1.4.2.- Escribir Numeros

```c
int number = 25;
fprintf(filePointer, "El número es %d\n", number);
```

### 1.4.3.- Escribir Datos Binarios

```c
fwrite(&number, sizeof(int), 1, filePointer);
```

## 1.5.- Cerrar un Archivo
Es importante cerrar un archivo una vez que hayas terminado de usarlo para asegurarte de que todos los datos 
se escriban correctamente y liberar los recursos del sistema.

```c
fclose(filePointer);
```

## 1.6.- Manejo de Errores
Siempre debes verificar si la operación de apertura de archivo ha tenido éxito antes de proceder con cualquier otra operación de archivo.

```c
if (filePointer == NULL) {
    perror("Error al abrir el archivo");
    return -1;
```

# 2.- Ejemplo 1

A continuación se muestra un ejemplo que abre un archivo, escribe en él, lo cierra, 
lo abre de nuevo para leer y finalmente lo cierra.

```c
#include <stdio.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("ejemplo.txt", "w");

    if (filePointer == NULL) {
        perror("Error al abrir el archivo");
        return -1;
    }

    fprintf(filePointer, "Hola, Mundo!\n");
    fclose(filePointer);

    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        perror("Error al abrir el archivo");
        return -1;
    }

    char buffer[100];
    while (fgets(buffer, 100, filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);
    return 0;
```

# Ejemplo 2

En este ejemplo se creara un archivo .txt que contenga 1000 numeros generados al azar

```c
#include <stdio.h> // Libreria estandar
#include <stdlib.h> // Libreria para usar función rand()
#include <time.h> // Libreria para randomizar mejor la función rand()


int numero_azar(){ // Funcion para generar datos al azar entre 1 a 15000 en formato int/enteros
    int numero = (rand() % 15000) + 1 ;
    return numero;
};

int main (){
    int i; // Inicializar contador
    FILE *fileptr; // Inicializar referencia a un archivo
    fileptr = fopen("ejemplo.txt", "w"); // Abrir archivo en modo escritura

    if (fileptr == NULL) {
        perror("Error al abrir el archivo");
        return -1;
    }

    srand(time(NULL)); // Función para que se generen datos al azar en cada ejecución del código 

    /* Sin la función anterior, rand() generará los mismo valores dentro de un minuto de tiempo 
       Osea que si mi código lo ejecuto 3 veces a las 12:00 de la tarde, mientras no sean las 
       12:01 el programa me generará los mismo valores siempre, haciendo time(NULL) nos aseguramos
       que sean los valores al azar independiente del tiempo de ejecución
    */

    for (i = 0; i <= 1000; i++) // Ciclo for para generar 100 datos
    {
        fprintf(fileptr,"%d\n", numero_azar()); // Función para escribir datos en formato "numero y ,"
    }
    
    fclose(fileptr); // Cerramos el archivo ( Se recomienda siempre hacerlo)
    return 0;
}
```
