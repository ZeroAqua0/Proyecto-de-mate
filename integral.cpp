#include "header.hpp"
#include <math.h>
#include <iostream>
using namespace std;

Prob3::Prob3 ()
{
  x1 = -1;
  x2 = 1;
  ancho = abs(x1 - x2);
  repeticiones = 15;
  aproximaciones[repeticiones];
};

float Prob3::fun (float x)
{
  return (sqrt(2+pow(x,2)))/(sqrt(2-pow(x,2)));
};

void Prob3::area()
{
  float h = 0;
  float n = 1;
  float am = 0;
  float at = 0;
  for (int x = 0; x < repeticiones; x++)
  {
    for (int i = 0; i < n; i++)
      {
        h = ancho/n;
        am = h*(((fun(x1+h*i))+(fun(x1+h*i+h)))/2);
        at += am;
        am = 0;
      }
    aproximaciones [x] = at;
    at = 0;
    n++;
  }
};

void Prob3::print()
{
  for (int i = 0; i < repeticiones; i++)
  {
    cout<< "Aproximacion numero " << i + 1 << " : " << aproximaciones[i] << "\n";
  }
};