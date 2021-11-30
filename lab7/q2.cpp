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
            cout<<"Student constructor is called\n";
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
    test(char *n,int a,int r,int m[]):student(n,a,r)
    {
        cout<<"test constructor is called\n";
        student(n,a,r);
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

class result:public test
{
    int total=0;
    float percentage;
    char grade;
    public:
        result(char *n,int a,int r,int m[]):test(n,a,r,m)
        {
            
            for(int i=0;i<5;i++)
            {
                total=total+m[i];
            }
            percentage=total/5.0;
            if(percentage>=90)
            grade='O';
            else if(percentage>=80)
            grade='E';
            else if(percentage>=70)
            grade='A';
            else if(percentage>=60)
            grade='B';
            else
            grade='F';
        }
        void display()
        {
            test::display();
            cout<<"Total marks: "<<total<<endl;
            cout<<"Percentage: "<<percentage<<" %"<<endl;
            cout<<"Grade: "<<grade<<endl;
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
    result r(na,ag,ro,mark);
    r.display();
}