# Punteros 

Un puntero es como una flecha que apunta a la dirección de memoria de otra variable.

Imagina que tienes una nota con la dirección de una casa escrita en ella. El puntero sería esa nota, 
y la casa sería la variable a la que apunta.

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/punteros.png)

Para definir un puntero se pueden usar las siguientes sintaxis:

```c
int *ptr;   // Forma 1
int* ptr2;  // Forma 2 (más común)
```

Ambas formas son entendibles para el programa. La segunda forma es más fácil de 
leer porque deja claro que estamos definiendo un puntero al tipo de dato.

# Ejemplos en código 

```c
#include <stdio.h>

int main(){
    int valor = 4;
    printf("La direccion de memoria del valor es: %p\n", &valor);

    int* ptr_valor = &valor;
    printf("La direccion de memoria asignada al puntero: %p\n", ptr_valor);
    
    return 0;
}
```

Sálida del código:

```
La direccion de memoria del valor es: 000000000061fe24
La direccion de memoria asignada al puntero: 000000000061fe24
```

En el ejemplo anterior se puede observar que el puntero ahora tiene dentro de sí mismo la dirección de memoria de *"valor"*, ahora te podras preguntar:

¿Pero para que me sirve trabajar con punteros en vez de hacerlo directo?

La respuesta rapida seria "optimizacion", por ahora quedate con que si el programa sabe la direccion del valor puede llegar e ir altiro hacia el mismo y operar en torno a el. Sin punteros, el programa tendría que buscar en todas partes para encontrar lo que necesita.


Por ejemplo, es como si a una persona le dijera: "Oye necesito que vayas a buscarme algo a esta direccion", la persona sabra inmediatamente hacia donde dirigirse, pero si le dijese "Oye necesito que me busques algo", la persona no tendra idea donde tiene que ir y tendra que ir lugar por lugar hasta llegar, en el caso 1 se ahorra muchisimo tiempo, en cambio en el segundo caso se puede llegar a tardar harto.

Retomando el ejemplo anterior, podemos referenciar el valor a traves del puntero de la siguiente forma: 

```c
#include <stdio.h>

int main(){
    int valor = 4;
    printf("El valor dentro de la variable es: %d\n", valor );

    int* ptr_valor = &valor;
    printf("El valor dentro de la variable usando punteros es: %d\n", *ptr_valor );

    return 0;
}
```

Salida del codigo:

```
El valor dentro de la variable es: 4
El valor dentro de la variable usando punteros es: 4
```

La desreferenciación es el proceso de acceder al valor almacenado en la dirección de memoria a la que apunta un puntero. En el ejemplo, al escribir *ptr_valor, le decimos al programa: "Dame el valor que está almacenado en la dirección de memoria que guarda ptr_valor." Como ptr_valor apunta a valor, obtenemos el valor 4.


Tambien podemos cambiar el valor de la variable usando punteros, como en el siguiente ejemplo: 

```c
#include <stdio.h>

int main(){
    int valor = 4;
    printf("El valor dentro de la variable es: %d\n", valor );

    int* ptr_valor = &valor;
    printf("El valor dentro de la variable usando punteros es: %d\n", *ptr_valor );

    *ptr_valor = 5;
    printf("El nuevo valor dentro de la variable es: %d\n", valor );
    printf("El nuevo valor dentro de la variable usando punteros es: %d\n", *ptr_valor );
    
    return 0;
}
```

Salida del codigo 

```
El valor dentro de la variable es: 4
El valor dentro de la variable usando punteros es: 4
El nuevo valor dentro de la variable es: 5
El nuevo valor dentro de la variable usando punteros es: 5
```

Te diste cuenta que usando punteros igualmente afectamos el valor de la variable directamente (?), esa es la magia de los punteros :) 
