#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "figura.h"

typedef Figura* Dato;
//const Figura* NULO = NULL;

class Nodo {

    private:
    	Dato dato;
    	Nodo* pSiguiente;
        Nodo* pAnterior;
    public:
	    Nodo();
	    Nodo(Dato dato);
	    void setDato(Dato);
	    void setAnterior (Nodo* nuevoAnterior);
	    void setSiguiente (Nodo* nuevoSiguiente);
	    Dato getDato();
	    Nodo* getAnterior ();
	    Nodo* getSiguiente();
	    void mostrarInformacion();
	    ~Nodo();
	
};

#endif // NODO_H_INCLUDED