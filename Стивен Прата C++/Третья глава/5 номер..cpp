#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
        double km, l;
	double result;
	cout << " enter how much km is passed: ";
	cin >> km;
	cout << " enter how many liters of gas used: ";
	cin >> l;
	result = km / l;
	cout << result << "  liters spent on 1 km " << endl;
        return 0;
}