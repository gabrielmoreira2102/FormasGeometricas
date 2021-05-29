#include "FormaCirculo.hpp"
#include "FormaRetangulo.hpp"
#include "FormaTriangulo.hpp"

int main()
{
  FormaCirculo a;
  FormaRetangulo b;
  FormaTriangulo c;
    
  a.setNomeForma("Circulo");
  a.setArea();
    
  b.setEspecie("Gato");
  b.setArea("Garfield");
  b.setNumPatas(4);
    
  c.setEspecie("Papagaio");
  c.setNome("Zeh Carioca");
    
  a.fazerBarulho();
  a.movimentar();
  a.comer();
  cout << endl;
    
  b.fazerBarulho();
  b.movimentar();
  b.comer();
  cout << endl;
    
  c.fazerBarulho();
  c.movimentar();
  c.comer();
  cout << endl;
    
  return  0 ;
}