/*
Asignación 2: Suma de dos fracciones
Nombre: Gianna Garcia Fox
Núm. Est: 801-22-7123
*/

#include<iostream>
using namespace std;

int main(){
  // intro del programa y su funcion
  cout << "Este programa suma dos fracciones." << endl;

  //declarar las variables 
  double numerador1;
  double denominador1;
  double numerador2;
  double denominador2;

  //input de las variables para la suma
  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> numerador1;

  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> denominador1;

  cout << "Entre el numerador de la 2da fracción: ";
  cin >> numerador2;

  cout << "Entre el denominador de la 2da fracción: ";
  cin >> denominador2;

  //calculando la suma de fracciones
  double numerador_suma = (numerador1*denominador2)+(denominador1*numerador2);
  double denominador_suma = (denominador1*denominador2);

  //outputting el resulatado de la suma
  cout << "La suma es: " << numerador_suma << "/" << denominador_suma << endl;
  
  return 0;
}