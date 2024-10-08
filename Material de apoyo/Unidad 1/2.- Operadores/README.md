# Operaciones aritmeticas en C

# 1) Operaciones simples

```
+ Suma
- Resta
* Multiplicación
/ División
% Módulo aritmético (resto de una división entera).
```

Si no entiendes el módulo, este es simplemente el resto que queda al realizar una división, 
por ejemplo si dividimos 6 / 4 , sabemos que cabe 1 vez y nos quedaria un 2 de sobra, este valor de sobra correspondería al modulo o resto de una división

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/modulo.png)

## 1.1) Ejemplos en código

En el siguiente ejemplo definiremos 2 valores enteros para realizar las operaciones antes descritas,
tambien 2 flotantes que tendrán el mismo valor solamente para comprobar la división, recordando que si la division la hacemos con valores enteros solamente veriamos el primer valor sin comilas

```C
#include <stdio.h>

int main(){
    
    int valor1 = 5;
    int valor2 = 4;

    float valorf_1 = 5;
    float valorf_2 = 4;

    int suma = valor1 + valor2;
    int resta = valor1 - valor2;
    int multiplicacion = valor1 * valor2;
    float division = valorf_1 / valorf_2;
    int resto = valor1 % valor2;

    printf("La suma de ambos valores es:  %d\n", suma);
    printf("La resta de ambos valores es:  %d\n", resta);
    printf("La multiplicación de ambos valores es:  %d\n", multiplicacion);
    printf("La división de ambos valores es:  %f\n", division);
    printf("El resto de ambos valores es:  %d\n", resto);

    return 0;
}
```


La salida de del código sería el siguiente:

```
La suma de ambos valores es:  9
La resta de ambos valores es:  1
La multiplicación de ambos valores es:  20
La división de ambos valores es:  1.250000
El resto de ambos valores es:  1
```

# 2) Operaciones de incremento / decremento

```
++ Incremento de uno.
-- Decremento de uno.
```
## 2.1) Ejemplos en código

En este ejemplo tomaremos los mismos valores enteros que antes: 
```C
#include <stdio.h>

int main(){

    int valor1 = 5;
    int valor2 = 4;

    printf("El valor de valor1 antes de incrementar es: %d\n", valor1);
    printf("El valor de valor2 antes de incrementar es: %d\n", valor2);

    valor1++;
    valor2++;

    printf("El valor de valor1 despues de incrementar es: %d\n", valor1);
    printf("El valor de valor2 despues de incrementar es: %d\n", valor2);

    valor1--;
    valor2--;

    printf("El valor de valor1 despues de disminuir es: %d\n", valor1);
    printf("El valor de valor2 despues de disminuir es: %d\n", valor2);
    
    return 0;
}
```

La salida del código sería: 

```
El valor de valor1 antes de incrementar es: 5
El valor de valor2 antes de incrementar es: 4
El valor de valor1 despues de incrementar es: 6
El valor de valor2 despues de incrementar es: 5
El valor de valor1 despues de disminuir es: 5
El valor de valor2 despues de disminuir es: 4
```

# 3) Operaciones relacionales

Este tipo de operaciones comparan 2 operandos

```
== Igualdad (revisa si dos operandos son iguales).
!= Distinto (revisa si dos operandos son distintos).
> Mayor que
< Menor que
>= Mayor o igual que
<= Menor o igual que

```
## 3.1) Ejemplos en código

```c
#include <stdio.h>

int main(){

    int a = 5;
    int b = 4;

    char *resultado = (b==a) ? "True" : "False";
    char *resultado2 = (b!=a) ? "True" : "False";
    char *resultado3 = (b>a) ? "True" : "False";
    char *resultado4 = (b>=a) ? "True" : "False";
    char *resultado5 = (b<a) ? "True" : "False";
    char *resultado6 = (b<=a) ? "True" : "False";

    printf("La relación 1 es : %s\n", resultado);
    printf("La relación 2 es : %s\n", resultado2);
    printf("La relación 3 es : %s\n", resultado3);
    printf("La relación 4 es : %s\n", resultado4);
    printf("La relación 5 es : %s\n", resultado5);
    printf("La relación 6 es : %s\n", resultado6);

    return 0 ; 
}
```

Salida del código es: 

```
La relación 1 es : False
La relación 2 es : True
La relación 3 es : False
La relación 4 es : False
La relación 5 es : True
La relación 6 es : True
```

Si te diste cuenta, ocupé la expresión (?), esta expresión cumple el mismo rol que un condicional if/else (Está explicado en el siguiente inciso) , si se cumple la condición que uno escribe entre parentesis entonces retorna el primer valor que uno defina como salida, en caso contrario si uno define una condición y no se cumple, entonces se asigna el segundo
valor

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/relacion.png)

# 3.2) Condicionales 
Los condicionales son funciones que ejecutan un bloque de código siempre que se cumplan los parametros que uno defina dentro de ellos. 

## 3.2.1) Condicional "if"

El condicionál **"if"** es uno de los condicionales más utilizados comunmente, la estructura de la sentencia if es: 

```c
if (condición){
    // bloque de código a ejecutar
}
```

Lo que indica este condicional es que si se cumple lo que se encuentre dentro del parentesis entonces se hara el bloque de codigo que se defina

## 3.2.2) Ejemplos en código

```c
#include <stdio.h>

int main(){
    
    int valor1 = 5;
    int valor2 = 4;

    if (valor1 > valor2) {
        printf("El valor %d es mayor que %d", valor1,valor2);
    }
    
    return 0;
}
```

Salida del codigo

```
El valor 5 es mayor que 4
```

Otro ejemplo 

```c
#include <stdio.h>

int main(){
    
    int valor1 = 5;
    int valor2 = 4;

    if (valor1 != valor2) {
        printf("El valor %d es distinto que el valor %d", valor1,valor2);
    }
    
    return 0;
}
```

Salida del codigo

```
El valor 5 es distinto que el valor 4
```

## 3.2.3) Condicional "else"
Este condicional generalmente va de la mano con la sentencia **"if"** e indica que si el primer condicional no se cumple, entonces realizará lo que se defina dentro del "else" para cualquiera de los demás casos que no sean el del **"if"**.

Su estructura es la siguiente:
```c
if (condicional){
    // Bloque de codigo
}
else  {
    // Segundo bloque de codigo
}
```

## 3.2.4) Ejemplos en codigo 

```c
#include <stdio.h>

int main(){
    
    int valor1 = 5;
    int valor2 = 5;

    if (valor1 != valor2){
        printf("El valor %d es distinto que el valor %d", valor1,valor2);
    }
    else {
        printf("El valor %d y el valor %d son iguales", valor1, valor2);
    }

    return 0;
}
```

Salida del código:

```
El valor 5 y el valor 5 son iguales
```

Aquí podemos ver que el primer condicional no se cumplió ya que ambos valores son iguales, por eso la salida que se ejecutó fue la del "else"

Otro ejemplo:

```c
#include <stdio.h>

int main(){
    
    int valor1 = 5;
    int valor2 = 4;

    if (valor1 < valor2){
        printf("El valor %d es menor que el valor %d", valor1,valor2);
    }
    else {
        printf("El valor %d es mayor que el valor %d", valor1, valor2);
    }

    return 0;
}
```

Salida del código:

```
El valor 5 es mayor que el valor 4
```

## 3.2.5) Condicional "else if"

La sentencia "else if" también es de aquellas que van a la par de la sentencia "if" y "else", lo que hace esta sentencia es definir otro condicional que también puede encarcelar los casos que estamos estudiando, la sintaxis del condiciones "else if" en código es así:

```c
if (condicion 1) {
    // Bloque de código 1
}
else if (condicion 2) {
    // Bloque de código 2
}
else {
    // Bloque de código 3
}
```

## 3.2.6) Ejemplos en codigo 

```c
#include <stdio.h>

int main(){
    
    int valor1 = 5;
    int valor2 = 4;

    if (valor1 < valor2){
        printf("El valor %d es menor que el valor %d", valor1,valor2);
    }
    else if (valor1 > valor2){
        printf("El valor %d es mayor que el valor %d", valor1, valor2);
    }
    else {
        printf("El valor %d y %d son iguales", valor1, valor2);
    }

    return 0;
}
```

Salida del código:

```
El valor 5 es mayor que el valor 4
```

Podemos ver en el código de arriba que no se cumplió ni el condicional del "if" ni el del "else, pero si el del "else if", por eso se ejecutó ese bloque en específico.

Otro ejemplo:

```c
#include <stdio.h>

int main(){
    
    int valor1 = -25;
    int valor2 = 5; 

    if (valor1  > valor2){
        printf("El valor %d es mayor que el valor %d", valor1,valor2);
    }
    else if (valor1 < valor2){
        printf("El valor %d es menor que el valor %d", valor1, valor2);
    }
    else {
        printf("El valor %d y %d son iguales", valor1, valor2);
    }

    return 0;
}
```

Salida del código:

```
El valor -25 es menor que el valor 5
```

## 3.2.7) Condicional "switch"

La función "switch" es bastante buena para cuando tenemos muchos condicionales presentes que busquemos analizar, esta función lo que hace es que va evaluando una expresión en los distintos casos que uno defina. 

La sintaxis de este condicional es el siguiente:

```c
int variable = 3 // por ejemplo

switch (variable) { // Acá decimos que queremos evaluar "variable" en los distintos casos
    case 1:  // Cuando variable valga 1 se hace lo de abajo
        // Bloque de código 1
    case 2:  // Cuando variable valga 2 se hace lo de abajo
        // Bloque de código 2
    case 3:  // Cuando variable valga 3 se hace lo de abajo
        // Bloque de código 3
}

// Como en el código pusimos que variable vale 3, entonces el código que está en el caso "3" sería el que se ejecute finalmente
```

## 3.2.8) Ejemplos en codigo 

```c
#include <stdio.h>

int main(){
    int mes = 2;
    switch (mes) {
    case 1:
        printf("El mes %d es enero", mes);
        break;
    case 2:
        printf("El mes %d es febrero", mes);
        break;
    case 3:
        printf("El mes %d es marzo", mes);
        break;
    case 4:
        printf("El mes %d es abril", mes);
        break;
    case 5:
        printf("El mes %d es mayo", mes);
        break;
    case 6:
        printf("El mes %d es junio", mes);
        break;
    }
}

```

Salida del código

```
El mes 2 es febrero
```

Otro ejemplo

```c
#include <stdio.h>

int main(){
    int dia = 5;
    switch (dia) {
    case 1:
        printf("El dia %d es lunes", dia);
        break;
    case 2:
        printf("El dia %d es martes", dia);
        break;
    case 3:
        printf("El dia %d es miercoles", dia);
        break;
    case 4:
        printf("El dia %d es jueves", dia);
        break;
    case 5:
        printf("El dia %d es viernes", dia);
        break;
    case 6:
        printf("El dia %d es sábado", dia);
        break;
    case 7:
        printf("El dia %d es domingo", dia);
        break;
    }
}

```

Salida del código

```
El dia 5 es viernes
```

# 4) Operaciones de asignación

```
----> Caso 1
valor1 = valor1 [Operador] valor2;

----> Caso 2
valor1 [Operador] = valor2;
```

## 4.1) Ejemplos en codigo

```c
#include <stdio.h>

int main(){

    int a = 5;
    int b = 4;
    int c = 5;

    printf("El valor de 'a' antes de modificarlo es: %d\n", a);

    a = a+b;

    printf("El valor de 'a' despues de modificarlo es: %d\n", a);
    printf("El valor de 'c' antes de modificarlo es: %d\n", c);

    // Esto es lo mismo que decir c = c + b
    c += b;

    printf("El valor de 'c' despues de modificarlo es: %d\n", c);

    return 0;
}
```

La salida del codigo es: 

```
El valor de 'a' antes de modificarlo es: 5
El valor de 'a' despues de modificarlo es: 9
El valor de 'c' antes de modificarlo es: 5
El valor de 'c' despues de modificarlo es: 9
```
