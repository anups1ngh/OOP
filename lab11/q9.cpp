#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char data[256];
    fstream file("q9.txt",ios::out | ios::in);
    if(!file)
    {
        cout<<"File not found\n";
        exit(0);
    }
    file<<"Hello ";
    file<<"this is a demo data";
    file<<endl<<"yeah";
    file.seekg(0,ios::beg);
    while(file.eof() == 0)
    {
        file>>data;
        cout<<data<<" ";
    }
    return 0;
}