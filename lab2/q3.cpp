#include <iostream>

using namespace std;
class student
{
    char name[25];
    int roll;
    int marks[5];
    int total=0;
    float perc;
public:
    void getdata()
    {
        cout<<"enter the name: ";
        cin>>name;
        cout<<"\nenter the roll number: ";
        cin>>roll;
        cout<<"\nenter marks in 5 subjects: \n";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void showdata()
    {
        cout<<"\nthe name is: "<<name;
        cout<<"\nroll is: "<<roll;
        cout<<"\nmarks in 5 subjects are:";
        for(int i=0;i<5;i++)
        {
            cout<<"\n"<<marks[i];
            total+=marks[i];
        }
        perc=total/5;
        cout<<"\ntotal marks is: "<<total;
        cout<<"\npercentage is: "<<perc;
    }
};

int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}