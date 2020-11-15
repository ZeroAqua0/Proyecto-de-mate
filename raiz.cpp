#include "header.hpp"
#include <math.h>
#include <iostream>
using namespace std;

Prob1::Prob1()
{
  contadorb = 0;
  contadorm = 0;
  error = 0.01;
  x1b = 0;
  x2b = 2;
  x1m = 0;
  x2m = 2;
  raizb = 0;
  raizm = 0;
};

bool Prob1::comprobarRaiz(float x1, float x2)
{
  if (fun(x1)*fun(x2) < 0)
  {
    return true;
  }
  else
  {
    return false;
  }
};

float Prob1::fun(float x)
{
  return pow(x,6)-pow(x,4)-pow(x,3)-1;
};

void Prob1::biseccion()
{
  if (comprobarRaiz(x1b, x2b))
  {
    float xr1 = (x1b+x2b)/2;
    if (fun(xr1) < 0)
    {
      x1b = xr1;
    }
    else
    {
      x2b = xr1;
    }
    float xr2 = (x1b+x2b)/2;
    raizb = xr1;
    if (abs(xr1-xr2) > error)
    {
      biseccion();
    }
    contadorb ++;
  }
};

void Prob1::MreglaFalsa()
{
  if (comprobarRaiz(x1m, x2m));
  {
    float xr1 = x1m - ((fun(x2m)*(x1m-x2m))/(fun(x2m)-fun(x1m)));
    if (fun(xr1) < 0)
    {
      x1m = xr1;
    }
    else
    {
      x2m = xr1;
    }
    float xr2 = x1m - ((fun(x2m)*(x1m-x2m))/(fun(x2m)-fun(x1m)));
    raizm = xr1;
    if (abs(xr1-xr2) > error)
    {
      MreglaFalsa();
    }
    contadorm ++;
  }
};

void Prob1::print()
{
  cout<<"Raiz con biseccion: "<< raizb << "\n";
  cout<<"Numero de iteraciones de biseccion: "<< contadorb << "\n";
  cout<<"Raiz con regla falsa: "<< raizm << "\n";
  cout<<"Numero de iteraciones de regla falsa: "<< contadorm << "\n";
};