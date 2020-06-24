#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

const double PI = 3.14;
enum Figuras {RECTANGULO,TRIANGULO,CIRCULO};

class Figura
{
	// Atributos
    private:
   	    double base;
   	    double altura;
   	    char tipo;

    // Metodos
    public:
    	Figura();
	    Figura(double base, double altura);
	    double getBase();
	    double getAltura();
	    char getTipo();
	    void setTipo(char);
	    void setBase (double nuevaBase);
	    void setAltura (double nuevaAltura);
	    virtual void mostrarFigura ()=0;
	    virtual double superficie ()=0;
	    virtual ~Figura();
	
};
#endif //FIGURA_H_INCLUDED