#include "FormaTriangulo.hpp"

void FormaTriangulo::calcularArea()
{
	cout << area << " eh a area do triangulo!\n";
}
void FormaTriangulo::setArea()
{
	area = (base * altura) / 2;
}
void FormaTriangulo::setAltura(double a)
{
	altura = a;
}
void FormaTriangulo::setBase(double b)
{
	base = b;
}