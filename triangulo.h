#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

class Triangulo : public Figura
{
	// Atributos
    private:
      char tipoDeFigura;
      double area;
    // Metodos
    public:
    	Triangulo ();
    	Triangulo(double base, double altura);
    	void setDimension(double base, double altura);
    	void mostrarFigura();
    	double superficie();
    	/*void setBase (double base);
	    void setAltura (double altura);
	    double getBase ();
	    double getAltura ();*/
};

#endif //TRIANGULO_H_INCLUDED