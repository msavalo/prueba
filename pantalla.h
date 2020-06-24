#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
#include <string>
#include "lista.h"


class Pantalla {
//Atributos
     private:
     	char opcionMenu;
     	Lista lista;
     	std::string nombreArchivo;



// Metodos
     public:
     	Pantalla();
     	void setNombreArchivo(std::string);
     	void limpiarPantalla();
     	void mostrarMenu();
     	char getOpcion();
     	Lista getLista();
     	void setOpcion(char);
     	void pausa();
     	void crearListaDesdeArchivo(std::string nombreArchivo);
     	void hacerOpcion_5();
     	void hacerOpcion_6();
     	void hacerOpcion();
     	

};

#endif // PANTALLA_H_INCLUDED