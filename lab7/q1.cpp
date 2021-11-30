#include<iostream>
#include<cstring>
using namespace std;

class student{
    char name[20];
    int age;
    int roll;
    public:
        
        student(char *n,int a,int r)
        {
            cout<<"\nStudent constructor is invoked\n";
            strcpy(name,n);
            age=a;
            roll=r;
        }
        student(){cout<<"Student constructor is called\n";};
        void display()
        {
            cout<<"\nName: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
        ~student(){cout<<"Destructor invoked\n";}
};

class test:public student
{
    int marks[5];
    public:
    test(char *n,int a,int r,int m[]):student(n,a,r)
    {
        cout<<"\ntest constructor is invoked\n";
        for(int i=0;i<5;i++)
        {
            marks[i]=m[i];
        }
    }

    ~test(){cout<<"Destructor invoked\n";}

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
    test t(na,ag,ro,mark);
    t.display();
}