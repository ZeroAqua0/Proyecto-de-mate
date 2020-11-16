#include "header.hpp"
#include <math.h>
#include <iostream>
using namespace std;

Prob4::Prob4 ()
{
  x1 = 0;
  y1 = 1;
  ancho = abs(x1 - y1);
  repeticiones = 10;
  aproximacionesEuler[repeticiones*5];
  //xf=10
};

float Prob4::fun (float x)
{
  return pow(x,4)+0.4*pow(x,2)-12*x;
};

void Prob4::euler()
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
            yi = yi + h*fun(xi);
            aproximacionesEuler [x] = yi;
            n++;
          }
      }
};

float Prob4::k1(float x)
{
  fun(x);
};

float Prob4::k2(float x, float h)
{
  fun(x+(h/2));
};

float Prob4::k3(float x, float h)
{
  fun(x+(h/2));
};

float Prob4::k4(float x, float h)
{
  fun(x+h);
};

void Prob4::runge ()
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
            yi = yi + h*1/6*(k1+2*k2+2*k3+k4);
            aproximacionesEuler [x] = yi;
            n++;
          }
      }
};