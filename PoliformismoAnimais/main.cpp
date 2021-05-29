#include "AnimalAquatico.hpp"
#include "AnimalTerrestre.hpp"
#include "AnimalVoador.hpp"

int main()
{
  AnimalAquatico a;
  AnimalTerrestre b;
  AnimalVoador c;
    
  a.setEspecie("Peixe");
  a.setNome("Nemo");
  a.setGelra(true);
    
  b.setEspecie("Gato");
  b.setNome("Garfield");
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