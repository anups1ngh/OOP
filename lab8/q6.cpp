#include<iostream>
using namespace std;
class dist
{
    float feet, inches;
    public:
    dist( )
    {
        feet=inches=0.0;
    }
    dist (float f, float i)
    {
        feet=f;
        inches=i;
    }
    dist operator > (dist d2); 
    void display()
    {
        cout<<feet<<" feet "<<inches<<" inches "<<"\n";
    }
    bool operator==(dist d1)
    {
        float t1,t2;
        t1= feet*12.0+inches;
        t2=d1.feet*12.0+d1.inches;
        return t1==t2? true:false;
    }
};

dist dist:: operator >(dist d2)
{   float t1, t2;
    t1= feet*12.0 + inches;
    t2= d2.feet*12.0 + d2.inches;
    return (t1>t2)? *this:d2;
}

int main()
{
    float f1,f2,i1,i2;
    cout<<"Feet: ";
    cin>>f1;
    cout<<"Inches: ";
    cin>>i1;
    cout<<"Feet: ";
    cin>>f2;
    cout<<"Inches: ";
    cin>>i2;
    dist d1(f1,i1), d2(f2,i2),d3; 
    d3=d1>d2;
    if(d1==d2)
    {
    cout<<"Both distance are equal \n";
    }
    else
    cout<<"Both are not equal \n"; 
    cout<<"Greater distance is : ";
    d3.display();
    return 0;
}