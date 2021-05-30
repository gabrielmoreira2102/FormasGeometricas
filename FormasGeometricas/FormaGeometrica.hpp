#include <iostream>
using namespace std;

#ifndef FormaGeometrica_hpp
#define FormaGeometrica_hpp

class FormaGeometrica
{
	public:
		 virtual void calculaArea() = 0;
	protected:
		float area;	
};

# endif