#include <iostream>;
#include <string>;
using namespace std;
 
 
struct cadyBar {
    string name;
    float weight;
    int colories;
}
void showCady (cadyBar &str);
 
cadyBar &cake (cadyBar &str, char *name="Millennium Munch", double a = 2.3, int b = 350);
int main () {
    cadyBar ca;
    cake(ca, "Rosaaa", 1.85);
    showCady(ca);
    return 0;
}
cadyBar &cake (cadyBar &str, char *pc, double sw, int col) 
{
    //cout << pc << endl;
    str.name = pc;
    str.weight = sw;
    str.colories = col;
    return str;
}
void showCady (cadyBar &str) 
{
    cout << str.name << endl;
    cout << str.weight << endl;
    cout << str.colories << endl;   
}