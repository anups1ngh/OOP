// Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and‘Part-Time’.The ‘Regular’ class stores DA,HRA and basic salary. The‘Part-Time’ class stores the number of hours and pay per hour.Calculate the salary of a regular employee and a part time employee.
#include<iostream>
#include<cstring>
using namespace std;

class employee
{
    protected:
    char name[20];
    int id;
    int salary;
    public:
        void getdata(char *n,int i,int sal)
        {
            strcpy(name,n);
            id=i;
            salary=sal;
        }
        void display()
        {
            cout<<"\nName: "<<name<<endl;
            cout<<"Id: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
class regular:virtual public employee
{
    float da,hra,gross_salary;
    public:
    void getdata(char *n,int i,int sal)
    {
        employee::getdata(n,i,sal);
        
        da=0.2*salary;
        hra=0.1*salary;
        gross_salary=salary+da+hra;
    }
    void display()
    {
        employee::display();
        cout<<"Basic Salary: "<<salary<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"Gross Salary: "<<gross_salary<<endl;
    }
};
class part_time:virtual public employee
{
    float pph=6500;
    int hours;
    public:
        void getdata(int h)
        {
            hours=h;
        }
        void display()
        {

            pph=pph*hours;
            cout<<"Pay per Hour payment: "<<pph<<endl;
        }
};
int main()
{
    char na[20];
    int i,sal,hou;
    cout<<"Enter name: ";
    cin.getline(na,20);
    cout<<"Enter id: ";
    cin>>i;
    cout<<"Enter salary: ";
    cin>>sal;
    cout<<"Enter part-time hour: ";
    cin>>hou;
    regular r;
    r.getdata(na,i,sal);
    r.display();
    part_time p;
    p.getdata(hou);
    p.display();
    return 0;
}