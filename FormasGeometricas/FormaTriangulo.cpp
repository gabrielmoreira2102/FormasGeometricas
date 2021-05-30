#include "FormaTriangulo.hpp"
#include <math.h>

void FormaTriangulo::setLadoUm(float l)
{
	l1 = l;
}

void FormaTriangulo::setLadoDois(float l)
{
	l2 = l;
}

void FormaTriangulo::setLadoTres(float l)
{
	l3 = l;
}

void FormaTriangulo::calculaArea()
{
	float perimetro = (l1 + l2 + l3) / 2;
	area = sqrt (perimetro * (perimetro - l1) * (perimetro - l2) * (perimetro - l3));
	
	cout << " TRIANGULO " << endl;
	cout << " Lado 1: " << l1 << " cm " << endl;
	cout << " Lado 2: " << l2 << " cm " << endl;
	cout << " Lado 3: " << l3 << " cm " << endl;
	cout << " Área: " << area << " cm³ " << endl << endl;
}