#include "FormaRetangulo.hpp"

void FormaRetangulo::calcularArea()
{
	cout << area << " eh a area do retangulo!\n";
}
void FormaRetangulo::setArea()
{
	area = base * altura;
}
void FormaRetangulo::setAltura(double a)
{
	altura = a;
}
void FormaRetangulo::setBase(double b)
{
	base = b;
}