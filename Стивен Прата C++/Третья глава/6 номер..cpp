#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float l, km, gl, mil;
	float result;
	cout << " enter how much km is passed: ";
	cin >> km;
	cout << " enter how many liters of gas used: ";
	cin >> l;
	result = (km / 0.6214) / (l / 0.22);
	cout << result << " MPG" << endl;
    return 0;
}