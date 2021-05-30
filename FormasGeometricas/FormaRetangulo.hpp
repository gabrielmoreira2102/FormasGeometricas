#include "FormaGeometrica.hpp"

#ifndef FormaRetangulo_hpp
#define FormaRetangulo_hpp

class FormaRetangulo : public FormaGeometrica
{
	public:
		void setBase(float b);
		void setAltura(float a);
		void calculaArea();
	
	private:
		float base;
		float altura;
};

#endif