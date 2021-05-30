#include "FormaCirculo.hpp"
#include <math.h>

void FormaCirculo::setRaio(float r)
{
	raio = r;
}

void FormaCirculo::calculaArea()
{
	area = M_PI * pow (raio, 2 ); 
	cout << " CIRCULO " << endl;
	cout << " Raio: " << raio << " cm " << endl;
	cout << " Área: " << area << " cm " << endl << endl;
}