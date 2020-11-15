#include "header.hpp"
#include <math.h>

Prob1::Prob1()
{
  contadorb = 0;
  contadorm = 0;
  error = 0.1;
  x1 = 0;
  x2 = 2;
  raizm = 0;
  raizb = 0;
};

bool Prob1::comprobarRaiz()
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
  if (comprobarRaiz())
  {
    float xr1 = (x1+x2)/2;
    if (fun(xr1) < 0)
    {
      x1 = xr1;
    }
    else
    {
      x2 = xr1;
    }
    float xr2 = (x1+x2)/2;
    raizb = xr1;
    if (abs(xr1-xr2)< error)
    {
      biseccion();
    }
    contadorb ++;
  }
};

void Prob1::MreglaFalsa()
{
  if (comprobarRaiz());
  {
    float xr1 = x1 - ((fun(x2)*(x1-x2))/(fun(x2)-fun(x1)));
    if (fun(xr1) < 0)
    {
      x1 = xr1;
    }
    else
    {
      x2 = xr1;
    }
    float xr2 = x1 - ((fun(x2)*(x1-x2))/(fun(x2)-fun(x1)));
    raizm = xr1;
    if (abs(xr1-xr2)< error)
    {
      MreglaFalsa();
    }
    contadorm ++;
  }
};

void Prob1::print()
{
  cout<<"Raiz con biseccion: "<< raizb << "/n";
  cout<<"numero de iteraciones de biseccion: "<< contadorb << "/n";
  cout<<"Raiz con regla falsa: "<< raizm << "/n";
  cout<<"numero de iteraciones de regla falsa: "<< contadorm << "/n";
};