#include "stdafx.h"
#include <iostream> 
#include <string>
#include <cstring>

using namespace std;
struct Pizza
{
  string Name_of_Comp;
  double diam;
  double weight;
}

  void main()
{
  Pizza pizza;
  cout << "Name of company" << endl;
  getline (cin, pizza.Name_of_comp);
  cout << "Diameter" << endl;
  cin >> pizza.diam;
  cout << "weight" << endl;
  cin >> pizza.weight;
  cout << "Name of company: " << pizza.Name_of_comp << endl;
  cout << "Diameter: " << pizza.diam << endl;
  cout << "weight: " << pizza.weight << endl;
}