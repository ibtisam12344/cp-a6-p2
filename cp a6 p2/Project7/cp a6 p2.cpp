#include<iostream>
#include<math.h>
using namespace std;
double power(double n,int p=2)
{
	return pow(n,p);
}
int main()
{
int exponent,base;
char a;
cout << "Enter Base" << endl;
cin >> base;
cout << "Enter exponent(default is 2), If you want to skip entering the exponent."
<<"Type 's' for skip or Type 't' for type" << endl;
cin >>a;
if (a == 't' || a== 'T')
{
	cin >> exponent;
	cout << base << " raised to the power " << exponent << " is: " << power(base, exponent) << endl;
}
else
{
	cout << base << " raised to the power " << "2 " << " is: " << power(base) << endl;
}
	return 0;
}