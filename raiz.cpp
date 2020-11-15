#include "header.hpp"
#include <iostream> 
#include <math.h>
using namespace std;

Prob1::Prob1(float error, float x1, float x2)
{
  contadorb = 0;
  contadorm = 0; 
  error = 0.1; 
  x1 = 0;
  x2 = 2;
  raizm = 0;
  raizb = 0;
};

Prob1::comprobarRaiz()
{
  if (fun(x1)*fun(x2) < 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

Prob1::fun(float x)
{
  return pow(x,6)-pow(x,4)-pow(x,3)-1;
};

Prob1::biseccion()
{
  if (comprobarRaiz());
  {
    float xr1 = (x1+x2)/2;
    if (fun(xr1) < 0)
    {
      x1 = xr1;
    };
    else
    {
      x2 = xr1;
    };
    float xr2 = (x1+x2)/2;
    raizb = xr1;
    if (abs(xr1-xr2)< error)
    {
      biseccion();
    };
    contadorb ++;
  }
};

Prob1::Mreglafalsa()
{
  if (comprobarRaiz());
  {
    float xr1 = x1 - ((fun(x2)*(x1-x2))/(fun(x2)-fun(x1)));
    if (fun(xr1) < 0)
    {
      x1 = xr1;
    };
    else
    {
      x2 = xr1;
    };
    float xr2 = x1 - ((fun(x2)*(x1-x2))/(fun(x2)-fun(x1)));
    raizm = xr1;
    if (abs(xr1-xr2)< error)
    {
      Mreglafalsa();
    };
    contadorm ++;
  }
};

Prob1::print()
{
  cout<<"numero de iteraciones de biseccion: "<< counterb << "/n";
  cout<<"numero de iteraciones de regla falsa: "<< counterm << "/n";
};