#include<iostream>
#include<cstring>
using namespace std;

class student{
    char name[20];
    int age;
    int roll;
    public:
        student(){cout<<"student Constructor executed\n";};
        student(char *n,int a,int r)
        {
            cout<<"student Constructor executed\n";
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
    test(){cout<<"test Constructor executed\n";};
    test(char *n,int a,int r,int m[]):student(n,a,r)
    {
        cout<<"test Constructor executed\n";
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
    activity(){cout<<"activity Constructor executed\n";};
    activity(char *n,int a,int r,int ac[]):student(n,a,r)
    {
        for(int i=0;i<2;i++)
        {
            act[i]=ac[i];
            co=co+act[i];
        }
        cout<<"activity Constructor executed\n";
    }
    void display()
    {
        student::display();
        for(int i=0;i<2;i++)
        cout<<"Activity Mark "<<i+1<<" :"<<act[i]<<endl;
    }
};

class result:virtual public student,public test,public activity
{
    int total=0;
    float percentage;
    char grade;
    public:
        result(){cout<<"result Constructor executed\n";};
        result(char *n,int a,int r,int m[],int ac[]):student(n,a,r),test(n,a,r,m),activity(n,a,r,ac)
        {
            cout<<"result Constructor executed\n";
            for(int i=0;i<5;i++)
            {
                total=total+m[i];
            }
            total=total+co;
            percentage=total/7.0;
            if(percentage>=90)
            grade='O';
            else if(percentage>=80)
            grade='E';
            else if(percentage>=70)
            grade='A';
            else if(percentage>=60)
            grade='B';
            else if(percentage>=50)
            grade='C';
            else if(percentage>=40)
            grade='D';
            else
            grade='F';
        }
        void display()
        {
            activity::display();
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
    result r(na,ag,ro,mark,ac);    
    r.display();
}