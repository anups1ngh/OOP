#include <iostream>
using namespace std;

class complexn
{
    float real;
    float img;
public:
    void getdata()
    {
        cout<<"\nenter the real part: ";
        cin>>real;
        cout<<"\nenter the imaginary part: ";
        cin>>img;
    }
    void showdata()
    {
        cout<<"\nthe complex number is: ";
        cout<<real<<"+i"<<img;
    }
};
int main()
{

    complexn com[10];
    for(int i=0;i<10;i++)
    {
        com[i].getdata();
        com[i].showdata();
    }
    return 0;
}