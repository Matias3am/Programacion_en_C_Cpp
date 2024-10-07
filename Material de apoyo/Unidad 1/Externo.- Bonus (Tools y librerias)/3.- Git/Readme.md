# Cómo crear y modificar un repositorio Git/Github

## 1.- Instalación y configuración de Git

Primero nos dirigimos a la página para [descargar Git](https://git-scm.com/downloads)

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/pagina_git.png)

Instala la versión correspondiente a tu sistema operativo, una vez completes la instalación para asegurarte que esté todo como corresponde, abre una terminal y escribe lo siguiente: 

```console
git --version
```

Te debería salir lo siguiente indicando la versión de Git:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/git%20version.png)

Si te apareció significa que ya tienes Git en tu computador :) 


### 1.1.- Configuración 

Una vez instalado Git tenemos que abrir la terminal, te sugiero no usar la cmd de siempre si no la terminal de power shell y/o la git bash (Esta se instala en conjunto a Git), cualquiera de esas 2 opciones es mejor.  

Con la terminal abierta hay que configurar nuestras credenciales o nuestro usuario, para ello tienes que escribir los siguientes comandos:

```console
git config --global user.name " tu nombre "
git config --global user.email " tu correo (ojalá el mismo de tu cuenta github) "
# Para definir vs code como editor predeterminado 
git config --global core.editor "code --wait"
# Para corroborar que todos los datos esten configurados como lo hicimos, se utiliza el siguiente comando
git config --global -e
# Esto deberia abrir una ventana de VsCode o tu editor de texto con un texto que contenga lo anteriormente programado
```

Ahora te sugerí el usar la powershell o el git bash porque crearemos nuestro ambiente de trabajo utilizando algunos comandos típicos de bash/linux/terminal, si no tienes familiaridad con el bash/terminal no te preocupes, te daré los 5 comandos necesarios para moverte en el sistema: 

### 1.2.- Comandos Bash / Shell básicos

* ls : Este comando lo que hace es mostrarte todas las carpetas y archivos actuales en donde te encuentras
  
  ![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/comando%20ls.png)
  
* cd : Este comando sirve para dirigirte a algún directorio en específico o retroceder a un punto anterior o a la raíz
    * Para retroceder al directorio anterior simplemente usa " cd .. " 
  
  ![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/comando%20cd.png)
  
* mkdir : Este comando sirve para crear una carpeta/directorio
  
  ![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/comando%20mkdir.png)
  
* ni / touch : Este comando a diferencia del anterior sirve para crear archivos, ya sean : txt, README.MD, .c, .cpp, etc.
  * Si estas usando powershell el comando es "ni" , si estas usando git bash "touch"
    
  ![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/comando%20ni.png)
  
* rm : Este comando sirve para borrar archivos/directorios o todo lo relacionado a algo ( Precaución con las abreviaturas o nombres)
  
  ![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/comando%20rm.png)

## 1.3.- Inicialización de un repositorio 

Primero inicializo un espacio de trabajo en el escritorio, en este caso cree una carpeta llamada git_ejemplo donde dentro de si tendra 2 archivos 
* git_ejemplo
  * hola.c
  * Readme.md
![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/Repositorio_1.png)

Una vez creado el ambiente de trabajo usamos el comando de abajo para abrir nuestro editor de texto ( En mi caso VsCode): 

```console
code .
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_2.png)

Estando en nuestro ambiente de trabajo, abrimos una terminal en VsCode y para inicializar un repositorio local usamos el comando:

```console
git init
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_3.png)

Al trabajar con Git, es importante tener en cuenta que podemos encontrar tres estados de trabajo:

* Ambiente normal: Este es el estado inicial al manejar un repositorio. Básicamente, es el mismo entorno que usas al programar, donde tienes tus archivos, datos y modificaciones dentro del editor de texto, pero sin entrar en ninguna fase especial de Git o del repositorio.
  
* Stage: Esta etapa forma parte del entorno de trabajo. Los archivos y datos que se encuentran en el stage no necesariamente irán directamente al repositorio. Es una pre-fase en la que indicamos a Git cuáles serán los archivos y programas de interés que queremos trabajar antes de enviarlos al repositorio en GitHub o a un servidor.
  
* Commit: Esta es la fase en la que los cambios que has preparado en el stage se guardan en el historial del repositorio. Un commit es como una instantánea de tu proyecto en un momento específico. Cada commit tiene un mensaje descriptivo que ayuda a entender qué cambios se realizaron y por qué. Una vez que haces un commit, esos cambios se registran de manera permanente en el repositorio local, y pueden ser enviados al repositorio remoto cuando estés listo.



Para conocer el estado de tu repositorio y visualizar si han ocurrido algunos cambios en este, se utiliza el comando: 

```console
git status
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_4.png)

Pero como no tenemos nada añadido al git, se puede ver en rojo como aparecen todos los archivos que no estan en la etapa de stage o añadidos dentro del ambiente 
de repositorio de git. 

Para añadir los archivos a nuestro "stage", tenemos que utilizar el comando: 

```console
git add <archivo que quieras agregar>
# En el caso de querer agregar todo a tu stage utilizas
git add .
# O tambien
git add --all
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_5.png)

Ya con nuestros archivos de interes dentro del stage, podemos realizar modificaciones a los codigos y al usar el comando git status nos dira cuales archivos han sufrido modificaciones. 

Por ejemplo si modificio el codigo de "hola.c" e ingreso el comando git status en la terminal, esta me indicara que el archivo esta modificado y esos cambios no estan dentro del stage como se puede visualizar abajo:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_7.png)

Otra cosa tambien es que en nuestros archivos y programas aparecera una letra a la izquierda, en el caso de los archivos que esten actualizados aparecera la letra "A" y en los archivos que esten modificados aparecera la letra "M" 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_6.png)

Tambien si no quieres ver tanto texto al usar el comando git status, puedes usar esta abreviacion y te mostrara los archivos de la siguiente forma:

``` console
git status --short
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_8.png)

Con todo esto, para actualizar el archivo simplemente se vuelve a utilizar el comando: 

``` console
git add <nombre del archivo que quieras actualizar o agregar>
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_9.png)

Tenemos nuestro stage actualizado ya, entonces con todo listo....... ¿ Hagamos un commit ?, para eso se utiliza el comando:

```console
git commit -m "mensaje"
# Igual puedes hacer commit a secas, pero es una buena practica el detallar y documentar que cambios realizaste para tener un seguimiento mas facil
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_10.png)

Para revisar el historial de commits realizados en el repositorio, simplemente usamos el comando 

```console
git log
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/repositorio_11.png)

# 1.4.- Git --> Github 

En esta seccion te mostrare como enviar tus archivos actuales desde git --> Github.

Lo primero claramente es tener una cuenta de Github hecha, una vez que tengas tu cuenta lista 
en el inicio te aparecera un signo "+" en los iconos superiores derecho de la pagina, se van a desplegar algunas opciones 
y dentro de ellas la primera dira **New repository**, esta opcion es la que permitira crear un repositorio nuevo dentro de la plataforma

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_1.png)

Cuando accedas a la opcion la pagina te pedira rellenar los datos del repositorio en caso de que quieras que sea uno publico/privado,
 agregar algun tipo de licencia o derechos de autor, dentro de otras opciones. 

 Para este ejemplo yo elegi licencia apache 2.0 y tambien añadir por defecto un archivo Readme.md (Que es donde se documentara el repositorio).

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_2.png)

Creado el repositorio lo que nos interesa es tener un link para referenciarlo a traves de git, para ello en la pagina del repositorio aparecera un 
boton verde, si seleccionamos el boton saldran muchas opciones para descargar el repo en formato Zip, entre otros. Lo que nos interesa aqui es copiar
el link **HTTPS** como aparece en la imagen de abajo:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_3.png)

Para demostracion de este ejemplo, cree una carpeta con algunos codigos de ejemplo:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_4.png)

Como te mostre al inicio, para iniciar un repositorio local tenemos que usar el comando: 

```console
git init
```

Con este comando le avisaremos a git que queremos trabajar en la ubicacion actual en la que estamos.

Luego agrege todos los archivos a la etapa de stage usando el comando:

```console
git add .
# Realice un checkeo de todo usando
git status --short
```

Llegados a este punto para referenciar el repositorio de Github a nuestro ambiente de trabajo tenemos que usar el comando:

```console
git remote add origin "link HTTPS"
# Para chekear que se referencio bien el repositorio remoto en nuestro ambiente local usamos el comando:
git remote -v 
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_5.png)

Como no quiero realizar ninguna modificacion mas a los archivos de ejemplo, simplemente realizamos un commit (Que es la etapa donde lo que tengamos aqui se vera reflejado en el repositorio).

Luego revisamos este commit usando el comando 

```console
git log
```

Y llegados a este punto tendremos un concepto nuevo el cual es **branch** , un branch en Git es esencialmente una línea de desarrollo independiente en tu repositorio. Piensa en él como una "rama" 
del tronco principal del proyecto, donde puedes trabajar en nuevas características, corregir errores, o experimentar sin afectar el código principal.

Para chekear en que rama te encuentras puedes usar el siguiente comando: 

```console
git branch
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_6.png)

Cuando creaste tu repositorio en el mismo espacio donde aparece el boton verde en donde copiamos el link HTTPS, a la izquierda de todo puedes ver como apareceren unos datos 
que te dicen la cantidad de branches, los tags y el nombre del branch principal, de manera predeterminada cuando creas un repo en github el branch principal se llamara "main",
 Pero en el ejemplo anterior cuando usamos el comando de "**git branch**" la rama que aparecia se llamaba "**master**", esto no nos sirve porque cuando enviemos los archivos 
 de git a github se añadiran en otra rama, si queremos que todo aparezca en la pagina principal entonces tenemos que crear la rama "**main**" en nuesto entorno, para crear
 una rama usando git tienes que utilizar el comando: 

```console
git branch "nombre de la rama que quieras crear"
# Para checkear que se haya creado usas nuevamente:
git branch
# Para cambiar de rama de trabajo se utiliza el comando:
git checkout "nombre de la rama a la cual quieras ir"
```

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_7.png)

Llegados a este punto como te dije con anterioridad, cuando cree el repositorio de Github le añadi algunas opciones : "Licencia apache" y "readme.md". 

Estos archivos tengo que importarlos a mi ambiente de trabajo para poder luego exportar todo junto, el caso de que hayas creado el repositorio sin nada no es necesario hacer lo siguiente: 

```console
# Comando para traer a mi repositorio local esos archivos que no tengo pero si los tiene el repositorio remoto 
git pull "nombre del repo (en el caso nuestro es origin)" main --allow-unrelated-histories
```

El comando pull tambien sirve para actualizar tus archivos en caso de haya ocurrido algun cambio en el repositorio remoto, para realizar actualizaciones tenemos 2 opciones:

* git fetch: Descarga datos desde el repositorio remoto a tu repositorio local, pero no fusiona estos datos en tu código actual de trabajo.
* git pull: Es una combinación de git fetch seguido de git merge. Descarga datos del repositorio remoto y automáticamente fusiona los cambios con el branch que tienes actualmente activado.

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_8_1.png)

Una vez actualizados los archivos y me traje a mi ambiente local los programas, readme, licencias que no tenia se procede a hacer un push (empujar) los archivos al repositorio remoto,
para eso se utiliza el comando 

```console
git push origin main
```

Siendo origin el nombre de referencia del repositorio remoto y main el branch que queremos enviar (Se enviaran todos los archivos que esten en la etapa de commit al repo remoto).

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_8.png)

Realizado el push si nos dirigimos a nuestro repositorio de Github podremos ver que se subieron todos los archivos de nuestro ambiente local al repositorio remoto 

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/github_9.png)

