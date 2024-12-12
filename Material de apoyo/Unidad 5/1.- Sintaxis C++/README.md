
# 1.- Sintaxis Básica de C++

## 1.1.- Tipos de Datos
* int: Representa números enteros.
* float: Representa números con punto flotante de precisión simple.
* double: Representa números con punto flotante de precisión doble.
* char: Representa un solo carácter.
* bool: Representa valores lógicos (true o false).
* std::string: Representa una secuencia de caracteres (cadena de texto).

### 1.1.1.- Ejemplo 1: Declaración de datos 
```cpp
#include <iostream>

int main() {
    int edad = 25;
    float altura = 1.75;
    char inicial = 'A';
    bool esEstudiante = true;
}
```

## 1.2.- Entrada y salida de datos

En C++, la entrada y salida de datos se gestionan principalmente utilizando las bibliotecas estándar <iostream> y <iomanip>. Estas permiten interactuar con el usuario a través de la consola.

La libreria estandar es: "iostream"
* Entrada: Se realiza con std::cin.
* Salida: Se realiza con std::cout.
* Fin de línea: Se utiliza std::endl o el carácter \n.

### Ejemplo 2.1: Salida de datos
```cpp
#include <iostream>

int main() {
    int edad = 25;
    double salario = 450000;

    std::cout << "Tu edad es: " << edad << std::endl;
    std::cout << "Tu salario es: $" << salario << std::endl;

    return 0;
}
```

### Ejemplo 2.2: Entrada de datos
```cpp
#include <iostream>

int main() {
    int numero;
    std::cout << "Ingresa un número: "; // Mensaje para el usuario
    std::cin >> numero;                // Captura la entrada
    std::cout << "El número ingresado es: " << numero << std::endl;
    return 0;
}
```

También puedes pedir al usuario que ingrese mas de 1 valor a la vez: 

### Ejemplo 2.3: Entrada de multiples datos
```cpp
#include <iostream>

int main() {
    int x, y;
    std::cout << "Ingresa dos números separados por espacio: ";
    std::cin >> x >> y;
    std::cout << "Números ingresados: " << x << " y " << y << std::endl;
    return 0;
}
```

O pedir al usuario que ingrese cadenas de texto

### Ejemplo 2.4: Entrada de cadenas de texto grandes
```cpp
#include <iostream>
#include <string> // Necesario para std::string

int main() {
    std::string nombre;
    std::cout << "Ingresa tu nombre completo: ";
    std::getline(std::cin, nombre);
    std::cout << "Hola, " << nombre << std::endl;
    return 0;
}
```

Diferencias entre std::cin y std::getline():
* std::cin solo captura hasta el primer espacio.
* std::getline() lee toda la línea, incluyendo los espacios.


## 1.3.- Operaciones aritmeticas

En cuanto a las operaciones aritmeticas en C++ no hay grán diferencia en comparación a las de C, son practicamente iguales 
las operaciones de relación / aritmeticas y lógicas, la unica diferencia son las librerias que se utilizan para expandir
algunas operaciones

### Ejemplo 3: Operaciones
```cpp
#include <iostream>

int main() {
    // Declaración de variables
    int a = 10, b = 3;          // Números enteros
    double x = 15.0, y = 4.0;   // Números decimales

    // Operaciones básicas
    std::cout << "Suma: " << a << " + " << b << " = " << (a + b) << std::endl;         // Suma
    std::cout << "Resta: " << a << " - " << b << " = " << (a - b) << std::endl;       // Resta
    std::cout << "Multiplicación: " << a << " * " << b << " = " << (a * b) << std::endl; // Multiplicación
    std::cout << "División: " << x << " / " << y << " = " << (x / y) << std::endl;     // División con decimales

    // División entera
    std::cout << "División entera: " << a << " / " << b << " = " << (a / b) << std::endl;

    // Módulo (resto de la división entera)
    std::cout << "Módulo: " << a << " % " << b << " = " << (a % b) << std::endl;

    // Operaciones avanzadas con combinaciones
    std::cout << "Incremento de a: " << a << " -> " << (++a) << " (pre-incremento)" << std::endl;
    std::cout << "Decremento de b: " << b << " -> " << (--b) << " (pre-decremento)" << std::endl;

    // Uso del operador de potencia (no hay en C++, pero se simula con <cmath>)
    #include <cmath>
    double potencia = pow(x, 2); // x elevado al cuadrado
    std::cout << "Potencia ;" sql result
```

## 1.4: Funciones
Las funciones en C++ son bloques de código que realizan una tarea específica y pueden ser reutilizadas en diferentes partes del programa.

### 1.4.1 Sintaxis 

```cpp
tipo_de_retorno nombre_funcion(parámetros) {
    // Cuerpo de la función
    return valor; // (opcional dependiendo del tipo_de_retorno)
}
```

* tipo_de_retorno: Especifica el tipo de dato que devolverá la función (int, float, void, etc.). Si no devuelve nada, se usa void.
* nombre_funcion: Nombre descriptivo de la función.
* parámetros: Lista de argumentos (con tipos) que recibe la función, separados por comas. Si no recibe parámetros, se deja vacío o con void.
* return valor: Devuelve un valor al programa principal (solo si el tipo de retorno no es void).

### Ejemplo 4: Funciones

```cpp
#include <iostream>

// Declaración de la función
int sumar(int a, int b) {
    return a + b; // Retorna la suma de a y b
}

int main() {
    int num1 = 5, num2 = 7;

    // Llamada a la función
    int resultado = sumar(num1, num2);

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}
```

## 1.5.- Bucles (For / While / do-while)

Los bucles en C++ permiten repetir un bloque de código varias veces. Los principales bucles son:

* for: Se usa cuando sabes cuántas veces quieres iterar.
* while: Se usa cuando repites mientras una condición sea verdadera.
* do-while: Similar a while, pero siempre ejecuta el bloque al menos una vez.

### Ejemplo 5: Bucles

```cpp
#include <iostream>

int main() {
    // Ejemplo: Contar del 1 al 5 usando distintos bucles

    std::cout << "Bucle for:" << std::endl;
    for (int i = 1; i <= 5; i++) { // Desde i = 1 hasta 5
        std::cout << i << " ";    // Imprime i
    }
    std::cout << std::endl;

    std::cout << "Bucle while:" << std::endl;
    int j = 1; // Variable inicial
    while (j <= 5) { // Mientras j <= 5
        std::cout << j << " ";    // Imprime j
        j++;                      // Incrementa j
    }
    std::cout << std::endl;

    std::cout << "Bucle do-while:" << std::endl;
    int k = 1; // Variable inicial
    do {
        std::cout << k << " ";    // Imprime k
        k++;                      // Incrementa k
    } while (k <= 5); // Condición al final
    std::cout << std::endl;

    return 0;
}
```

Si te diste cuenta, la estructura es la misma que en C.

## 1.6.- Estructuras
Las estructuras en C++ son una forma de agrupar múltiples variables bajo un mismo tipo de dato. Son especialmente útiles para representar entidades del mundo real que tienen varios atributos, como un punto en un espacio, una persona con su nombre y edad, etc.

### 1.6.1.- Sintaxis
```cpp
struct NombreDeLaEstructura {
    // Miembros (variables) de la estructura
    TipoDeDato nombreVariable1;
    TipoDeDato nombreVariable2;
    // ...
};
```

* struct es la palabra clave.
* Miembros: Son las variables que representan los datos asociados con la estructura.
  
Nota: En C++, a diferencia de C, los miembros de una estructura son públicos por defecto.

### Ejemplo 6: Estructuras 
```cpp
#include <iostream>

struct Persona {
    std::string nombre;
    int edad;
};

int main() {
    Persona p1 = {"Albertinho", 24};
    std::cout << "Nombre: " << p1.nombre << "\nEdad: " << p1.edad << std::endl;
    return 0;
}
```

## 1.7.- Punteros
Los punteros son una herramienta poderosa que te permiten trabajar con las direcciones de memoria. En lugar de almacenar valores directamente, un puntero almacena la dirección de memoria de una variable. Esto permite manipular datos de forma más eficiente y flexible.

### 1.7.1.- Sintaxis

1.- Declarar un puntero:
```cpp
TipoDeDato* nombreDelPuntero;
```
* TipoDeDato: El tipo de dato al que apuntará el puntero.
* "*": Indica que es un puntero.
* nombreDelPuntero: El nombre de la variable puntero.

2.- Asignar la dirección de una variable:
```cpp
int x = 10;
int* ptr = &x; // El puntero almacena la dirección de x
```

3.- Acceder al valor almacenado en la dirección apuntada (desreferenciar):
```cpp
std::cout << *ptr; // Muestra el valor de x a través del puntero
```

### Ejemplo 7.1: Punteros
```cpp
#include <iostream>

int main() {
    int var = 5;
    int *ptr = &var;

    std::cout << "Valor de var: " << var << std::endl;
    std::cout << "Dirección de var: " << &var << std::endl;
    std::cout << "Valor almacenado en ptr: " << ptr << std::endl;
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

    return 0;
}
```
### Ejemplo 7.2: Punteros con arreglos
```cpp
#include <iostream>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Elemento " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
```
### Ejemplo 7.3: Punteros con funciones
```cpp
#include <iostream>

void modificarValor(int* ptr) {
    *ptr = 42; // Modifica el valor de la variable original
}

int main() {
    // Declarar una variable normal
    int numero = 10;

    // Declarar un puntero y asignarle la dirección de 'numero'
    int* puntero = &numero;

    // Mostrar la dirección de memoria y el valor usando el puntero
    std::cout << "Dirección de memoria de 'numero': " << &numero << std::endl;
    std::cout << "Dirección almacenada en 'puntero': " << puntero << std::endl;
    std::cout << "Valor de 'numero' (accedido con *puntero): " << *puntero << std::endl;

    // Modificar el valor de 'numero' a través del puntero
    *puntero = 20;
    std::cout << "Nuevo valor de 'numero' después de usar el puntero: " << numero << std::endl;

    // Usar el puntero como argumento en una función
    modificarValor(puntero);
    std::cout << "Valor de 'numero' después de modificarlo con la función: " << numero << std::endl;

    return 0;
}
```

## 1.8.- Memoria Dinámica
La memoria dinámica permite reservar y liberar memoria en tiempo de ejecución, en lugar de hacerlo en tiempo de compilación. Esto se logra utilizando los operadores new y delete, o con new[] y delete[] para trabajar con arreglos.

### 1.8.1.- ¿Qué es la memoria dinámica?
* Memoria estática: Se asigna en tiempo de compilación. Ejemplo: variables normales, arreglos con tamaño fijo.
* Memoria dinámica: Se asigna en tiempo de ejecución y permanece hasta que se libera manualmente. Esto es útil cuando no conocemos el tamaño exacto de los datos a manejar durante la compilación.

### 1.8.2.- Sintaxis
1.- Asignación de memoria para una sola variable:
```cpp
TipoDeDato* puntero = new TipoDeDato;
```

2.- Liberación de memoria:
```cpp
delete puntero;
```

3.- Asignación de memoria para un arreglo:
```cpp
TipoDeDato* puntero = new TipoDeDato[tamaño];
```

4.- Liberación de memoria de un arreglo:
```cpp
delete[] puntero;
```

### Ejemplo 8.1: Memoria dinámica Valor Único
```cpp
#include <iostream>

int main() {
    int *ptr = new int;  // Asigna memoria dinámicamente
    *ptr = 42;
    std::cout << "Valor de ptr: " << *ptr << std::endl;

    delete ptr;  // Libera la memoria dinámica
    return 0;
}
```

### Ejemplo 8.2: Memoria dinámica Varios Valores
```cpp
#include <iostream>

int main() {
    int n; // Tamaño del arreglo

    // Pedir al usuario el tamaño del arreglo
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> n;

    // Asignar memoria dinámica para un arreglo de enteros
    int* arreglo = new int[n];

    // Llenar el arreglo con valores ingresados por el usuario
    std::cout << "Ingrese " << n << " números:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arreglo[i];
    }

    // Mostrar los valores almacenados
    std::cout << "Los números ingresados son:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    // Liberar la memoria dinámica
    delete[] arreglo;

    return 0;
}
```

## 2.- Compilación de Programas en C++
Para compilar un programa en C++, puedes usar el compilador `g++`:
```sh
g++ -o mi_programa mi_programa.cpp
./mi_programa
```

### 2.1.- Diferencias entre C y C++
1. **Paradigma de Programación**:
   - **C**: Lenguaje de programación procedural.
   - **C++**: Soporta programación procedural y orientada a objetos.
2. **Manejo de Memoria**:
   - **C**: Uso de funciones como `malloc` y `free`.
   - **C++**: Uso de operadores `new` y `delete`.
3. **Entrada/Salida**:
   - **C**: Uso de `printf` y `scanf`.
   - **C++**: Uso de `std::cout` y `std::cin`.
4. **Extensiones de Archivo**:
   - **C**: `.c`
   - **C++**: `.cpp`

