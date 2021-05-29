#include "FormaCirculo.hpp"

void FormaCirculo::calcularArea()
{
	cout << area << " eh a area do circulo!\n";
}
void FormaCirculo::setArea()
{
	area = defPi * raio * raio;
}
double pi = 3.14159;  
void FormaCirculo::setDefPi(double pi)
{
	defPi = pi;
}
void FormaCirculo::setRaio(double r)
{
	raio = r;
}