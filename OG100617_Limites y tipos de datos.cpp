#include <iostream>
#include <limits>

using namespace std;

int main(){
int imin = numeric_limits<int>::min(); 
int imax = numeric_limits<int>::max(); 
cout << "imin =" <<imin << endl;
cout << "imax =" << imax << "\n";
cout << "tamanio de int :" << sizeof(int) << endl;

float fmin = std:: numeric_limits<float>::min();
float fmax = std:: numeric_limits<float>::max();
cout << "fmin =" << fmin << endl; 
cout << "fmax =" << fmax << "\n";
cout << "tamanio de float:" << sizeof(float) << endl;

char cmin = numeric_limits<char> ::min();
char cmax = numeric_limits<char> :: max();
cout << "cmin =" << cmin << endl;
cout << "cmax =" << cmax << endl;
cout << "tamanio de char :" << sizeof(char) << endl;


long lmin = numeric_limits<long>::min(); 
long lmax = numeric_limits<long>::max(); 
cout << "lmin =" <<lmin << endl;
cout << "lmax =" << lmax << "\n";
cout << "tamanio de long :" << sizeof(long) << endl;



short smin = numeric_limits<short>::min(); 
short smax = numeric_limits<short>::max(); 
cout << "smin =" << smin << endl;
cout << "smax =" << smax << "\n";
cout << "tamanio de short :" << sizeof(short) << endl;


double dmin = numeric_limits<double>::min(); 
double dmax = numeric_limits<double>::max(); 
cout << "dmin =" << dmin << endl;
cout << "dmax =" << dmax << "\n";
cout << "tamanio de double :" << sizeof(double) << endl;




return 0;

}