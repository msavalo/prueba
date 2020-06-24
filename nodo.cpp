#include <iostream>
#include "nodo.h"

Nodo::Nodo(){
    this-> dato = NULL;
    this-> pSiguiente = NULL;
    this-> pAnterior = NULL;
}

Nodo::Nodo(Dato dato){
    this-> dato = dato;
    this-> pSiguiente = NULL;
    this-> pAnterior = NULL;
}

void Nodo::setDato(Dato nuevoDato){
    this -> dato = nuevoDato;
}

void Nodo::setAnterior (Nodo* nuevoAnterior){
    this->pAnterior = nuevoAnterior;
}

void Nodo::setSiguiente (Nodo* nuevoSiguiente){
    this->pSiguiente = nuevoSiguiente;
}

Dato Nodo::getDato(){
    return this-> dato;
}

Nodo* Nodo::getAnterior(){
    return this-> pAnterior;
}

Nodo* Nodo::getSiguiente(){
    return this-> pSiguiente;
}


void Nodo::mostrarInformacion()
{
    //if(getDato()->getTipo()== 'R') {std::cout<< "ES UN RECTANGULO!!!!!!!!!!!";} 
    

    switch (getDato()->getTipo()) {
    	case 'R': {std::cout<<"R -"<< getDato()->getBase()<<" - "<<getDato()->getAltura()<<std::endl;}
    	   break;
    	case 'T': {std::cout<<"T -"<< getDato()->getBase()<<" - "<<getDato()->getAltura()<<std::endl;}
    	   break;
    	case 'C': {std::cout<<"C -"<< getDato()->getBase()<<std::endl;}
    	   break;
    }
    
}

Nodo::~Nodo(){
	std::cout<<" Se ejecuta el destructor de Nodo"<<std::endl;
}