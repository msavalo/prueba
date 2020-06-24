#include <iostream>
#include "figura.h"
#include "triangulo.h"

using namespace std;

Triangulo::Triangulo ()
{
   this-> area = 0;
   this-> tipoDeFigura = 'T';
}

Triangulo::Triangulo(double base, double altura) : Figura (base,altura)
{
   this-> area = Figura::getBase() * Figura::getAltura()*0.5;
   this-> tipoDeFigura = TRIANGULO;
}

void Triangulo::setDimension(double base, double altura)
{
	 this->Figura::setBase(base);
   this->Figura::setAltura(altura);
}


void Triangulo::mostrarFigura()
{
  cout << "La base del Triangulo es: "<< Figura::getBase()<<endl;
  cout << "La altura del Triangulo es: "<< Figura::getAltura()<<endl;
  cout << "La superficie del Triangulo es: "<< this->superficie()<<endl;
}


double Triangulo::superficie()
{
  return this-> area;
}


/*void Triangulo::setBase (double base)
{

}


void Triangulo::setAltura (double altura)
{

}


double Triangulo::getBase ()
{

}

double Triangulo::getAltura ()
{

}*/


// -----------------------------------------------------
// Fin Metodos Clase Triangulo
// -----------------------------------------------------
