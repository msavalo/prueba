#include <iostream>
#include "figura.h"
#include "circulo.h"

using namespace std;

Circulo::Circulo()
{
	this-> area = 0;
   this-> tipoDeFigura = 'C';
}

Circulo::Circulo(double radio, double altura) : Figura (radio,altura)
{
   this-> radio = Figura::getBase();
   this-> area = radio*radio*PI;
   this-> tipoDeFigura = CIRCULO;
}

void Circulo::setDimension (double radio)
{
     //this-> radio = radio;
	this->Figura::setBase(radio);
}


void Circulo::mostrarFigura()
{
  cout << " El objeto es un: CIRCULO"<<endl;
  cout << " El radio del Circulo es: "<< Figura::getBase()<<endl;
  cout << "La superficie del circulo es: "<< this->superficie()<<endl;
}

double Circulo::superficie()
{
  return this-> area;
}
// -----------------------------------------------------
// Fin Metodos Clase Circulo
// -----------------------------------------------------