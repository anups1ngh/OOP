#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
    void inputt(int r,int i)
    {
        real=r;
        img=i;
    }

    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    complex add(int a,complex c1)
    {
        complex temp;
        temp.real=a+c1.real;
        temp.img=c1.img;
        return temp;
    }

    void add(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
};


int main()
{
    complex c1,c2,c3;
    int re1,im1,re2,im2,ran;
    char c;
    here:
    cout<<"Do you want to add:\n1.two complex number\n2.one complex one interger\n";
    cin>>c;
    if(c=='1')
    {
        cout<<"1st real: ";
        cin>>re1;
        cout<<"1st img: ";
        cin>>im1;
        cout<<"2nd real: ";
        cin>>re2;
        cout<<"2nd img: ";
        cin>>im2;
        c1.inputt(re1,im1);
        c2.inputt(re2,im2);
        c3.add(c1,c2);
        c3.show();
    }
    else if(c=='2')
    {
        cout<<"Enter interger: ";
        cin>>ran;
        cout<<"Enter 1st real: ";
        cin>>re1;
        cout<<"Enter 1st img: ";
        cin>>im1;
        c1.inputt(re1,im1);
        c3=c3.add(ran,c1);
        c3.show(); 
    }
    else
    {
        cout<<endl<<"Wrong input... Try again !! "<<endl;
        goto here;
    }
    return 0;
}