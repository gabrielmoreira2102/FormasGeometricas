#include "Formas.hpp"

#ifndef FormaCirculo_hpp
#define FormaCirculo_hpp

class FormaCirculo : public Formas
{
public:
	void calcularArea();
	void setArea();
	void setDefPi(double pi);
	void setRaio(double r);
	
private:
	double defPi;
	double raio;
	float area;
};

#endif