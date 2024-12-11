
# Sintaxis Básica de C++

## Tipos de Datos
* int: Representa números enteros.
* float: Representa números con punto flotante de precisión simple.
* double: Representa números con punto flotante de precisión doble.
* char: Representa un solo carácter.
* bool: Representa valores lógicos (true o false).
* std::string: Representa una secuencia de caracteres (cadena de texto).

### Ejemplo 1: Declaración de datos 
```cpp
#include <iostream>

int main() {
    int edad = 25;
    float altura = 1.75;
    char inicial = 'A';
    bool esEstudiante = true;
}
```

### Ejemplo 2: Entrada / Salida de datos
```cpp
#include <iostream>

int main() {
    int numero;
    std::cout << "Introduce un número: ";
    std::cin >> numero;  // Entrada de datos por consola
    std::cout << "El número es: " << numero << std::endl;
    return 0;
}
```

### Ejemplo 3: Suma de dos números
```cpp
#include <iostream>

int main() {
    int a = 5, b = 10;
    int sum = a + b;
    std::cout << "La suma es: " << sum << std::endl;
    return 0;
}
```

### Ejemplo 4: Funciones
```cpp
#include <iostream>

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = sumar(5, 7);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}
```

### Ejemplo 5: Bucle `for`
```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << std::endl;
    }
    return 0;
}
```

### Ejemplo 6: Estructuras 
```cpp
#include <iostream>

struct Persona {
    std::string nombre;
    int edad;
};

int main() {
    Persona p1 = {"Juan", 30};
    std::cout << "Nombre: " << p1.nombre << "\nEdad: " << p1.edad << std::endl;
    return 0;
}
```

### Ejemplo 7: Punteros
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
### Ejemplo 8: Punteros con arreglos
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

Ejemplo 9: Memoria dinámica
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

## 1.1.- Compilación de Programas en C++
Para compilar un programa en C++, puedes usar el compilador `g++`:
```sh
g++ -o mi_programa mi_programa.cpp
./mi_programa
```

## Diferencias entre C y C++
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

