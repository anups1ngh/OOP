#include<iostream>
#include<fstream>
using namespace std;
class student{
    protected:
    int roll;
    char name[20];
    float cgpa;
    public:
        void getdata()
        {
            cout<<"Roll: ";
            cin>>roll;
            cout<<"Name: ";
            cin>>name;
            cout<<"CGPA: ";
            cin>>cgpa;
        }
        void show()
        {
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
};

int main()
{
    fstream file("q8.txt",ios::out | ios::in);
    file.seekp(0,ios::beg);
    student s[2];
    s[0].getdata();
    file.write((char*)&s[0],sizeof(s[0]));
    file.seekg(0,ios::beg);
    file.read((char*)&s[1],sizeof(s[1]));
    cout<<endl<<"Data in file is:\n";
    s[1].show();
    return 0;
}