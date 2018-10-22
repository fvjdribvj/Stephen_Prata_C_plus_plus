#include <iostream>
using namespace std;
 
int main()
{   
    int feets, duyms, funt, metrs, kilogramm;
    cout << "Enter height in feet and inches: ";
    cin >> feets;
    cin >> duyms;
    cout << "Enter body weight in funt: ";
    cin >> funt;
    const int duyms = 12;
    const double metrs = 0.0254;
    const double kilogramm = 2.2;
    int meters = duyms * 0.0254;
    int kilogramm = funt / kilogramm;
    double BMI = kilogramm / (metrs * metrs);
    cout << "Your BMI is: " << BMI << endl;
    return 0;
}