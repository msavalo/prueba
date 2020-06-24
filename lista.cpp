#include <iostream>
#include <string>
#include <fstream>
#include "lista.h"
#include "rectangulo.h"
#include "triangulo.h"
#include "circulo.h"

using namespace std;

Lista::Lista(){
	//this-> primero = NULL;
	cout<<"SE EJECUTÓ CONSTRUCTOR SIN PARAMETROS DE LISTA"<<endl;
	this-> tamanio = 0;
	this-> superficieMaxima=0;
	this-> superficieMinima=1000000;
}

Lista::Lista (std::string nombreArchivo){
	cout<<"SE EJECUTÓ CONSTRUCTOR CON PARAMETROS DE LISTA"<<endl;
 this->cargarListaDesdeArchivoTXT (nombreArchivo );
}

bool Lista::listaVacia(){
     return this-> tamanio == 0;
}

void Lista::agregarNodo(Dato dato){	
     if (this-> listaVacia()){
     	this-> primero = new Nodo;
     	this-> primero->setDato(dato);
     	this-> tamanio++;
     	std::cout<< "La lista ya no está vacia."<<std::endl;

     	cout<<"Se agregó un nodo de tipo : ";
     	//primero->mostrarInformacion();
     	//this-> validarSupMaxima (primero.superficie());
     	cout<<endl<<" La lista tiene tamaño: "<<this->getTamanio()<<endl;

     } else {
     	Nodo* nuevoNodo = new Nodo;
     	nuevoNodo->setDato(dato);
        nuevoNodo->setSiguiente(primero);
        primero = nuevoNodo;
        this-> tamanio++;

        //primero->mostrarInformacion();
     	cout<<endl<<" La lista tiene tamaño: "<<this->getTamanio()<<endl;
       }
}

void Lista::borrarEnPosicion(int pos){
	Nodo* pAux = this-> primero;
	if (pos == 1){
		primero = primero-> getSiguiente();
		if (primero) {
			primero-> setAnterior(NULL);
		}
	} else {
		for ( int cont = 1; cont < pos; cont++ ){
			pAux = pAux->getSiguiente();
		}
		if (pAux-> getSiguiente()){
			pAux-> getSiguiente()-> setAnterior(pAux-> getAnterior());
		}
		pAux -> getAnterior()-> setSiguiente(pAux -> getSiguiente());
	}
    delete pAux;
    this->tamanio--;
}

Dato Lista::buscarEnPosicion(int pos){
     Nodo* pAux = this-> primero;

     for (int cont = 1; cont < pos; cont++){
     	pAux = pAux -> getSiguiente();
     }
     return pAux -> getDato();
}

void Lista::listar(){
    Nodo* pAux = this -> primero;
    /*for ( int i = 0; i < this -> tamanio; i ++ ){
    	//std::cout << pAux -> getDato ()<<std::endl;
    	pAux->mostrarInformacion();
        pAux = pAux -> getSiguiente();
    }*/

    while (pAux){
    	pAux->mostrarInformacion();
        pAux = pAux -> getSiguiente();
    }
    std::cout<<std::endl;
}


void Lista::setSuperficieMaxima(double nuevaSupMax)
{
  this-> superficieMaxima = nuevaSupMax;
}

void Lista::setSuperficieMinima(double nuevaSupMin){
    this-> superficieMinima = nuevaSupMin;
}


double Lista::getSuperficieMaxima()
{
    return this-> superficieMaxima;
}

double Lista::getSuperficieMinima()
{
   return this-> superficieMinima;
}


int Lista::getTamanio()
{
	return this->tamanio;
}


void Lista::validarSupMaxima (double superficie)
{
	if (this->getSuperficieMaxima () < superficie){
		this->setSuperficieMaxima (superficie);
	}
}

void Lista::validarSupMinima (double superficie)
{
	if (this->getSuperficieMinima () > superficie){
		this->setSuperficieMinima (superficie);
	}
}

void Lista::verificarSuperficie(double superficie)
{
   this->validarSupMaxima(superficie);
   this->validarSupMaxima(superficie);
}
/*void Lista::crearRectangulo(Figura* rectangulo)
{
	rectangulo = new Rectangulo;
}*/

void Lista::cargarListaDesdeArchivoTXT (std::string nombreArchivo )
{   
   ifstream archivo (nombreArchivo, ios::in);
   string dato;
   char c;
   float base, altura;
   Rectangulo* rectangulo;
   Triangulo* triangulo;
   Circulo* circulo;

   if (!archivo.fail()) {
   	  while(archivo >> dato){
    		//cout << dato;
    		if (dato == "T"){
    			triangulo->setTipo('T');
    			
    		   //cout<< " TRIANGULO ";
               //this->crearRectangulo(rectangulo);
    		   //this-> agregarNodo(rectangulo);

    		   archivo>>base;
    		   //cout<< " base: "<<base;
    		   archivo>>altura;
    		   
    		   cout<<endl<<"Se va a agregar un triangulo de base: "<< base <<" y altura "<< altura <<endl;
    		   triangulo->setDimension(base,altura);
    		   this->agregarNodo(triangulo);
    		   this->verificarSuperficie(triangulo->superficie());
    		   this->listar();
    		   cin>>c;
    		   //cout<< " base: "<<altura;
    		   //cout<< " superficie: "<< (base*altura)/2 <<endl;
    		   //rectangulo
    		} 
    		if (dato == "R") {
    			//cout<< " RECTANGULO";
                rectangulo->setTipo('R');
    			archivo>>base;
    		   // cout<< " base: "<<base;
    		    archivo>>altura;
    		    cout<<endl<<"Se va a agregar un rectangulo de base: "<< base<<" y altura "<<altura<<endl;
    		    rectangulo->setDimension(base,altura);
    		    this->agregarNodo(rectangulo);
    		    this->verificarSuperficie(rectangulo->superficie());
    		    this->listar();
    		   cin>>c;
    		   
    		   // cout<< " base: "<<altura;
    		    //cout<< " superficie: "<< base*altura <<endl;
    		}
    		if (dato == "C") {
    			//cout<< " CIRCULO";
    			circulo->setTipo('C');
    			archivo>>base;
    			cout<<endl<<"Se va a agregar un circulo de radio: "<< base <<endl;
    		    circulo->setDimension(base);
    		    this->agregarNodo(circulo);
    		    this->verificarSuperficie(circulo->superficie());
    		    this->listar();
    		   cin>>c;
    		    //cout<< " radio : "<<base;
    		   // cout<< " superficie: "<< base*base*PI <<endl;
    		}
    		cout<<endl;
       	}
       	cout << "SE CARGÓ LA LISTA DESDE EL ARCHIVO."<<endl;
       	this->listar();
       	cout<<endl<<"ESTO ES ANTES DE CERRAR EL ARCHIVO"<<endl;
       	archivo.close();
       	cout<<endl<<"ESTO ES DESPUES DE CERRAR EL ARCHIVO"<<endl;
   } else {
   	   cout << "El archivo no se abrió correctamente. "<<endl;
   }
   cout<<endl<<"ESTO ES JUSTO ANTES DE SALIR DEL METODO CARGAR LISTA DESDE ACHIVO."<<endl;
}

Lista::~Lista (){
//Nodo* pAux = primero;
if (!this-> listaVacia()){
    do {
       this-> borrarEnPosicion(1);
       //delete pAux;
    } while (!this-> listaVacia());
  }

std::cout<< " SE EJECUTÓ EL DESTRUCTOR DE LA LISTA."<<std::endl;
}