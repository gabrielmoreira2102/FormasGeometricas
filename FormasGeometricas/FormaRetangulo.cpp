#include "FormaRetangulo.hpp"

void FormaRetangulo::setBase(float b)
{
	base = b;
}

void FormaRetangulo::setAltura(float a)
{
	altura = a;
}

void FormaRetangulo::calculaArea()
{
	area = base * altura;
	cout << " RETANGULO " << endl;
	cout << " Base: " << base << " cm " << endl;
	cout << " Altura: " << altura << " cm " << endl;
	cout << " Área: " << area << " cm² " << endl << endl;
}