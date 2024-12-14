
# 1.- Espacios de Nombres en C++

Los espacios de nombres en C++ son una herramienta esencial para organizar el código y prevenir conflictos entre identificadores 
(como nombres de funciones, variables o clases) en programas grandes o proyectos que integran múltiples bibliotecas.

Cuando varios programadores trabajan en un proyecto o se usan librerías diferentes, 
es posible que dos identificadores tengan el mismo nombre. 
Los espacios de nombres evitan que estas colisiones afecten el funcionamiento del programa al agrupar estos identificadores bajo un contenedor.

## 1.2.- Conceptos Básicos

### 1.2.1.- ¿Qué es un Espacio de Nombres?

Un espacio de nombres es como una "carpeta" lógica dentro del programa que agrupa declaraciones y definiciones bajo un identificador común.

#### 1.2.2.- Sintaxis

```cpp
namespace NombreDelEspacioDeNombres {
    // Declaraciones y definiciones (funciones, variables, clases, etc.)
}
```

* Todo lo que está definido dentro del espacio de nombres solo puede ser accedido prefijando el nombre del espacio
  (NombreDelEspacioDeNombres::) o importándolo explícitamente con using namespace.


### 1.3.- Uso de `using namespace std`

C++ incluye un espacio de nombres llamado std, donde se agrupan todas las funciones y clases de la biblioteca estándar 
(como cout, cin, endl, y string).

#### 1.3.1.- Ejemplo sin `using namespace std`

```cpp
#include <iostream> // Incluye la biblioteca de entrada y salida

int main() {
    // Sin usar 'using namespace std', se debe prefijar 'std::' antes de cada función estándar
    std::cout << "Hola, mundo!" << std::endl; // 'std::cout' para imprimir en consola
    return 0; // Indica que el programa terminó correctamente
}
```

#### 1.3.2.- Ejemplo con `using namespace std`

```cpp
#include <iostream> // Incluye la biblioteca estándar
using namespace std; // Importa todo el espacio de nombres 'std'

int main() {
    // Ya no es necesario usar el prefijo 'std::'
    cout << "Hola, mundo!" << endl; // 'cout' y 'endl' pertenecen a 'std'
    return 0; // Indica que el programa terminó correctamente
}
```

### 1.4.- Creación de Espacios de Nombres Propios

Definir tus propios espacios de nombres es útil para organizar el código en módulos o librerías independientes.
Esto asegura que las funciones y variables que defines no interfieran con las de otros programadores o bibliotecas.

#### 1.4.1.- Ejemplo 1: Función dentro de un Espacio de Nombres

```cpp
#include <iostream> // Biblioteca estándar

// Definición de un espacio de nombres personalizado
namespace MiEspacioDeNombres {
    void saludar() {
        std::cout << "Hola desde MiEspacioDeNombres!" << std::endl; // Salida personalizada
    }
}

int main() {
    // Accedemos a la función del espacio de nombres usando 'MiEspacioDeNombres::'
    MiEspacioDeNombres::saludar(); // Llama a la función 'saludar' del espacio definido
    return 0;
}
```

#### 1.4.2.- Ejemplo 2: Funciones Matemáticas en un Espacio de Nombres

```cpp
#include <iostream> // Biblioteca estándar

// Espacio de nombres para agrupar funciones matemáticas
namespace Matematicas {
    // Función para sumar dos números
    int sumar(int a, int b) {
        return a + b; // Retorna la suma de 'a' y 'b'
    }
}

int main() {
    // Llamamos a la función 'sumar' usando el prefijo 'Matematicas::'
    int resultado = Matematicas::sumar(5, 3); // Llama a 'sumar' con argumentos 5 y 3
    std::cout << "La suma es: " << resultado << std::endl; // Muestra el resultado en consola
    return 0;
}
```

#### 1.4.3.- Ejemplo 3: Combinar Espacios de Nombres

```cpp
#include <iostream>

namespace Geometria {
    namespace Formas {
        void dibujarCuadrado() {
            std::cout << "Dibujando un cuadrado." << std::endl;
        }
    }
}

int main() {
    // Acceso al espacio de nombres anidado
    Geometria::Formas::dibujarCuadrado(); // Llama a la función dentro de espacios anidados
    return 0;
}
```

* Geometria contiene otro espacio de nombres interno llamado Formas.
* La función dibujarCuadrado está definida dentro de Formas.
* Para acceder a esta función, usamos la ruta completa Geometria::Formas::dibujarCuadrado.

## 1.5.- Recomendaciones al Usar Espacios de Nombres

* Prefiere nombres descriptivos: Usa nombres significativos para que sea evidente la intención del espacio de nombres.
* Evita usar using namespace en archivos grandes: Esto puede causar conflictos de nombres, especialmente si usas múltiples bibliotecas.
* Usa espacios de nombres para modularidad: Agrupa funciones, variables y clases relacionadas en un mismo espacio de nombres para mantener tu código organizado.
