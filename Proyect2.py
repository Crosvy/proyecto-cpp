import sys
nombres = []
codigo1 = []
proveedor1 = []
existencia1 = []
estado1 = []
descuento1 = []
precios = []
 
while True:
    print("""
=========================
    Proyecto 2
=========================
""")
    eleccion = input("""
1 - Introducir un artículo nuevo
2 - Mostrar información
3 - Modificar Articulo
4 - Salir

Seleccione: """)
    if eleccion == "1":
        print("\n")
        print("DATOS DEL PRODUCTO: ")
        nombre = input("Nombre del producto: ")
        codigo = input("Codigo del producto: ")
        precio = input("Precio del producto: ")
        proveedor = input("Proveedor: ")
        existencia = input("Numero de existencia: ")
        estado = input("Estado del producto: ")
        descuento = input("Descuento del producto: ")
        nombres.append(nombre)
        codigo1.append(codigo)
        precios.append(precio)
        proveedor1.append(proveedor)
        existencia1.append(existencia)
        estado1.append(estado)
        descuento1.append(descuento)
        

        with open("Proyecto.txt","a") as salida:
            salida.write(nombre+" ")
            salida.write(codigo+" ") 
            salida.write(precio+" ") 
            salida.write(proveedor+" ") 
            salida.write(existencia+" ") 
            salida.write(estado+" ")
            salida.write(descuento+"\n")
            salida.close() #Cerrando txt
                        
    elif eleccion == "2":
        if len(nombres) <= 0:
            print("No hay artículos")
            continue
        
        with open ("Proyecto.txt") as archivo:
            print("\n")
            print("LISTADO DE PRODUCTO REGISTRADO: ")
            leer = archivo.read()
            print(leer)
            archivo.close()
            
    elif eleccion == "3":
        cod = input ("Ingrese el codigo a modificar: ")

        with open("Proyecto.txt", "r+") as fichero:
            fichero.read()
            fichero.writelines(nombres)
            fichero.close()

        for x in range(len(codigo1)):
            if codigo1[x]== cod:
                codigo1[x]=input("Cual es el nuevo codigo: ")
                nombres[x]=input("Cual es el nuevo nombre: ")

    elif eleccion == "4":
        if input("Seguro (s/n): ") == "s":
            sys.exit()