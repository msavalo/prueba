#include <iostream>
//#include <cstdlib>
#include "pantalla.h"
#include "lista.h"

using namespace std;

Pantalla::Pantalla(){
    this->opcionMenu='.';
   // this-> nombreArchivo = "figuras.txt";
   // this-> lista.cargarListaDesdeArchivoTXT(nombreArchivo);
};

void Pantalla::limpiarPantalla() {
    #ifdef WINDOWS
        system("cls");
    #else
        system("clear");
    #endif
}

void Pantalla::mostrarMenu(){
	this->limpiarPantalla();
	char opcion;


cout<<endl<<endl;
           cout<<"**************************************************************"<<endl;
           cout<<"***************** -- BIENVENIDO-- *************************"<<endl;
           cout<<"**************************************************************"<<endl<<endl<<endl;
           cout<<"                 *****  Menu:  *****"<<endl<<endl<<endl;
           cout<<"                1) Mostrar contenido en determinada posicion. "<<endl;
           cout<<"                2) Dar de baja objeto de cierta posicion. "<<endl;
           cout<<"                3) Agregar nuevo objeto en forma manual. "<<endl;
           cout<<"                4) Listar. "<<endl;
           cout<<"                5) Mostrar superficie maxima. "<<endl;
           cout<<"                6) Mostrar superficie minima. "<<endl;
           cout<<"                0) Salir"<<endl<<endl;
           cout<<endl<<endl<<endl<<endl<<endl<<endl;
           cout<<" * Seleccione una opcion: ";
           cin>> opcion;  
           this->setOpcion(opcion);
           cout<<endl<<endl;


}


Lista Pantalla::getLista(){
    return this->lista;
}

char Pantalla::getOpcion(){
    return this->opcionMenu;
}

void Pantalla::setOpcion(char opcion){
    this->opcionMenu=opcion;
}

void Pantalla::pausa(){
	char aux;
	cout <<endl<<endl<<"Presione una tecla distinta de Enter y luego Enter para continuar."<<endl<<endl;
    cin >> aux;
}

void Pantalla::crearListaDesdeArchivo(std::string nombreArchivo){
	this->getLista().cargarListaDesdeArchivoTXT (nombreArchivo );
}

void Pantalla::hacerOpcion_5(){
	if (!this->getLista().listaVacia()){
                	this->limpiarPantalla();
                    cout <<endl<<"LA SUPERFICIE MAXIMA ES: "<<this->getLista().getSuperficieMaxima()<<endl;
                    this->pausa();
                } else {
                	this->limpiarPantalla();
                	cout<< " La lista esta vacia."<<endl;
                	this->pausa();
                }
}

void Pantalla::hacerOpcion_6(){
	if (!this->getLista().listaVacia()){
                	this->limpiarPantalla();
                    cout <<endl<<"LA SUPERFICIE MINIMA ES: "<<this->getLista().getSuperficieMinima()<<endl;
                    this->pausa();
                } else {
                	this->limpiarPantalla();
                	cout<< " La lista esta vacia."<<endl;
                	this->pausa();
                }
}


void Pantalla::hacerOpcion(){
	char aux;
    char opcion = this->getOpcion();
    switch (opcion){
        case '1': {
                this->limpiarPantalla();
                cout <<"HACE OPCION 1."<<endl;
                cin>>opcion;
        }break;
        case '2': {
            //hace opcion 1.
                this->limpiarPantalla();
                cout <<"HACE OPCION 2."<<endl;
        }break;
        case '3': {
            //hace opcion 1.
               this->limpiarPantalla();
                cout <<"HACE OPCION 3."<<endl;
        }break;
        case '4': {
            //hace opcion 1.
                this->limpiarPantalla();
                cout <<"HACE OPCION 4."<<endl;
        }break;
        case '5': { this->hacerOpcion_5 ();                   
          }break;
        case '6': { this->hacerOpcion_6 ();             
          }break;
        case '0': {
                this->limpiarPantalla();
                cout << " Muchas gracias por utilizar esta aplicación. Hasta la proxima !!!!!!!!!!!"<<endl;
        }break;
    }

}

