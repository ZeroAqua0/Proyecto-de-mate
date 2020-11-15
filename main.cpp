#include <iostream>
#include "header.hpp"
using namespace std;

int main()
{
  Prob1 prob1;
  prob1.biseccion();
  prob1.MreglaFalsa();
  prob1.print();
  cout << "\n" << "Problema 3: " << "\n";
  Prob3 prob3;
  prob3.area();
  prob3.print();
  return 0;
};