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
  n = 4;
  am = 0;
  at = 0;
  aproximaciones[n];
};

float Prob3::fun (float x)
{
  return (sqrt(2+pow(x,2)))/(sqrt(2-pow(x,2)));
};

void Prob3::area()
{
  for (int i = 0; i < n-1; i++)
  {
    contador ++;
    float h = ancho/contador;
    float am = h*(((fun(x1+h*i))+(fun(x1+h*i+h)))/2);
    float at = at + am;
    aproximaciones [i] = at;
  }
};

void Prob3::print()
{
  for (int i = 0; i < n; i++)
  {
    cout<< "Aproximaciones con incremento de n" << aproximaciones[i] << "\n";
  }
};