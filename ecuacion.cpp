#include "header.hpp"
#include <math.h>
#include <iostream>
using namespace std;

Prob4::Prob4 ()
{
  x1 = 0;
  y1 = 1;
  ancho = abs(x1 - y1);
  repeticiones = 11;
  aproximaciones[200];
  //xf=10
};

float Prob4::fun (float x)
{
  return pow(x,4)+0.4*pow(x,2)-12*x;
};

void Prob4::euler()
{
  float h = 0;
  float n = 0.1;
  int c = 0;
  float yi;
  float xi;
  for (int i = 0; i < 5; i++)
  {
    aproximaciones[c] = y1;
    c++;
    h = ancho/n;
    yi = y1;
    xi = x1;
    while (xi <= 10)
    {
      yi += h*fun(xi);
      xi += h;
      aproximaciones[c] = yi;
      c++;
    }
    n = n + 0.1;
  }
};

float Prob4::k1(float x)
{
  return fun(x);
};

float Prob4::k2(float x, float h)
{
  return fun(x+(h/2));
};

float Prob4::k3(float x, float h)
{
  return fun(x+(h/2));
};

float Prob4::k4(float x, float h)
{
  return fun(x+h);
};

void Prob4::runge()
{
  float h = 0;
  float n = 1;
  float yi;
  float xi;
  for (int i = 0; i < 5; i++)
      {
        h = ancho/n;
        yi = y1;
        xi = x1;
        for (int x = 0; x < repeticiones; x++)
          {
            yi = yi + h*1/6*(k1(x) + 2 * k2(x, h) + 2 * k3(x, h) + k4(x, h));
            aproximaciones[50 + x] = yi;
            n++;
          }
      }
};

void Prob4::print()
{
  for (int x = 0; x < 50; x+=10)
  {
    for (int i = 0; i < repeticiones; i++)
    {
      cout<< "Para euler, h " << (x+10)/10  << " : " << aproximaciones[x + i] << "\n";
    }
  }
};