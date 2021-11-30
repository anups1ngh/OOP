#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char i,o,data[256];
    fstream file("q6.txt",ios::in | ios::out);
    if(!file)
    {
        cout<<"File Not found\n";
        exit(1);
    }
    cout<<"Before Updating\n";

    while(!file.eof())
    {
        file.getline(data,256);
        cout<<data<<endl;
    }
    file.clear();
    file.seekg(0,ios::beg);

    while(file.eof() == 0)
    {
        file.get(i);
        // we can use isupper() also
        if(i>= 'A' && i<='Z')
        {
            file.seekp(-1,ios::cur);
            o= i+32;
            file.put(o);
        }
        // we can use islower() also
        else if(islower(i))
        {
            file.seekp(-1,ios::cur);
            o=i-32;
            file.put(o);
        }
    }
    file.clear();
    file.seekg(0,ios::beg);

    cout<<"After Updating\n";

    while(!file.eof())
    {
        file.getline(data,256);
        cout<<data<<endl;
    }
    file.clear();

    file.close();
    return 0;
}