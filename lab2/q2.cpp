#include<iostream>
using namespace std;

class details
{
    int roll;
    char name[30];
    int marks[5];
    float tot=0,per;
    public:
        void getdata()
        {
            cout<<"Enter name : ";
            cin.getline(name,30);
            cout<<"Enter Roll: ";
            cin>>roll;
            
            for(int i=0;i<5;i++)
            {
                cout<<"Enter marks sub "<<i+1<<"- ";
                cin>>marks[i];
                tot=tot+marks[i];
            }
            per=tot/5;
            cout<<endl;
        }

        void display()
        {
            cout<<"<=== DETAILS ===>"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Total marks: "<<tot<<endl;
            cout<<"Percentage: "<<per<<" %"<<endl;
        }
};

int main()
{
    details a1;
    a1.getdata();
    a1.display();
}