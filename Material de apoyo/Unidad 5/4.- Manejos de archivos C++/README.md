# 1.- Manejo de Archivos en C++

En C++, el manejo de archivos se realiza a través de las bibliotecas `<fstream>`, `<ifstream>`, y `<ofstream>`, 
las cuales permiten leer, escribir y modificar archivos de texto u otros tipos.

## 1.1.- Conceptos Básicos
### 1.1.1.- ¿Qué son los archivos?
Un archivo es un contenedor que almacena datos de manera persistente en un sistema de almacenamiento, como el disco duro. En programación, interactuar con archivos es esencial para guardar y recuperar datos.

### 1.1.2.- Clases Principales para Manejo de Archivos
* ofstream (output file stream): Se utiliza para escribir en archivos.
* ifstream (input file stream): Se utiliza para leer desde archivos.
* fstream (file stream): Se utiliza para realizar ambas operaciones (lectura y escritura).

### 1.2.- Creación y Escritura de Archivos

Para escribir en un archivo, usamos la clase ofstream. Si el archivo no existe, se crea automáticamente.

#### 1.2.1.- Sintaxis

```cpp
std::ofstream nombreDelArchivo("ruta_del_archivo");
if (nombreDelArchivo.is_open()) {
    nombreDelArchivo << "Texto a escribir en el archivo.\n";
    nombreDelArchivo.close();
}
```

#### 1.2.2.- Ejemplo

```cpp
#include <fstream>  // Biblioteca para manejo de archivos
#include <iostream> // Biblioteca para entrada/salida estándar

using namespace std;

int main() {
    // Crear un archivo de texto llamado "archivo.txt"
    ofstream archivo("archivo.txt");

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir datos en el archivo
        archivo << "Hola, este es un archivo de ejemplo." << endl;
        archivo << "C++ facilita la escritura en archivos." << endl;

        // Cerrar el archivo para guardar los cambios
        archivo.close();
        cout << "Archivo creado y datos escritos correctamente." << endl;
    } else {
        // Si el archivo no se pudo abrir, mostrar un mensaje de error
        cout << "Error: No se pudo abrir el archivo para escritura." << endl;
    }
    return 0;
}
```

### 1.2.3.- Explicación
* Se crea un objeto ofstream llamado archivo y se especifica el nombre del archivo (en este caso, archivo.txt).
* Se verifica si el archivo se abrió correctamente usando archivo.is_open().
* Usamos archivo << para escribir líneas de texto en el archivo.
* Finalmente, se cierra el archivo con archivo.close().

### 1.3.- Lectura de Archivos

Para leer un archivo, se utiliza la clase `ifstream`.

#### 1.3.1.- Sintaxis

```cpp
std::ifstream nombreDelArchivo("ruta_del_archivo");
if (nombreDelArchivo.is_open()) {
    std::string linea;
    while (getline(nombreDelArchivo, linea)) {
        // Procesar la línea
    }
    nombreDelArchivo.close();
}
```

#### 1.3.2.- Ejemplo

```cpp
#include <fstream>  // Biblioteca para manejo de archivos
#include <iostream> // Biblioteca para entrada/salida estándar
#include <string>   // Biblioteca para trabajar con strings

using namespace std;

int main() {
    // Abrir el archivo para lectura
    ifstream archivo("archivo.txt");

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        string linea;

        // Leer línea por línea hasta llegar al final del archivo
        while (getline(archivo, linea)) {
            // Imprimir cada línea en la consola
            cout << linea << endl;
        }

        // Cerrar el archivo
        archivo.close();
    } else {
        // Si el archivo no se pudo abrir, mostrar un mensaje de error
        cout << "Error: No se pudo abrir el archivo para lectura." << endl;
    }

    return 0;
}

```

### 1.3.3.- Explicación
* Se crea un objeto ifstream llamado archivo y se especifica el nombre del archivo.
* Usamos getline() para leer el archivo línea por línea.
* Cada línea se almacena en la variable linea y se imprime en la consola.
* Finalmente, el archivo se cierra con archivo.close().

### 1.4.- Modificación de Archivos

Para modificar un archivo, puedes leer su contenido, 
realizar los cambios necesarios y luego escribir el contenido modificado de nuevo en el archivo.

#### 1.4.1.- Ejemplo

```cpp
#include <fstream>  // Biblioteca para manejo de archivos
#include <iostream> // Biblioteca para entrada/salida estándar
#include <string>   // Biblioteca para trabajar con strings
#include <vector>   // Biblioteca para manejar vectores

using namespace std;

int main() {
    ifstream archivoEntrada("archivo.txt"); // Abrir archivo para lectura
    vector<string> lineas;                 // Vector para almacenar las líneas
    string linea;

    // Leer todas las líneas del archivo y guardarlas en el vector
    if (archivoEntrada.is_open()) {
        while (getline(archivoEntrada, linea)) {
            lineas.push_back(linea); // Añadir línea al vector
        }
        archivoEntrada.close();
    } else {
        cout << "Error: No se pudo abrir el archivo para lectura." << endl;
        return 1; // Terminar programa con error
    }

    // Modificar el contenido del archivo
    if (!lineas.empty()) {
        lineas[0] = "Esta es una línea modificada.";
    }

    ofstream archivoSalida("archivo.txt"); // Abrir archivo para escritura
    if (archivoSalida.is_open()) {
        for (const auto& l : lineas) {
            archivoSalida << l << endl; // Escribir cada línea en el archivo
        }
        archivoSalida.close();
        cout << "Archivo modificado correctamente." << endl;
    } else {
        cout << "Error: No se pudo abrir el archivo para escritura." << endl;
    }

    return 0;
}

```

### 1.4.2.- Explicación
* Se lee todo el contenido del archivo y se almacena en un vector de cadenas (vector<string>).
* Se realiza una modificación en la primera línea del archivo.
* Se abre el archivo nuevamente en modo escritura y se escribe el contenido actualizado.

### 1.5.- Añadir Datos a un Archivo

Si necesitas agregar datos a un archivo sin sobrescribir su contenido, usa el modo de apertura std::ios::app con la clase ofstream.

#### 1.5.1.- Sintaxis

```cpp
std::ofstream nombreDelArchivo("ruta_del_archivo", std::ios::app);
if (nombreDelArchivo.is_open()) {
    nombreDelArchivo << "Texto a añadir al archivo.\n";
    nombreDelArchivo.close();
}
```

#### 1.5.2.- Ejemplo

```cpp
#include <fstream>  // Biblioteca para manejo de archivos
#include <iostream> // Biblioteca para entrada/salida estándar

using namespace std;

int main() {
    // Abrir archivo en modo de agregar (append)
    ofstream archivo("archivo.txt", ios::app);

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        archivo << "Esta es una nueva línea añadida al archivo." << endl;
        archivo.close();
        cout << "Línea añadida correctamente." << endl;
    } else {
        cout << "Error: No se pudo abrir el archivo para agregar datos." << endl;
    }

    return 0;
}
```

### 1.5.3.- Explicación
* El modo ios::app asegura que los datos se añadan al final del archivo.
* No se sobrescribe el contenido existente.
