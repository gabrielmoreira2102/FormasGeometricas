#include "Formas.hpp"

#ifndef FormaTriangulo_hpp
#define FormaTriangulo_hpp

class FormaTriangulo : public Formas
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