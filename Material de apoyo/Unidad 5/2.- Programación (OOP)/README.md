# 1.- Programación Orientada a Objetos en C++

La Programación Orientada a Objetos (POO) es un paradigma de programación que organiza el software en torno a "objetos", 
que combinan datos (atributos) y comportamientos (métodos). 
Este enfoque mejora la modularidad, la reutilización de código y la escalabilidad. 
C++ es un lenguaje que soporta la POO, permitiendo a los desarrolladores crear aplicaciones organizadas y mantenibles.

## 1.2.- Conceptos Básicos

### 1.2.1.- Clases y Objetos

- **Clase**: Es una plantilla o modelo que define las propiedades (atributos) y comportamientos (métodos) comunes a todos los objetos de ese tipo.).
- **Objeto**: Es una instancia de una clase, es decir, un elemento concreto que sigue el modelo de la clase.

#### 1.2.2.- Sintaxis

```cpp
class NombreDeLaClase {
public:
    // Atributos (variables)
    int atributo;

    // Métodos (funciones)
    void metodo() {
        // Implementación del método
    }
};
```

#### 1.2.3.- Ejemplo

```cpp
#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;  // Atributo público
    int edad;       // Atributo público

    // Método público para mostrar la información de la persona
    void mostrarInformacion() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

int main() {
    Persona persona1;                // Creación de un objeto de la clase Persona
    persona1.nombre = "Juan";        // Asignación de valores a los atributos
    persona1.edad = 30;
    persona1.mostrarInformacion();   // Llamada al método del objeto
    return 0;
}
```

### 1.3.- Encapsulamiento

- **Encapsulamiento**:
Es el principio de ocultar los detalles internos de una clase y exponer solo lo necesario a través de métodos controlados.
Esto asegura que los atributos privados no puedan ser accedidos o modificados directamente desde fuera de la clase.

#### 1.3.1.- Sintaxis

```cpp
class NombreDeLaClase {
private:
    int atributoPrivado;  // Atributo solo accesible dentro de la clase

public:
    // Método para asignar valor al atributo privado
    void setAtributo(int valor) {
        atributoPrivado = valor;
    }

    // Método para obtener el valor del atributo privado
    int getAtributo() {
        return atributoPrivado;
    }
};
```

#### 1.3.2.- Ejemplo

```cpp
#include <iostream>
#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;  // Atributo privado

public:
    // Método público para depositar dinero en la cuenta
    void depositar(double cantidad) {
        saldo += cantidad;
    }

    // Método público para obtener el saldo actual
    double obtenerSaldo() {
        return saldo;
    }
};

int main() {
    CuentaBancaria cuenta;           // Creación de un objeto de la clase CuentaBancaria
    cuenta.depositar(1000.50);       // Llamada al método depositar
    cout << "Saldo: " << cuenta.obtenerSaldo() << endl;  // Imprime el saldo
    return 0;
}
```

### 1.4.- Herencia

- **Herencia**: Es un mecanismo que permite a una clase (clase derivada)
reutilizar los atributos y métodos de otra clase (clase base), facilitando la reutilización de código.

#### 1.4.1.- Sintaxis

```cpp
class ClaseBase {
public:
    int atributoBase;  // Atributo accesible por la clase derivada
};

class ClaseDerivada : public ClaseBase {
public:
    int atributoDerivado;  // Atributo propio de la clase derivada
};

```

#### 1.4.2.- Ejemplo

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void comer() {
        cout << "El animal está comiendo." << endl;
    }
};

class Perro : public Animal {  // Herencia pública de Animal
public:
    void ladrar() {
        cout << "El perro está ladrando." << endl;
    }
};

int main() {
    Perro miPerro;       // Creación de un objeto de la clase derivada
    miPerro.comer();     // Llamada al método heredado de Animal
    miPerro.ladrar();    // Llamada al método propio de Perro
    return 0;
}
```

### 1.5.- Polimorfismo

- **Polimorfismo**: Permite a métodos con el mismo nombre comportarse de manera diferente según la clase que los implemente.
En C++, esto se logra mediante funciones virtuales.

#### 1.5.1.- Sintaxis

```cpp
class ClaseBase {
public:
    virtual void metodo() {
        // Implementación base
    }
};

class ClaseDerivada : public ClaseBase {
public:
    void metodo() override {
        // Implementación derivada
    }
};
```

#### 1.5.2.- Ejemplo

```cpp
#include <iostream> 
using namespace std;

// Clase base Figura
class Figura {
public:
    // Método virtual: permite que las clases derivadas lo sobrescriban
    virtual void dibujar() {
        // Implementación por defecto que será llamada si el método no es sobrescrito
        cout << "Dibujando una figura." << endl;
    }
};

// Clase derivada Circulo que hereda de Figura
class Circulo : public Figura {
public:
    // Sobrescribe el método dibujar() de la clase base Figura
    void dibujar() override {
        cout << "Dibujando un círculo." << endl; // Implementación específica para círculos
    }
};

// Clase derivada Cuadrado que hereda de Figura
class Cuadrado : public Figura {
public:
    // Sobrescribe el método dibujar() de la clase base Figura
    void dibujar() override {
        cout << "Dibujando un cuadrado." << endl; // Implementación específica para cuadrados
    }
};

// Función que utiliza polimorfismo para dibujar cualquier figura
void dibujarFigura(Figura &figura) {
    // Llama al método dibujar() correspondiente al tipo real del objeto (Circulo o Cuadrado)
    figura.dibujar(); 
}

int main() {
    // Creación de objetos
    Circulo circulo;
    Cuadrado cuadrado;

    // Llamar a la función dibujarFigura() pasando como referencia un objeto Circulo
    dibujarFigura(circulo); // Salida: "Dibujando un círculo."
    // Llamar a la función dibujarFigura() pasando como referencia un objeto Cuadrado
    dibujarFigura(cuadrado); // Salida: "Dibujando un cuadrado."

    return 0;
}
```
--- 

## !! Observación

Si te diste cuenta, en todos los ejemplos se utilizó algo llamado: 

```cpp
using namespace std; 
```

El cual dentro de algunas funciones que tiene, permite que los códigos sean mes verbosos, se explicará mas detalles de esto en el siguiente
documento.
