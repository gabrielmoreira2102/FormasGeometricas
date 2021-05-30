#include "FormaGeometrica.hpp"

#ifndef FormaTriangulo_hpp
#define FormaTriangulo_hpp

class FormaTriangulo : public FormaGeometrica
{
	public:
		void setLadoUm(float l);
		void setLadoDois(float l);
		void setLadoTres(float l);
		void calculaArea();
	
	private:
		float l1;
		float l2;
		float l3;
};

# endif