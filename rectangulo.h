#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

// Clase Rectangulo
class Rectangulo : public Figura
{
	// Atributos
    private:
      char tipoDeFigura;
      double area;
    // Metodos
    public:
    	Rectangulo();
    	Rectangulo(double base, double altura);
    	void setDimension(double base, double altura);
    	//char getTipoFigura();
    	void mostrarFigura();
    	double superficie();
    	void mostrarInformacion ();
    	/*void setBase (double base);
	    void setAltura (double altura);
	    double getBase ();
	    double getAltura ();*/
};

#endif //RECTANGULO_H_INCLUDED