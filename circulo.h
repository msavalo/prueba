#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo : public Figura
{
	// Atributos
    private:
      char tipoDeFigura;
      double radio;
      double area;
    // Metodos
    public:
    	Circulo ();
    	Circulo(double radio, double altura=0);
    	void setDimension (double radio);
    	void mostrarFigura();
    	double superficie();
};

#endif //CIRCULO_H_INCLUDED