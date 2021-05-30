#include <iostream>
#include <locale.h>
#include "FormaTriangulo.hpp"
#include "FormaRetangulo.hpp"
#include "FormaCirculo.hpp"
#include "FormaGeometrica.hpp"

using namespace std;

int main()
{
	setlocale (LC_ALL, "português");
	
    FormaCirculo c;
    c.setRaio(10);
    c.calculaArea();
	    
    FormaRetangulo r;
    r.setBase(20);
    r.setAltura(10);
    r.calculaArea();
    
    FormaTriangulo t;
    t.setLadoUm(5);
    t.setLadoDois(5);
    t.setLadoTres(5);
    t.calculaArea();
    
    return  0;       
}