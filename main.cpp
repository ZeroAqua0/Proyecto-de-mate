#include <iostream>
#include "header.hpp"
using namespace std;

int main()
{
  cout << "\n" << "Problema 1: " << "\n";
  Prob1 prob1;
  prob1.biseccion();
  prob1.MreglaFalsa();
  prob1.print();
  cout << "\n" << "Problema 3: " << "\n";
  Prob3 prob3;
  prob3.area();
  prob3.print();
  cout << "\n" << "Problema 4: " << "\n";
  Prob4 prob4;
  prob4.euler();
  //prob4.runge();
  prob4.print();
  return 0;
};