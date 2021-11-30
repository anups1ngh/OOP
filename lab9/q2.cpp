// Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour. Calculate the salary of a regular employee and a par-time employee, using virtual function
#include <iostream>
#include <cstring>
using namespace std;

class employee
{
protected:
    int id;
    int salary;
    char name[20];

public:
    employee(int i, char *ch)
    {
        id = i;
        strcpy(name, ch);
    }
    employee() {}
    virtual void display()
    {
        cout << "Name: " << name << endl
             << "ID: " << id << endl;
    }
};

class regular : public employee
{
    int da, hra, bs;

public:
    regular(int i, char *ch, int b) : employee(i, ch)
    {
        da = 0.5 * b;
        hra = 0.8 * b;
        bs = b;
        salary = da + hra + bs;
    }

    regular() {}
    void display()
    {
        cout << "Name: " << name << endl
             << "ID: " << id << endl
             << "Regular Salary: " << salary << endl;
    }
};

class partTime : public employee
{
    int pph, noh;

public:
    partTime(int i, char *ch, int p, int n) : employee(i, ch)
    {
        pph = p;
        noh = n;
        salary = pph * noh;
    }

    partTime() {}
    void display()
    {
        cout << "Part-Time Salary: " << salary << endl;
    }
};

int main()
{
    char n[50];
    int id, noh;
    float bsal, pph;
    cout << "Enter details of employee: ";
    cout << "Name: ";
    cin.getline(n, 50);
    cout << "ID: ";
    cin >> id;
    cout << "If Regular employee:\t Enter Basic Salary: ";
    cin >> bsal;
    cout << "If PartTime employee:\t Enter Number of Hours and Pay per Hour: ";
    cin >> noh >> pph;
    employee *e;
    regular r(id, n, bsal);
    e = &r;
    e->display();
    partTime p(id, n, pph, noh);
    e = &p;
    e->display();
    return 0;
}