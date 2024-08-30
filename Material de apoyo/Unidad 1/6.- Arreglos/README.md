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

Es importante tener en consideracion que la posicion de los valores en el arreglo no se empiezan a contar desde (1..2..3..4,etc) , si no desde el 0 en adelante.


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

Otro ejemplo definiendo un maximo de valores y asignando valores 

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


Salida del codigo:

```
El valor array[0] es: 40
El valor array[1] es: 27
El valor array[2] es: 13
El valor array[3] es: 7
```
# Tamaño de los arreglos 

Para saber el tamaño en bytes de un arreglo podemos utilizar la funcion sizeof() , la cual nos entregara el (peso del tipo de dato * camtidad de datos en el array), por ejemplo si definimos un array que almacene numeros enteros (4 bytes de peso ) y guardamos 5 valores en el array, entonces obtendriamos 5*4 = 20 bytes de memoria. 

 Aqui te lo muestro en codigo:

 ```c
#include <stdio.h>

int main(){
    int arreglo[] = {4,3,2,21,25}; 
    
    printf("El tamaño total del arreglo es %d bytes", sizeof(arreglo));
    
    return 0;
}
 ```

Salida del codigo 

```
El tamaño total del arreglo es 20 bytes
```

Entonces con esta funcion a consideracion, ¿ Como puedo recorrer un array sin saber cuantos datos hay en el ?, simplemente usando la formula: 

```c
sizeof(arreglo)/sizeof(arreglo[0])

// O tambien

sizeof(arreglo)/sizeof("tipo de dato: (int,float,etc)");
```

Lo de arriba se traduce simplemente a que si dividimos el peso total del array por el peso de 1 dato nos dara la cantidad de datos totales que hay en este mismo.

Veamos un ejemplo en donde definire un array con varios numeros y quiero imprimir la cantidad de datos que hay en el:

```c
#include <stdio.h>

int main(){
    int arreglo[] = {4,3,2,21,25,74,52,49,22,13}; 
    
    printf("El arreglo tiene %d datos dentro de si mismo\n", sizeof(arreglo)/sizeof(arreglo[0]));
    printf("El arreglo tiene %d datos dentro de si mismo\n", sizeof(arreglo)/sizeof(int));

    return 0;
}
```

Salida del codigo:

```
El arreglo tiene 10 datos dentro de si mismo
El arreglo tiene 10 datos dentro de si mismo
```

Utilice las 2 formas que te mostre antes y ambas dieron el mismo resultado, que el array contiene 10 datos precisamente. 

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

Salida del codigo:

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

Podemos ver que el codigo descubrio de manera exitosa la cantidad de datos que habian en el arreglo y tambien recorrio cada uno de estos datos imprimiendo sus valores con la formula que te dije con anterioridad.

# Arreglos multidimensionales 
