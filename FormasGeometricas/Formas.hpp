#include <iostream>
using namespace std;

#ifndef Formas_hpp
#define Formas_hpp

class Formas
{
public: 
	float area();
  virtual void calculoArea() = 0;

	void setNomeForma(string n);
  void setTamArea(double t);

protected:
	string nomeForma;
	double tamArea;
};

#endif
