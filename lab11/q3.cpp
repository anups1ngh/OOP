#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char data[20];
    fstream file("q3.txt",ios::out);
    if(!file)
    {
        cout<<"Error opening file\n";
        exit(0);
    }
    for(int i=1;i<=10;i++)
    {
        cout<<"Enter a word: ";
        cin>>data;
        file<<data<<" ";
    }
    file.clear();
    file.close();
    fstream file_re("q3.txt",ios::in);
    for(int i=1;i<=10;i++)
    {
        file_re>>data;
        cout<<data<<"\t";
    }
    file_re.clear();
    file_re.close();
    return 0;
}