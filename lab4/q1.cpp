#include<iostream>
using namespace std;

class b;
class a
{
    int x;
    public:
    
    void input(int in){
        x=in;
    }

    void display()
{
    cout<<x<<" ";
}


    friend void swap(a &,b &);
};
class b
{
    int x;
    public:
    void input(int in)
    {
        x=in;
    }
    void display()
{
    cout<<x<<" ";
}


    friend void swap(a &,b &);
};

void swap(a &a1,b &b1)
{
    int temp;
    temp=a1.x;
    a1.x=b1.x;
    b1.x=temp;
}


int main()
{
    int in1,in2;
    a a1;
    b b1;
    cout<<"Enter your two input to swap: ";
    cin>>in1>>in2;
    a1.input(in1);
    b1.input(in2);
    cout<<"The number before swapping: "<<in1<<" "<<in2<<endl;
    swap(a1,b1);
    cout<<"Swapped number is: ";
    a1.display();
    b1.display();
    return 0;
}