// Wap to overload the operator '==' to compare two objects of complex class and display whether they are equal or not .
#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
        complex()
        {
            cout<<"Enter real value: ";
            cin>>real;
            cout<<"Enter imaginary value: ";
            cin>>img;
        }
        bool operator ==(complex ob)
        {
            if(ob.real==real && ob.img==img)
                return true;
            else
                return false;
        }
        void display()
        {
            cout<<"\n";
            cout<<real<<" + "<<img<<"i "<<endl;
        }
        ~complex()
        {
            cout<<"\nComplex destructor invoked";
        }
        
        // complex operator+(complex c1)
        // {
        //     real=real+c1.real;
        //     img=img+c1.img;
        //     return *this;
        // }
};

int main()
{
    complex c1,c2;
    if(c1==c2)
    {
        cout<<"\nYes they are equal \n";
    }    
    else
    cout<<"\nThey are not equal \n";
    // c1+c2;
    // c1.display();
    // if(c1==c2)
    // {
    //     cout<<"\nYes they are equal \n";
    // }    
    // else
    // cout<<"\nThey are not equal \n";
    return 0;
}