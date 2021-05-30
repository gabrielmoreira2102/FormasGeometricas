#include "FormaGeometrica.hpp"

#ifndef FormaCirculo_hpp
#define FormaCirculo_hpp

class FormaCirculo : public FormaGeometrica
{
	public:
		void setRaio(float r);
		void calculaArea();
	
	private: 
		float raio;
				
};

# endif