#include<iostream>
using namespace std;

// by value
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"New swapped numbers are: "<<a<<" and "<<b<<endl;
    cout<<":This is call by value answer:"<<endl<<endl;
}

// by address
void swap(int *a,int *b)
{
    int *temp=a;
    a=b;
    b=temp;
    cout<<"New swapped numbers are: "<<*a<<" and "<<*b<<endl;
    cout<<":This is call by address answer:"<<endl<<endl;
}

// by reference
void swapp(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"New swapped numbers are: "<<x<<" and "<<y<<endl;
    cout<<":This is call by reference answer:"<<endl<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two integers to swap: ";
    cin>>a>>b;
    cout<<endl;
    // by value
    swap(a,b);
    // by address
    swap(&a,&b);
    // by reference
    swapp(a,b);
}