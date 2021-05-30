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
    c.setRaio(20);
    c.calculaArea();
	    
    FormaRetangulo r;
    r.setBase(10);
    r.setAltura(2);
    r.calculaArea();
    
    FormaTriangulo t;
    t.setLadoUm(9);
    t.setLadoDois(7);
    t.setLadoTres(14);
    t.calculaArea();
    
    return  0;       
}