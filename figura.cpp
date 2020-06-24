#include <iostream>
#include "figura.h"

using namespace std;

//-----------------------------------------------------
// Metodos Clase Figura

// Constructor Figura
Figura::Figura()
{
	this-> base = 0;
    this-> altura = 0;
    this-> tipo='.';
}

Figura::Figura(double base, double altura)
{
    this-> base = base;
    this-> altura = altura;
    this-> tipo='.';
}


void Figura::setTipo(char letra)
{
	 this->tipo = letra;
}

void Figura::setBase (double nuevaBase)
{
	this->base = nuevaBase;
}

void Figura::setAltura (double nuevaAltura)
{
	this->altura = nuevaAltura;
}
/*void Figura::setDimension (double base, double altura)
{
    this-> base = base;
    this-> altura = altura;
}
*/
char Figura::getTipo()
{
	return this->tipo;
}

double Figura::getBase()
{
    return this-> base;
}


double Figura::getAltura()
{
    return this-> altura;
}

void Figura::mostrarFigura ()
{
  // FIGURA NO DEFINIDA.
}


double Figura::superficie ()
{
  // FIGURA NO DEFINIDA.
}


Figura::~Figura()
{

}


// -----------------------------------------------------
// Fin Metodos Clase Figura
// -----------------------------------------------------
