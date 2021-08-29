#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdlib.h>

using namespace std ;
float numero,contador=0,suma, promedio;
int main ()
{
cout << "Autor: Jonathan Fabricio Olmedo Galindo \n";
cout << "Calcula un promedio de N numeros. PRESIONA 0 PARA DEJAR DE AGREGAR NUMEROS  \n";
cout << "ingrese el numero: " ;
cin >> numero;
while (numero != 0)

{
suma= suma + numero; // acumulador
contador=contador+1 ; // contador
cout << "ingrese el numero: " ;
cin >> numero;
}

promedio= suma / contador;
cout<< "n promedio es: "<< promedio <<"n ";
system ("pause");
return 0;
}

