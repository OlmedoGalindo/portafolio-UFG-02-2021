#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <stdlib.h>


using namespace std; 

int main() { 

float a,b,c,d,e;
cout << "Autor: Jonathan Fabricio Olmedo Galindo \n";
cout << "¿Determina que numero es mayor? \n";
cout << "Ingresa el primer numero \n";
cin >> a;
cout << "Ingresa el segundo numero \n";
cin >> b;
cout << "Ingresa el tercer numero \n";
cin >> c;
cout << "Ingresa el cuarto numero \n";
cin >> d;
cout << "Ingresa el quinto numero \n";
cin >> e;


if (a >= b && a >= c && a >= d && a >= e){
	cout << a << " es el mayor  \n";
} else if (b >= a && b >= c && b >= d && b >= e){
		cout << b << " es el mayor  \n";
} else if (c >= a && c >= b && c >= d && c >= e){
		cout << c << " es el mayor  \n";
}  else if (d >= a && d >= b && d >= c && d >= e){
		cout << d << " es el mayor  \n"; 
	
}
else if (e >= a && e >= b && e >= c && e >= d){
		cout << e << " es el mayor  \n"; 
	
} 




return 0;
}



