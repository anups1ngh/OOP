#include<iostream>
using namespace std;

class complex
{
    int real;
    int img; 
    public:
    
    complex(){};
    complex(int r,int im)
    {
        real=r;
        img=im;
    }
    complex(const complex & c1)
    {
        real=c1.real;
        img=c1.img;
    }
    ~complex()
    {
        cout<<"Destructor invoked\n";
    }
    void display()
    {
        cout<<"\n"<<real<<" + "<<img<<"i"<<endl;
    }
};


int main()
{
    int r,i;
    cout<<"Enter real and imaginary number: ";
    cin>>r>>i;
    complex c1(r,i);
    complex c2(c1);
    c1.display();
    return 0;
}