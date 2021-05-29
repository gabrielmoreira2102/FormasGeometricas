#include "Formas.hpp"

#ifndef FormaRetangulo_hpp
#define FormaRetangulo_hpp

class FormaRetangulo : public Formas
{
public:
	void calcularArea();
	void setArea();
	void setAltura(double a);
	void setBase(double b);
	
private:
	double altura;
	double base;
	float area;
};

#endif