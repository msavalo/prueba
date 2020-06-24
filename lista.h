#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <iostream>
#include <string>
#include "nodo.h"
//#include "lista.h"

class Lista {
// Atributos
   private:
   	 Nodo* primero;
   	 int tamanio;
   	 double superficieMaxima;
   	 double superficieMinima;

// Metodos
   public:
     Lista();
     Lista (std::string);
     bool listaVacia();
     void agregarNodo(Dato);
     void borrarEnPosicion(int pos);
     Dato buscarEnPosicion(int pos);
     void listar();
     void setSuperficieMaxima(double nuevaSupMax);
     void setSuperficieMinima(double nuevaSupMin);
     double getSuperficieMaxima();
     double getSuperficieMinima();
     int getTamanio();
     void validarSupMaxima (double superficie);
     void validarSupMinima (double superficie);
     void verificarSuperficie(double superficie);
    // void crearRectangulo(Figura* rectangulo);
     void cargarListaDesdeArchivoTXT (std::string nombreArchivo );
     ~Lista ();
};


#endif //LISTA_H_INCLUDED