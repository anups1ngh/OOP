#include<iostream>
#include<cstring>
using namespace std;

class student{
    char name[20];
    int age;
    int roll;
    public:

        void input(char *n,int a,int r)
        {
            strcpy(name,n);
            age=a;
            roll=r;
        }
        void display()
        {
            cout<<"\nName: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
};

class test:public student
{
    int marks[5];
    public:
    void input(char *n,int a,int r,int m[])
    {
        student::input(n,a,r);
        for(int i=0;i<5;i++)
        {
            marks[i]=m[i];
        }
    }
    void display()
    {
        student::display();
        cout<<"Marks:\n";
        for(int i=0;i<5;i++)
        {
            cout<<"marks "<<i+1<<": "<<marks[i]<<endl;
        }
    }
};

int main()
{
    char na[20];
    int mark[5];
    int ag;
    int ro;
    cout<<"Enter name: ";
    cin.getline(na,20);
    cout<<"Enter Roll: ";
    cin>>ro;
    cout<<"Enter Age: ";
    cin>>ag;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter marks "<<i+1<<": ";
        cin>>mark[i];
    }
    test t;
    t.input(na,ag,ro,mark);
    t.display();
}