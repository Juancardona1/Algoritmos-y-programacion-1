/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int
main ()
{
  float tiempo, distancia, velocidad;
  cout << "Ingrese la distancia en metros: ";
  cin >> distancia;
  cout << "Ingrese el tiempo en segundos: ";
  cin >> tiempo;
  velocidad = (distancia / tiempo);
  cout << "La particula tiene una velocidad de: " + to_string (velocidad) +
    " metros/seg";

  return 0;
}
