// escriba su nombre, username en github y numero de estudiante en el header
// incluya cualquier colaboración que haga
#include<iostream>
using namespace std;

int main(){
  // intro del programa y so funcion
  cout << "Este programa suma dos fracciones." << endl;

  //declarar las variables 
  double numerador1;
  double denominador1;
  double numerador2;
  double denominador2;

  //input de las variables
  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> numerador1;

  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> denominador1;

  cout << "Entre el numerador de la 2da fracción: ";
  cin >> numerador2;

  cout << "Entre el denominador de la 2da fracción: ";
  cin >> denominador2;

  //calculando la fraccion
  double numerador_suma = (numerador1*denominador2)+(denominador1*numerador2);
  double denominador_suma = (denominador1*denominador2);

  //produciendo el resulatado 
  cout << "La suma es: " << numerador_suma << "/" << denominador_suma << endl;
  
  return 0;
}
