/**
 * @file ProyecC2.cpp
 * @author Grupo Proyecto 2 de Algoritmos 
 * @brief Proyecto manejo de archivos lenguaje C++
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string.h> 
#include <fstream> 
#include <conio.h> 
#include <cstdlib>
#include <windows.h>

using namespace std;

struct producto{
    string codigo,nombre, proveedor, estado;
    float precio, descuento;
    int existencia;
    };
int seleccion;
int cantidad =1;


void buscarc(ifstream &Lee){
    system ("cls");
    Lee.open("productos.txt", ios::in);
    string codigo,nombre,precio,proveedor, existencia,estado,descuento,enc;
    bool b = false;
    cout<<"Ingrese codigo de producto: ";
    cin>>enc;
    Lee>>nombre;
    while (!Lee.eof() && !b){
        Lee>>codigo;
        Lee>>precio;
        Lee>>proveedor;
        Lee>>existencia;
        Lee>>estado;
        Lee>>descuento;
        if(codigo == enc){
           cout<<"Producto: "<<nombre<<" - Codigo: "<<codigo<<" - Precio: "<<precio<<" - Proveedor: "<<proveedor<<" - Existencia: "<<existencia<<" - Estado: "<<estado<<" - Descuento: "<<descuento<<"\n";
            b = true;
        }
        Lee>>nombre;    
    }
    Lee.close();
    if (!b)
        cout<<"Producto no encontrado"<<endl;  
    system("pause");
}

//modificaciones de productos
//modificaciones descuentos
void mdescuento(ifstream &Lee){
    system("cls");
    string Nombre,Codigo,precio,proveedor, existencia,estado,descuento, mdescuento, Codig;
    Lee.open("productos.txt", ios::in);
    ofstream modificar("mproductos.txt", ios::out);
        cout<<"Codigo producto a modificar ";
        cin>>Codig;
        Lee>>Nombre;
        while(!Lee.eof()){
            Lee>>Codigo;
            Lee>>precio;
            Lee>>proveedor;
            Lee>>existencia;
            Lee>>estado;
            Lee>>descuento;
            if (Codigo == Codig){
                cout<<"Escribe el descuento aplicado al producto ";
                cin>>mdescuento;
                modificar<<Nombre<<" "<<Codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<mdescuento<<"\n"; 
                cout<<"Se opeero el cambio"<<endl;
                system("pause");
            }
            else{
                modificar<<Nombre<<" "<<Codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n";
            }
            Lee>>Nombre;    
        }
    Lee.close();
    modificar.close();
    remove("productos.txt");
    rename("mproductos.txt", "productos.txt");   
}

//modificar estado
void mestado(ifstream &Lee){
    system("cls");
    string nombre,codigo,precio,proveedor, existencia,estado,descuento, mestado, Codig;
    Lee.open("productos.txt", ios::in);
    ofstream modificar("mproductos.txt", ios::out);
        cout<<"Codigo producto a modificar ";
        cin>>Codig;
        Lee>>nombre;
        while(!Lee.eof()){
            Lee>>codigo;
            Lee>>precio;
            Lee>>proveedor;
            Lee>>existencia;
            Lee>>estado;
            Lee>>descuento;
            if (codigo == Codig){
                cout<<"Escribe el estado que aplicara al producto ";
                cin>>mestado;
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<mestado<< " "<<descuento<<"\n"; 
                cout<<"Se opeero el cambio"<<endl;
                system("pause");
            }
            else{
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n";
            }
            Lee>>nombre;    
        }
    Lee.close();
    modificar.close();
    remove("productos.txt");
    rename("mproductos.txt", "productos.txt");   
}

//modificar existencia 
void mexistencia(ifstream &Lee){
    system("cls");
    string nombre,codigo,precio,proveedor, mexistencia, mestado,descuento,estado, existencia, Codig;
    Lee.open("productos.txt", ios::in);
    ofstream modificar("mproductos.txt", ios::out);
        cout<<"Codigo producto a modificar ";
        cin>>Codig;
        Lee>>nombre;
        while(!Lee.eof()){
            Lee>>codigo;
            Lee>>precio;
            Lee>>proveedor;
            Lee>>existencia;
            Lee>>estado;
            Lee>>descuento;
            if (codigo == Codig){
                cout<<"Escribe el dato de existencias ";
                cin>>mexistencia;
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<mexistencia<<" "<<estado<< " "<<descuento<<"\n"; 
                cout<<"Se opeero el cambio"<<endl;
                system("pause");
            }
            else{
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n";
            }
            Lee>>nombre;    
        }
    Lee.close();
    modificar.close();
    remove("productos.txt");
    rename("mproductos.txt", "productos.txt");   
}

//modificar proveedor
void mproveedor(ifstream &Lee){
    system("cls");
    string nombre,codigo,precio,proveedor, existencia, mestado,descuento,estado, Codig, mproveedor;
    Lee.open("productos.txt", ios::in);
    ofstream modificar("mproductos.txt", ios::out);
        cout<<"Codigo producto a modificar ";
        cin>>Codig;
        Lee>>nombre;
        while(!Lee.eof()){
            Lee>>codigo;
            Lee>>precio;
            Lee>>proveedor;
            Lee>>existencia;
            Lee>>estado;
            Lee>>descuento;
            if (codigo == Codig){
                cout<<"Escribe el nuevo proveedor ";
                cin>>mproveedor;
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<mproveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n"; 
                cout<<"Se opeero el cambio"<<endl;
                system("pause");
            }
            else{
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n";
            }
            Lee>>nombre;    
        }
    Lee.close();
    modificar.close();
    remove("productos.txt");
    rename("mproductos.txt", "productos.txt");   
}

//modificar precio
void mprecio(ifstream &Lee){
    system("cls");
    string nombre,codigo,precio,proveedor, existencia, mestado,descuento,estado, Codig, mprecio;
    Lee.open("productos.txt", ios::in);
    ofstream modificar("mproductos.txt", ios::out);
        cout<<"Codigo producto a modificar ";
        cin>>Codig;
        Lee>>nombre;
        while(!Lee.eof()){
            Lee>>codigo;
            Lee>>precio;
            Lee>>proveedor;
            Lee>>existencia;
            Lee>>estado;
            Lee>>descuento;
            if (codigo == Codig){
                cout<<"Escribe el nuevo precio ";
                cin>>mprecio;
                modificar<<nombre<<" "<<codigo<<" "<<mprecio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n"; 
                cout<<"Se opeero el cambio"<<endl;
                system("pause");
            }
                else{
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n";
                }
            Lee>>nombre;
             
        }
    Lee.close();
    modificar.close();  
    remove("productos.txt");
    rename("mproductos.txt", "productos.txt");   
}

//modificar nombre
void mnombre(ifstream &Lee){
    system("cls");
    string nombre,codigo,precio,proveedor, existencia, mestado,descuento,estado, Codig, mnombre;
    Lee.open("productos.txt", ios::in);
    ofstream modificar("mproductos.txt", ios::out);
        cout<<"Codigo producto a modificar ";
        cin>>Codig;
        Lee>>nombre;
        while(!Lee.eof()){
            Lee>>codigo;
            Lee>>precio;
            Lee>>proveedor;
            Lee>>existencia;
            Lee>>estado;
            Lee>>descuento;
            if (codigo == Codig){
                cout<<"Escribe el nuevo nombre: ";
                cin>>mnombre;
                modificar<<mnombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n"; 
                cout<<"Se opeero el cambio"<<endl;
                system("pause");
            }
                else{
                modificar<<nombre<<" "<<codigo<<" "<<precio<<" "<<proveedor<<" "<<existencia<<" "<<estado<< " "<<descuento<<"\n";
                }
            Lee>>nombre;
             
        }
    Lee.close();
    modificar.close();
    remove("productos.txt");
    rename("mproductos.txt", "productos.txt");   
}






int main (){
ofstream produc;
ifstream Lee;
string codig;
int modif;
    
    producto listaproducto[cantidad];

    do{
    cout<<""<<endl; 
    cout<<""<<endl; 
    cout <<"**  Inicio aplicacion Proyecto 2  **"<<endl;
    cout <<"**Seleccione la operacion a realizar**"<<endl;
    cout <<"1. Agregar Producto"<<endl;
    cout <<"2. Buscar Producto"<<endl;
    cout <<"3. Modificar Producto"<<endl;
    cout <<"0. Salir del programa"<<endl;
        cin>> seleccion; //seleccion de usuario


switch (seleccion)
{
case 1:
     

    for (int i = 0; i < cantidad; i++){
        producto tmp;
        rewind(stdin); //limpia buffer//
        cout << "Producto (" << i + 1 << "): ";
        getline(cin, tmp.nombre);
        rewind(stdin); //limpia buffer//
        cout<<"codigo: ";
        cin>>tmp.codigo;
        rewind(stdin); //limpia buffer//
        cout<<"Precio: ";
        cin>>tmp.precio;
        rewind(stdin); //limpia buffer//
        cout<<"Proveedor: ";
        getline(cin, tmp.proveedor);
        rewind(stdin); //limpia buffer//
        cout<<"Existencia: ";
        cin>>tmp.existencia;
        rewind(stdin); //limpia buffer//
        cout<<"estado: ";
        getline(cin, tmp.estado);
        rewind(stdin); //limpia buffer//
        cout<<"descuento: ";
        cin>>tmp.descuento;

        listaproducto[i]=tmp;

        }
    
        for (int i=0;i<cantidad;i++){
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<"Producto (" << i + 1 << ")"<<endl;//imprimiendo datos ingresados anteriormente
            cout<<"Producto: "<<listaproducto[i].nombre<<endl;
            cout<<"Codigo: "<<listaproducto[i].codigo<<endl;
            cout<<"Precio: "<<listaproducto[i].precio<<endl;
            cout<<"Proveedor: "<<listaproducto[i].proveedor<<endl;
            cout<<"Existencia: "<<listaproducto[i].existencia<<endl;
            cout<<"Estado: "<<listaproducto[i].estado<<endl;
            cout<<"Descuento: "<<listaproducto[i].descuento<<endl;
            cout<<""<<endl;
            cout<<""<<endl;

            ifstream carga("productos.txt", ios::in);
            string nombre1,codigo1,precio1,proveedor1, existencia1,estado1,descuento1;
            carga>>nombre1;
            while(!carga.eof()){
                carga>>codigo1;
                carga>>precio1;
                carga>>proveedor1;
                carga>>existencia1;
                carga>>estado1;
                carga>>descuento1;
            }
            if (codigo1 == listaproducto[i].codigo){
                    cout<<"Este codigo de producto ya existe, intente con otro codigo "<<endl;
                    system("pause");
                    carga.close();
                    
            } 
            else{
                    carga>>nombre1;
                    ofstream produc;
                    produc.open("productos.txt", ios::out | ios::app);
                    produc<<listaproducto[i].nombre<<" "<<listaproducto[i].codigo<<" "<<listaproducto[i].precio<<" "<<listaproducto[i].proveedor<<" "<<listaproducto[i].existencia<<" "<<listaproducto[i].estado<<" "<<listaproducto[i].descuento<<"\n";
                    produc.close();
            }
            carga.close();
            
        }
   

    break;
case 2:
    buscarc(Lee);        
break;

case 3:
    cout<<" **Seleccione el dato a modificar** "<<endl;
    cout<<"1. Producto "<<endl;
    cout<<"2. Precio "<<endl;
    cout<<"3. Proveedor "<<endl;
    cout<<"4. Existencia "<<endl;
    cout<<"5. Estado "<<endl;
    cout<<"6. Descuento "<<endl;
    rewind(stdin); //limpia buffer//
    cin>>modif;

    if (modif == 1){
        mnombre(Lee);
    }
    else if (modif == 2){
        mprecio(Lee);
    }
    else if (modif == 3){
        mproveedor(Lee);
    }
    else if (modif == 4){
        mexistencia(Lee);
    }
    else if (modif == 5){
        mestado(Lee);
    }
    else if (modif == 6){
        mdescuento(Lee);
    }
    else if (modif == 0){
        
    }
    
break;
    default:
    break;
    }

    } while (seleccion!=0);


return 0;
}