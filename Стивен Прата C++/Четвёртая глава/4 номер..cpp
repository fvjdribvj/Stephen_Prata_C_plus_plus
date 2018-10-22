#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    const int biograthy = 30;
    char fname[biograthy];
    char lname[biograthy];
    char flname[biograthy];
 
    cout << "Enter your first name:";
    cin.getline(fname, biograthy);
    cout << "Enter your last name:";
    cin.getline(lname, biograthy);
 
    strcpy(flname, fname);
    strcat(flname, ", ");
    strcat(flname, lname);
 
    cout << "Here's the information in a single: " << flname << endl;
 
    system("pause");
 
    return 0;
}