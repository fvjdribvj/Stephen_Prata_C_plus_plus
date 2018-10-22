#include "stdafx.h";
#include <iostream>;

using namespace std;
int main() 
{
	int Celsiu;
	int Fahrenheit;
	cout << "Please, enter а Celsius value: ";
	cin >> Celsiu;
	Fahrenheit = Celsiu * 3.4;
	cout << Celsiu << " degrees Celsius is "  << Fahrenheit << " degrees Fahrenheit.\n";
    return 0;
}