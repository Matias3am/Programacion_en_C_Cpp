# ¿Qué es CMake?
CMake es una herramienta que ayuda a configurar y generar archivos de compilación para proyectos de software. Es como un traductor: toma las instrucciones que describes en un archivo llamado CMakeLists.txt y genera los archivos necesarios para que una herramienta como make, Ninja u otro compilador pueda construir tu proyecto.

Por ejemplo, si tienes un proyecto en C++ con múltiples archivos fuente, puedes usar CMake para decirle:

* Dónde están tus archivos fuente.
* Qué bibliotecas necesitas enlazar.
* Qué tipo de ejecutable quieres generar.

CMake crea automáticamente los scripts que hacen que la compilación sea más fácil y flexible, independientemente del sistema operativo o las herramientas que uses.


# ¿Qué es Ninja?
Ninja es una herramienta para construir proyectos de software, similar a herramientas más antiguas como make. Básicamente, Ninja toma un archivo de instrucciones generado por CMake y se encarga de compilar tu código rápidamente.

La principal ventaja de Ninja es que es rápido y eficiente, especialmente para proyectos grandes. Ninja se centra en compilar solo los archivos que realmente necesitan actualizarse, lo que lo hace ideal para proyectos con muchos archivos o iteraciones rápidas.

## Instalación 

Generalmente CMAKE es una herramienta que funciona por si sola en sistemas operativos Linux, pero para los que trabajamos en windows 
CMAKE genera problemas, ya que windows tiene su propio compilador llamado make, esto genera algunos choques entre si, por eso se utiliza
en paralelo a CMAKE la herramienta NINJA.

Dicho lo anterior, para poder instalar cmake te sugiero entrar a la página oficial e ir a la sección de "descargar": 

* [Página Oficial](https://cmake.org/download/)

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/cmake_1.png)

Llegados a la página descarga el instalador.exe directo, y dale aceptar a todo fijandote que la opción añadir PATH esté marcada.

Una vez con CMAKE instalado en nuestro sistema, vamos a instalar NINJA, para eso entren al siguiente link 

* [NINJA](https://github.com/ninja-build/ninja/releases)

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/ninja_1.png)

Con NINJA descargado, lo que vamos a hacer es copiar el archivo .exe que se encuentra dentro de este y lo pegaremos en la carpeta de cmake
que se generó en nuestro disco duro:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/cmake_2.png)

En mi caso yo tengo la versión 3.30, ustedes deberían tener la más reciente. 

Una vez encontrada la carpeta, entramos y luego nos dirigimos a la carpeta bin dentro de la principal y pegamos el ninja.exe ahí

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/cmake_3.png)

Con esto ya deberias tener las 2 herramientas operativas en el sistema. 

Solo para asegurarte, te sugiero copiar la dirección bin de la carpeta cmake dentro de los path en tus variables de entorno 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/cmake_4.png)

### Chequeo de tener CMake y Ninja instalados:
Abre el cmd con windows + r , escribe "cmd" y dale enter, una vez en el cmd escribe los siguientes comandos:

* CMake: Puedes verificar ejecutando cmake --version.
* Ninja: Puedes verificar ejecutando ninja --version.

Si tienes todo en tu sistema deberian aparecerte las versiones de las herramientas instaladas, si no te aparece nada chequea que seguiste
bien todas las instrucciones.

## Como utilizar CMAKE / NINJA

En este ejemplo vamos a utilizar el siguiente esquema:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/cmake_5.png)

El cual es un esquema bastante utilizado, en donde tendremos nuestra 
* Carpeta principal: Donde se guardarán todos los archivos del programa
* src: Donde estará nuestro código principal.
* build: Aquí se generarán los ejecutables luego de compilar utilizando las herramientas.
* CmakeLists.txt: Define cómo configurar y compilar el proyecto.

## Archivo programa.cpp

El programa principal será simplemente un hola mundo en este ejemplo inicial

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "¡Hola, CMake y Ninja!" << endl;
    return 0;
}
```

## Archivo CmakeLists.txt

El contenido de este archivo será el siguiente:

```cmake
# Establecer la versión mínima de CMake
cmake_minimum_required(VERSION 3.20)

# Nombre del proyecto
project(EjemploNinja LANGUAGES CXX)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar el ejecutable
add_executable(EjemploNinja src/main.cpp)
```

No te asustes, te explicare paso a paso que significa cada cosa:

### Desglose: 

1.- Definición de versión mínima:

```cmake
cmake_minimum_required(VERSION 3.20)
```

* Asegura que estamos usando una versión compatible de CMake.

2.- Definición del proyecto:

```cmake
project(EjemploNinja LANGUAGES CXX)
```

* EjemploNinja: Es el nombre del proyecto. (No necesariamente el nombre de tu carpeta principal, es simplemente el nombre que tu eligas para
  tú proyecto) 
* LANGUAGES CXX: Especifica que el proyecto usa C++.

3.- Establecer el estándar de C++:

```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

```

* Define que se usará el estándar C++17 y que es obligatorio, esto es importante si queremos mantener un software, programa, etc. Que mantenga
una sintaxis acorde a las normas del lenguaje.

4.- Definición del ejecutable:

```cmake
add_executable(EjemploNinja src/main.cpp)
```
* Esto indica que se creará un ejecutable llamado EjemploNinja a partir del archivo fuente src/programa.cpp.
* El nombre puede ser distinto al que elegiste como nombre del proyecto, pero es coherente que el ejecutable resultante tenga el mismo
nombre que el que elegiste para el proyecto en general.

# Compilación del proyecto

Ya con nuestro cmake configurado y el programa listo, solamente nos queda compilar el programa, para eso sigue los siguientes pasos:

## 1.- Dirigete a la carpeta build, la cual dijimos con anterioridad que aquí generaremos los ejecutables

```cpp
cd build
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/ninja_2.png)

## 2.- Configurar CMake con el generador Ninja.
* Usa el comando cmake y especifica el generador Ninja con la opción -G:

```cpp
cmake -G "Ninja" ..
```

Explicación:

* -G "Ninja": Indica que Ninja será el generador de compilación.
* Los 2 puntos al final del comando indica que el archivo CMakeLists.txt está en el directorio padre (raíz del proyecto).
* Este comando generará los archivos necesarios para Ninja, como build.ninja.

Si todo salió bien deberías ver algo como lo siguiente: 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/ninja_3.png)

## 3.- Compilar el proyecto con Ninja
Una vez configurado, compila el proyecto ejecutando el siguiente comando en la misma carpeta:

```cpp
ninja
```
* Ninja leerá el archivo build.ninja generado por CMake y compilará el proyecto.

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/ninja_4.png)

## 4.- Ejecutar el programa
El ejecutable estará en el directorio build/. Puedes ejecutarlo con:

```cpp
./EjemploNinja
```
O el nombre que tú definiste para tu ejecutable, si todo salió bien deberias ver lo siguiente en la terminal: 

```terminal
¡Hola, CMake y Ninja!
```
![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/ninja_5.png)


## !!! Muy bien !!! 

Ahora realizaremos otro ejercicio para sacarle provecho realmente a lo que es CMAKE y NINJA, lo cual es.......

## Compilar multiples archivos con CMAKE / NINJA

Vamos a realizar un programa, pero ahora utilizando librerías, la lógica del programa será:

1.- Crear una librería que tenga una función para pedirle al usuario que ingrese 2 valores y los guarde en un array 
2.- Crear una segunda librería que compare esos valores y devuelva el mayor entre ellos:


