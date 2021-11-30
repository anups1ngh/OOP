#include<iostream>
#include<cstring>
using namespace std;

class student{
    char name[30];
    int roll;
    static float avg;
    float total;
    public:
    void input(char* p,int r,float a)
    {
        strcpy(name,p);
        roll=r;
        avg=avg+a;
        total=a;
    }
    friend void show(student *arr,int n);
    
};
 float student::avg;

  void show(student *arr,int n)
 {     
    cout<<"*****SHOWING DETAILS*****\n";
     for(int i=0;i<n;i++)
     {
         cout<<endl;
         cout<<"Details of student "<<i+1<<" : \n";
         cout<<"Name "<<" : "<<arr[i].name<<endl;
         cout<<"Roll "<<" : "<<arr[i].roll<<endl;
         cout<<"Marks "<<" : "<<arr[i].total<<endl;

     }
     
     student::avg=(student::avg)/n;
     cout<<"Average= "<<student::avg<<endl;
 }

int main()
{
    int n;
    cout<<"Enter the number of student: ";
    cin>>n;
        char a[30];
        int roll;
        float av;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter name: ";
        cin.ignore();
        cin.getline(a,30);
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>av;
        cout<<endl;
        s[i].input(a,roll,av);
    }
    show(s,n);

    return 0;
}