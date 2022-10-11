## CENTRO UNIVERSITARIO DE BOCA DEL MONTE
### FACULTAD DE INGENIERIA EN SISTEMAS


## Titulo: **Proyecto 2 Algoritmos**



### Nombres: Crosvy Rolando Culajay Zabala
###          Ruth Estefania Perez Damian 
###          Jose Rodolfo Samayoa Matias
###          Kevin Antulio Poitan Cos
### Sección “A”








***
***
# **`Estructuras en C++`**
    Las estructuras de datos en C++ se pueden entender como un tipo de dato compuesto (no complejo). Las estructuras de datos permiten almacenar de manera ordenada una serie de valores dados en una misma variable. Las estructuras de datos más comunes son los arrays, que pueden ser unidimensionales (de una dimensión) también conocidos como vectores, o multidimensionales (de varias dimensiones) también conocidos como matrices, aunque hay otras un poco más diferentes como son struct, las enumeraciones y los punteros.

# *Struct ejemplo*

```
struct Persona{
    char producto[20];
    int codigo;
    float precio;
    string proveedor;
    int existencia;
    float descuento;
}persona1;
```

**Las estructuras** de datos han sido creadas para solucionar una gran variedad de problemáticas que no eran solucionables (o al menos no muy fácilmente) con los tipos de datos primitivos. 

> Sin la existencia de las estructuras de datos sería imposible o bastante complicado, por ejemplo, conocer y manejar todos los números de identificación, nombres y, direcciones de todos los usuarios de un sistema (que normalmente serían muchísimos) pero ahora con las estructuras de datos es muy simple definir una serie de posiciones en memoria para cada valor que deseamos guardar o definir un orden o valores específicos para cada campo y accediendo a ellos generalmente por medio de una única variable. Todo esto es sencillo hacerlo con el uso de las estructuras de datos y sin desperdiciar recursos.
***
***

## Ficheros en C++
Para trabajar con ficheros en C++ debe incluirse la cabecera *fstream*.
Dependiendo de lo que deseemos hacer con el fichero, usaremos objetos de las clases:
***ifstream*** ( input file stream), clase orientada para la lectura
**ofstream** (output file stream). clase orientada para la escritura
*fstream* (file stream), cuando deseemos alternativamente leer o escribir del mismo fichero en el mismo programa.

>A diferencia de cin y cout, que son objetos predefinidos de acceso global, listos para su uso, los objetos que representan flujos de datos a/desde ficheros deben ser definidos por el programador.

* La apertura del fichero consiste en definir un objeto de la clase deseada (ifstream, ofstream ó fstream).
Para escribir o leer, se usan los operadores de inserción << y extracción >> como si del teclado o consola se tratase.
El fichero se cierra implícitamente cuando el objeto sale del ámbito en el que se ha definido o explícitamente llamando a la función miembro close().

# Fichero en Python

Para manejar un fichero en Python usaremos el método open, ya que es el principal encargado de realizar estas operaciones.
El método open recibe varios parámetros, el primero indica el nombre del fichero y el segundo indica el modo para abrir el fichero. A continuación algunos de los modos de apertura de un fichero mas usados:

* r: Abre un fichero para su lectura. Es el valor predeterminado, el puntero del archivo se pone al principio y nos devuelve un error si el fichero no existe.

* a: Modo añadir. Abre un fichero para añadir contenido posicionándose al final, en el caso de no existir el archivo lo crea.

* w: Modo escritura. Abre un fichero para escribir contenido posicionándose al principio del fichero, en el caso de no existir el archivo lo crea.

## Ejemplo 

```
with open("Proyecto.txt","a") as salida: 
            salida.write(nombre+" ")
            salida.write(codigo+" ") 
            salida.write(precio+" ") 
            salida.write(proveedor+" ") 
            salida.write(existencia+" ") 
            salida.write(estado+" ")
            salida.write(descuento+"\n")
            salida.close()
```

### Manipulando ficheros con Python 
En este punto, nos hemos dado cuenta que sabemos como crear y leer un fichero pero, ¿Como puedo eliminar un fichero, cambiar el nombre o crear una carpeta?

Bien, para estas acciones y otras Python no ofrece un módulo llamado os. Este módulo nos proporciona ciertos métodos que nos ayudan a realizar operaciones de procesamiento de ficheros, como renombrar y eliminar. A continuación algunos de los métodos que nos ofrece este módulo:

os.rename() 	*Renombra un fichero*       os.rename(‘write.txt’, ‘rename_write.txt’)
os.remove()     *Elimina un fichero*        os.remove(‘rename_write.txt’)

#Fin
