#include "Animal.hpp"

void Animal::fazerBarulho()
{
  cout << "Animal estah fazendo barulho\n";
}
void Animal::dormir()
{
  cout << "Animal estah dormindo\n";
}
void Animal::movimentar()
{
  cout << nome << " estah se movimentando\n";
}
void Animal::setNome(string n)
{
  nome = n;
}
void Animal::setEspecie(string n)
{
  especie = n;
}