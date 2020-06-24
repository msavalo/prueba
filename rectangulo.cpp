#include <iostream>
#include "figura.h"
#include "rectangulo.h"

using namespace std;

Rectangulo::Rectangulo ()
{
   this-> area = 0;
   this-> tipoDeFigura = 'R';
}

Rectangulo::Rectangulo(double base, double altura) : Figura (base,altura)
{
   this-> area = Figura::getBase() * Figura::getAltura();
   this-> tipoDeFigura = 'R';
}

void Rectangulo::setDimension(double base, double altura)
{
   //this-> area = Figura::getBase() * Figura::getAltura();
   //this-> tipoDeFigura = RECTANGULO;
   this->Figura::setBase(base);
   this->Figura::setAltura(altura);
}

/*char Rectangulo:: getTipoFigura()
{
	return this-> tipoDeFigura;
}*/


void Rectangulo::mostrarFigura()
{
  cout << " El objeto es un: RECTANGULO"<<endl;
  cout << "La base del Rectangulo es: "<< Figura::getBase()<<endl;
  cout << "La altura del Rectangulo es: "<< Figura::getAltura()<<endl;
  cout << "La superficie del Rectangulo es: "<< this->superficie()<<endl;

}


double Rectangulo::superficie()
{
  return this-> area;
}

/*void Rectangulo::mostrarInformacion ()
{
   cout<<"T - "<< this->getBase()<<" - "<<this -> getAltura()<<endl;
}*/
/*void Rectangulo::setBase (double base)
{
 
}


void Rectangulo::setAltura (double altura)
{

}


double Rectangulo::getBase ()
{

}

double Rectangulo::getAltura ()
{

}

*/
// -----------------------------------------------------
// Fin Metodos Clase Rectangulo
// -----------------------------------------------------
