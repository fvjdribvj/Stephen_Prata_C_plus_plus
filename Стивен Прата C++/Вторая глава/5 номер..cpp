#include "stdafx.h";
#include <iostream>;

using namespace std;
int main() 
{
	double light_years;
	double astronomical_units;
	cout << "Enter the number of light years: ";
	cin >> light_years;
	astronomical_units = light_years * 63240;
	cout << light_years << " light years = "  << astronomical_units << " astronomical units.\n";
    return 0;
}