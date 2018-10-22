#include <iostream>
#include <cstdio>
#include <cstring>
int main()
{
    char FirstName[128];
    char LastName[128];
    char Rezult[256];
    std::cout << "Enter your first name: ";
    std::cin >> FirstName;
    std::cout << "Enter your last name: ";
    std::cin >> LastName;
    strcpy(Rezult, LastName);
    strcat(Rezult, ", ");
    strcat(Rezult, FirstName);
    std::cout << "Here's the information in a single string: " << Rezult;
    std::cin.get();std::cin.get();
    return 0;
}