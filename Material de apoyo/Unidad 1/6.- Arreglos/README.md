# 1) Arreglos
Los arreglos son utilizados para almacenar multiples valores dentro de una variable, esto para evitar tener que definir e iniciar cada valor 
por separado en su variable respectiva, aquí agrupamos todo eso en un solo lugar. 

La sintaxis para definir un arreglo es la siguiente: 

```c
// Ejemplo : Creemos un arreglo que almacene 7 datos enteros:

int arreglo[] = {1,2,3,4,5,6,7};
```

Como visualizaste lo primero es definir el tipo de dato que va a almacenar el arreglo, luego hay que definir el nombre del *"array"* a la par que entre corchetes
se determina el tamaño (cantidad de datos) que va almacenar nuestro arreglo, en el caso de no tener claro cuantos datos va almacenar simplemente se deja el espacio
vacio y este se irá acomodando a la cantidad de datos que ingresen al array.

Para declarar qué valores irán dentro del array hay que ubicarlos entre llaves como en el ejemplo anterior. 

## 1.1) Ejemplos en código

Para poder acceder a los componentes de un array simplemente hacemos lo siguiente:

```c
#include <stdio.h>

int main(){
    int arreglo[] = {1,2,3,4,5,6,7};

    printf("El primer valor del array es: %d", arreglo[0]);
    return 0;
}
```

Salida del código:

```c
El primer valor del array es: 1
```

Es importante tener en consideración que la posición de los valores en el arreglo no se empiezan a contar desde (1..2..3..4,etc) , si no, desde el 0 en adelante.


En el siguiente ejemplo utilizaremos el ciclo "for" para imprimir todos los valores dentro de un array de dimension conocida :

```c
#include <stdio.h>

int main(){
    int i;
    int arreglo[] = {1,2,3,4,5,6,7};
    for (i=0; i<7; i++){
        printf("El valor arreglo[%d] es : %d\n", i, arreglo[i]);
    }
    return 0;
}
```

Salida del código:

```
El valor arreglo[0] es : 1
El valor arreglo[1] es : 2
El valor arreglo[2] es : 3
El valor arreglo[3] es : 4
El valor arreglo[4] es : 5
El valor arreglo[5] es : 6
El valor arreglo[6] es : 7
```

Otro ejemplo definiendo un tamaño del arreglo y asignando valores a este ultimo.

```c
#include <stdio.h>

int main(){
    int i;
    int arreglo[4]; 

    arreglo[0] = 40;
    arreglo[1] = 27;
    arreglo[2] = 13;
    arreglo[3] = 7;
    
    for (i=0; i<4; i++){
        printf("El valor array[%d] es: %d\n", i, arreglo[i]);     
    }
    
    return 0;
}
```


Salida del código:

```
El valor array[0] es: 40
El valor array[1] es: 27
El valor array[2] es: 13
El valor array[3] es: 7
```
# 2) Tamaño de los arreglos 

Para saber el tamaño en bytes de un arreglo podemos utilizar la funcion sizeof() , la cual nos entregará el (peso del tipo de dato * cantidad de datos en el array), por ejemplo si definimos un array que almacene datos del tipo int (4 bytes de peso ) y guardamos 5 valores en el array, entonces obtendriamos 5*4 = 20 bytes de memoria. 

## 2.1) Ejemplos en código

Aquí te muestro lo mismo que dije antes en codigo:

 ```c
#include <stdio.h>

int main(){
    int arreglo[] = {4,3,2,21,25}; 
    
    printf("El tamaño total del arreglo es %d bytes", sizeof(arreglo));
    
    return 0;
}
 ```

Salida del código: 

```
El tamaño total del arreglo es 20 bytes
```

Entonces con esta función a consideración, ¿ Como puedo recorrer un array sin saber cuantos datos hay en el ?, simplemente usando la formula: 

```c
sizeof(arreglo)/sizeof(arreglo[0])

// O tambien

sizeof(arreglo)/sizeof("tipo de dato: (int,float,etc)");
```

Lo de arriba se traduce a que si dividimos el peso total del array por el peso de 1 dato del array o del tipo de dato que contiene el array, nos dará la cantidad de datos totales que hay en este mismo.

Veamos un ejemplo en donde definiré un array con varios numeros y buscaré imprimir la cantidad de datos que hay en el:

```c
#include <stdio.h>

int main(){
    int arreglo[] = {4,3,2,21,25,74,52,49,22,13}; 
    
    printf("El arreglo tiene %d datos dentro de si mismo\n", sizeof(arreglo)/sizeof(arreglo[0]));
    printf("El arreglo tiene %d datos dentro de si mismo\n", sizeof(arreglo)/sizeof(int));

    return 0;
}
```

Salida del código:

```
El arreglo tiene 10 datos dentro de si mismo
El arreglo tiene 10 datos dentro de si mismo
```

Utilicé las 2 formas que te mostré antes y ambas dieron el mismo resultado, que el array contiene 10 datos precisamente. 

Ahora ocupemos esta tecnica para recorrer un array de cantidad de datos desconocidos:

```c
#include <stdio.h>

int main(){
    int i;
    int arreglo[] = {14,31,23,216,235,714,502,429,232,173,145,121,234}; 
    
    printf("El arreglo pesa %d bytes en total\n", sizeof(arreglo));
    printf("El arreglo tiene %d datos en total\n", sizeof(arreglo)/sizeof(int));

    for (i=0; i<sizeof(arreglo)/sizeof(int); i++){
        printf("El dato arreglo[%d] es : %d\n", i, arreglo[i]);
    }

    return 0;
}
```

Salida del código:

```
El arreglo pesa 52 bytes en total
El arreglo tiene 13 datos en total
El dato arreglo[0] es : 14
El dato arreglo[1] es : 31
El dato arreglo[2] es : 23
El dato arreglo[3] es : 216
El dato arreglo[4] es : 235
El dato arreglo[5] es : 714
El dato arreglo[6] es : 502
El dato arreglo[7] es : 429
El dato arreglo[8] es : 232
El dato arreglo[9] es : 173
El dato arreglo[10] es : 145
El dato arreglo[11] es : 121
El dato arreglo[12] es : 234
```

Podemos ver que el codigo descubrió de manera exitosa la cantidad de datos que habian en el arreglo y tambien recorrió cada uno de estos datos imprimiendo sus valores con la formula que te dije con anterioridad.

# 3) Arreglos multidimensionales 

En los ejemplos anteriores trabajamos con Arreglo en 2d , pero tambien podemos hacer arreglos que contengan mas de 1,2 o 3 dimensiones.

Por ejemplo para crear una matriz de 2x2: 

```c
int arreglo[2][2] = { {9,7}, {2,4} };
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/matriz.png)

Para acceder a los valores de la matriz se ocupa la misma nomenclatura que antes: 

```c
#include <stdio.h>

int main(){
    int arreglo[2][2] = { {9,7}, {2,4} };
    
    int valor = arreglo[1][1];

    /* Recordar que los arreglos parten del 0 
       Así que si quisiese ver el valor 2 de la columna 2
       tendria que imprimir el arreglo[1][1]*/

    printf("%d", valor); // Deberia verse el valor 4

    return 0;
}
```


Salida del código:

```
4
```

Puede que sea medio confuso al principio, pero tienes que entender que las declaraciones se hacen como normalmente las entendemos , por ejemplo si hacemos esto: arreglo[3][2] significa que estamos declarando una matriz de 3 filas y 2 columnas, pero al querer recorrer o ver que valores se encuentran en ella, tenemos que considerar que el array parte desde el 0 , osea que si quisiesemos ver el valor de la segunda fila / primera columna tendriamos que dirigirnos a arreglo[1][0]


## 3.1) Ejemplos en código 

Aqui te dejo algunos ejemplos para recorrer una matriz de mas de 1 dimensión:


```c
#include <stdio.h>

int main(){
    int arreglo[2][2] = { {9,7}, {2,4} };
    
    int i, j;
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("El valor del arreglo[%d][%d] es : %d \n", i,j, arreglo[i][j]);
        }
    }

    return 0;
}
```

Salida del código:

```
El valor del arreglo[0][0] es : 9 
El valor del arreglo[0][1] es : 7 
El valor del arreglo[1][0] es : 2 
El valor del arreglo[1][1] es : 4 
```

Otro ejemplo:

```c
#include <stdio.h>

int main(){
    int arreglo[4][3] = { {91,77,103}, {22,44,55}, {5,31,27}, {12,34,21} };
    
    int i, j;
    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("El valor del arreglo[%d][%d] es : %d \n", i,j, arreglo[i][j]);
        }
    }

    return 0;
}
```

Salida del código: 

```
El valor del arreglo[0][0] es : 91 
El valor del arreglo[0][1] es : 77 
El valor del arreglo[0][2] es : 103 
El valor del arreglo[1][0] es : 22 
El valor del arreglo[1][1] es : 44 
El valor del arreglo[1][2] es : 55 
El valor del arreglo[2][0] es : 5 
El valor del arreglo[2][1] es : 31 
El valor del arreglo[2][2] es : 27 
El valor del arreglo[3][0] es : 12 
El valor del arreglo[3][1] es : 34 
El valor del arreglo[3][2] es : 21 
```
