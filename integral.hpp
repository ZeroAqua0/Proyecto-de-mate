#include "header.hpp"
using namespace std;

Prob3::Prob3 (float x)
{
  x1 = -1;
  x2 = 1;
  ancho = (x1 - x2);
  contador = 0;
  i = 0;
  n = 4;
};

float Prob3::fun (float x)
{
  return (sqrt(2+x^2))/(sqrt(2-x^2));
};

float Prob3::area()
{
  for (i<n-1)
  {
    contador ++;
    float h = ancho/contador;
  }
}

