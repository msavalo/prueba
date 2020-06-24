#include <iostream>
#include <string>
#include "pantalla.h"
/*#include "lista.h"
#include "figura.h"
#include "rectangulo.h"
#include "triangulo.h"
#include "circulo.h"*/
using namespace std;

int main ()
{
	string nombreArchivo ="figuras.txt";
	Pantalla pantalla;

	pantalla.getLista().cargarListaDesdeArchivoTXT (nombreArchivo);
	//char c;
  
         cout<< " Se declaró una variable de tipo pantallaaaaaa." <<endl;
         /*while (pantalla.getOpcion()!='0'){
         	cout<< " Esto esta adentro del while." <<endl;
         	pantalla.getLista().listar();
         	cout<< " Presione 0 para salir: ";
         	pantalla.setOpcion(getchar());
         	cout<<endl;
         }

         cout << "Esto esta afuera del while"<<endl;*/
         pantalla.getLista().listar();
	     
         



	/*while (pantalla.getOpcion()!='0'){
           pantalla.mostrarMenu();
           pantalla.hacerOpcion();              
    }
*/

  pantalla.pausa();


	/*Lista listaFiguras;
	system ("clear");
	listaFiguras.cargarListaDesdeArchivoTXT("figuras.txt");
	listaFiguras.listar();/*
	
	/*Rectangulo rectangulo (2.4,4.7);
	Circulo circulo (2.9);
	Triangulo triangulo (5.9,3.2);
	cout <<"Esta es una prueba para el TP3"<<endl;
	rectangulo.mostrarFigura();
	cout<<endl;
	circulo.mostrarFigura();
	cout<<endl;
	triangulo.mostrarFigura();*/
	return 0;
}
