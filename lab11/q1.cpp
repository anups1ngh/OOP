#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char c;
    fstream file("q1.txt",ios::in);
    if(!file)
    {
        cout<<"Error opening file\n";
        exit(0);
    }
    while(file.eof() ==0)
    {
        file.get(c);
        cout<<c<<" ";
    }
    file.close();
    return 0;
}