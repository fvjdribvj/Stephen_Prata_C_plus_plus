#include<iostream>
int main()
{   using namespace std;
    cout << "What is your first name? ";
    char fname[80] ;
    cin.getline(fname,80);
    cout << "What is your last name? ";
    char lname[80];
    cin.getline(lname,80);
    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    cout << "What is your age? ";
    int a;cin >> a;
    cout << "Name: "<< lname <<", "<< fname << endl;
    cout << "Grade: "<< (char) (grade+1)<<endl;
    cout << "Age: "<< a << endl;
    return 0;
}