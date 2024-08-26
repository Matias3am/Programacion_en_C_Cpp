# Instalar compilador de C/C++

El primer paso necesario para poder programar en C/C++ es tener un compilador, un compilador es una herramienta que traduce el lenguaje que estamos utilizando a otro. 

En el caso de C y C++ el compilador los traduce a lenguaje máquina, el cual es entendible para el dispositivo en donde estamos programando ( Pc, micro-controlador/computador, celular, etc).

Uno de los compiladores más utilizados en estos lenguajes es **GCC**, la forma más común de instalar este compilador en windows es dirigiendonos a la página de [SourceForge](https://sourceforge.net/projects/gcc-win64/).

Una vez ahí, bajamos hasta encontrar esta sección: 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_1.png)

Aquí podemos encontrar las distintas versiones del compilador que se encuentran disponibles, yo recomiendo bajar la **14.1.0** haciendo simplemente click al texto en azul de la versión y luego de unos 5 segundos empezará la descarga

Cuando la descarga finalice tenemos que descomprimir todos los archivos de .zip en otra carpeta con algun nombre de nuestra conveniencia, en mi caso yo le puse gcc-14.0.1

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_2.png)

Traspasados los datos del zip a nuestra nueva carpeta, tenemos que copiar y pegar la carpeta creada en nuestro disco duro 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_3.png)

Posteriormente, cuando la carpeta está ubicada en nuestro disco duro, tenemos que entrar buscando la carpeta llamada bin e ingresar 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_4.png)

Cuando estamos dentro de bin tenemos que copiar la dirección de la carpeta haciendo click en la sección de la imagen junto a CTRL + C

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_5.png)

Con la dirección copiada de la carpeta bin, presionamos la tecla windows y abrimos  " editar las variables de entorno del sistema"

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_6.png)

Entrando se va abrir la ventana de la izquierda que aparece en la imagen de abajo, entonces tenemos que presionar el boton que dice "variables de entorno" y aparecerá la ventana de la derecha.
En esta nueva ventana tenemos que buscar en el cuadro de arriba donde diga "PATH" y hacer doble click ahí: 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_7.png)

Entrando en Path veremos varios archivos, entonces tenemos que bajar a alguno de los cuadros de texto vacios que te aparecerán ahí e ingresar la dirección de la carpeta bin: 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/sourceforge_8.png)

Luego le das a aceptar a las ventanas para que se vayan cerrando y a la ultima le das aplicar y aceptar.

Con esto ya deberías tener el compilador listo en tu computador. 

# Cómo compilar un programa en C/C++ con VsCode

Vamos a hacer el ejemplo típico del Hello world, para eso primero abrimos nuestro VsCode y creamos un archivo cualquiera.c

Dentro del archivo escribiremos el siguiente codigo: 

```c
#include <stdio.h>

int main(){
    printf("Hola mundo  \\(/0_0)/");
    return 0;
}
```
![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/hola_mundo1.png)

Con nuestro codigo listo nos vamos a la terminal del VsCode y escribimos lo siguiente: 
```
gcc "nombre de nuestro programa".c -o "nombre que le queremos dar al ejecutable".exe
```
![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/hola_mundo2.png)

Al ingresar el comando a la terminal se deberia crear un archivo.exe en nuestro ambiente de trabajo:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/hola_mundo3.png)

Si se creo el .exe significa que nuestro programa se compilo bien, ahora para correr el ejecutable volvemos a la terminal de VsCode e ingresamos:

```
./"nombre del ejecutable".exe
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/hola_mundo4.png)

Y VOAAALAAA!!!! , tenemos nuestro poderosisimo hola mundo: 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/hola_mundo5.png)

## Ejemplo en c++
Los pasos son casi los mismos, solo que tenemos que crear un archivo base.cpp o .c++ en VsCode, en este caso el codigo seria: 

```cpp
#include <iostream>

int main(){

    std :: cout << "Hola mundo  \\(/0_0)/";
    return 0;
}
```

y para compilar el programa en la terminal usariamos: 

```
g++ "nombre de nuestro programa".(cpp o c++) -o "nombre que le queremos dar al ejecutable".exe
./"nombre del ejecutable".exe
```
