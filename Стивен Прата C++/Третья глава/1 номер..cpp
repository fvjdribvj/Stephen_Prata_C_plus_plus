#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	float b;
	cout << "enter value in inches for variable a: ";
	cin >> a;
	b = (a / 12);
	cout << a % 12 << endl;
	cout << b << endl;
        return 0;
}