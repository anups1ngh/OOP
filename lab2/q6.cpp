#include<iostream>
using namespace std;

class employees
{
  int id,age;
  char name[20];
  float salary,gross_salary,DA,HRA;

  public: 
  void getdata()
  {

    cout<<"Enter ID of the Emloyee : ";
    cin>>id;

    cout<<"Enter emloyee name : ";
    cin>>name;

    cout<<"Enter employee age : ";
    cin>>age;

    cout<<"Enter basic salary : ";
    cin>>salary;

    DA=0.8*salary;
    HRA=0.1*salary;
    gross_salary=salary+DA+HRA;
  }

  void display()
  {
    cout<<"ID of the employee : "<<id<<endl;
    cout<<"Name of the employee : "<<name<<endl;
    cout<<"Age of the employee : "<<age<<endl;
    cout<<"Basic salary of the employee : "<<salary<<endl;
    cout<<"Gross Salary of the employee : "<<gross_salary<<endl;

  }
};

int main()
{
    int n;

    cout<<"\nEnter number of employees details to be enter : ";
    cin>>n;

    employees e[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details of emloyee "<<i+1<<endl;
        e[i].getdata();
    }

    for(int i=0;i<n;i++)
    {
        cout<<"\n\t\tDetails of employee "<<i+1<<endl;
        e[i].display();
    }

}