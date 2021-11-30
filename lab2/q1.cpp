#include<iostream>
using namespace std;

int main()
{
    char name[30];
    cout<<"enter name: ";
    cin.getline(name,30);
    // getline used to get whole line as an input
    cout<<"Hello "<<name;
    return 0;
}