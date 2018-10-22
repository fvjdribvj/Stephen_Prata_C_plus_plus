#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << " enter the latitude value in degrees for the variable a: ";
	cin >> a;
	cout << "enter the latitude value in minutes for the variable b: ";
	cin >> b;
	cout << " enter the latitude value in seconds for the variable c: ";
	cin >> c;
	float h = (a + b / 60 + c / 3600);
	cout << h << endl;
        return 0;
}
