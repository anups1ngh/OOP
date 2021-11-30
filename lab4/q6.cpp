// Write a program to find out the greatest between two numbers defined in two different classes by using friend function

// i'm using one friend fuction as a friend for another class
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void store(int in)
    {
        a=in;
    }
    void compare(B b);
};
class B
{
    int a;
    public:
    void store(int in)
    {
        a=in;
    }
    friend void A::compare(B b);
};

void A::compare(B b)
{
    if(a>b.a)
    cout<<"Greatest number is : "<<a<<endl;
    else if(a<b.a)
    cout<<"Greatest number is : "<<b.a<<endl;
}

int main()
{
    int in1,in2;
    cout<<"Enter two inputs to check greatest among them: \n1st Input: ";
    cin>>in1;
    cout<<"2nd Input: ";
    cin>>in2;
    A a;
    B b;
    a.store(in1);
    b.store(in2);
    a.compare(b);
    return 0;
}