# Cómo crear y modificar un repositorio Git/Github

## 1.- Instalación y configuración de Git

Primero nos dirigimos a la página para [descargar Git](https://git-scm.com/downloads)

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/pagina_git.png)

Instala la versión correspondiente a tu sistema operativo, una vez completes la instalación para asegurarte que esté todo como corresponde, abre una terminal y escribe lo siguiente: 

```
git --version
```

Te debería salir lo siguiente indicando la versión de Git:

![](https://github.com/Matias3am/Programacion_en_C_Cpp/blob/main/Imagenes/git%20version.png)

Si te apareció significa que ya tienes Git en tu computador :) 


### 1.1.- Configuración 

Una vez instalado Git tenemos que abrir la terminal, te sugiero no usar la cmd de siempre si no la terminal de power shell y/o la git bash (Esta se instala en conjunto a Git), cualquiera de esas 2 opciones es mejor.  

Con la terminal abierta hay que configurar nuestras credenciales o nuestro usuario, para ello tienes que escribir los siguientes comandos:

```
git config --global user.name " tu nombre "
git config --global user.email " tu correo (ojalá el mismo de tu cuenta github) "
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
