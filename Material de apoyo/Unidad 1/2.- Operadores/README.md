# Operaciones aritmeticas en C
## 1) Operaciones simples

```
+ Suma
- Resta
* Multiplicación
/ División
% Módulo aritmético (resto de una división entera).
```

Si no entiendes el módulo, este es simplemente el resto que queda al realizar una división, 
por ejemplo si dividimos 6 / 4 , sabemos que cabe 1 vez y nos quedaria un 2 de sobra,este valor de sobra correspondería al modulo o resto de una división

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
}
```


La salida de del código sería el siguiente 

```
La suma de ambos valores es:  9
La resta de ambos valores es:  1
La multiplicación de ambos valores es:  20
La división de ambos valores es:  1.250000
El resto de ambos valores es:  1
```

## 2) Operaciones de incremento / decremento

```
++ Incremento de uno.
-- Decremento de uno.
```
## 2.1) Ejemplos en código

En este ejemplo tomaremos los mismos valores enteros que antes 
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
