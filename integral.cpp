#include "header.hpp"
#include <math.h>
#include <iostream>
using namespace std;

Prob3::Prob3 ()
{
  x1 = -1;
  x2 = 1;
  ancho = (x1 - x2);
  contador = 0;
  i = 0;
  n = 4;
  am = 0;
  at = 0;
  aproximaciones [n];
};

float Prob3::fun (float x)
{
  return (sqrt(2+pow(x,2)))/(sqrt(2-pow(x,2)));
};

float Prob3::area()
{
  for (i < n-1)
  {
    contador ++;
    float h = ancho/contador;
    float am = h*(((fun(x1+h*i))+(fun(x1+h*i+h)))/2);
    float at = at + am;
    aproximaciones [i] = at;
    i++;
  }
  cout<< "Aproximaciones con incremento de n" << aproximaciones
};

