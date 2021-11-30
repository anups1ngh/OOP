#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char c;
    fstream file("q4.txt",ios::in);
    file.seekg(0,ios::end);
    int len = file.tellg();
    for(int i=1;i<=len;i++)
    {
        file.seekg(-i,ios::end);
        file.get(c);
        cout<<c;
    }
    return 0;
}