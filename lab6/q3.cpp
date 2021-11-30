#include<iostream>
using namespace std;

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

class test:virtual public student
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
        cout<<"Marks:\n";
        for(int i=0;i<5;i++)
        {
            cout<<"marks "<<i+1<<": "<<marks[i]<<endl;
        }
    }
};

class activity:virtual public student
{
    protected:
    int act[2];
    int co=0;
    public:
    void input(char *n,int a,int r,int ac[])
    {
        student::input(n,a,r);
        for(int i=0;i<2;i++)
        {
            act[i]=ac[i];
            co=co+act[i];
        }
    }
    void display()
    {
        student::display();
        for(int i=0;i<2;i++)
        cout<<"Activity Mark "<<i+1<<" :"<<act[i]<<endl;
    }
};

class result:public test,public activity
{
    int total=0;
    float percentage;
    char grade;
    public:
        void input(char *n,int a,int r,int m[],int ac[])
        {
            test::input(n,a,r,m);
            activity::input(n,a,r,ac);
            for(int i=0;i<5;i++)
            {
                total=total+m[i];
            }
            percentage=(total+co)/7.0;
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
            activity::display();
            test::display();
            cout<<"Total marks: "<<total+co<<endl;
            cout<<"Percentage: "<<percentage<<" %"<<endl;
            cout<<"Grade: "<<grade<<endl;
        }

};

int main()
{
    char na[20];
    int mark[5];
    int ag,ac[2];
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
    for(int i=0;i<2;i++)
    {
        cout<<"Enter activity marks "<<i+1<<" :";
        cin>>ac[i];
    }
    result r;
    r.input(na,ag,ro,mark,ac);
    r.display();
}