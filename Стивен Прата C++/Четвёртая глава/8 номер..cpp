#include "stdafx.h"
#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
struct Pizza
{
  string Name_of_comp;
  double diam;
  double weight;
}
  void main()
{
  Pizza *pizza = new Pizza;
  cout << "Name of company" << endl;
  getline (cin, pizza->Name_of_comp);
  cout << "Diameter" << endl;
  cin >> pizza->diam;
  cout << "weight" << endl;
  cin >> pizza->weight;
  cout << "Diameter: " << pizza->diam << endl;
  cout << "Name of company: " << pizza->Name_of_comp << endl;
  cout << "weight: " << pizza->weight << endl;
}