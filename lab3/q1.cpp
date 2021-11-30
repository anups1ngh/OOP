#include<iostream>
using namespace std;

void area(float rad)
{
    float calc=3.14*rad*rad;
    cout<<"area of circle is: "<<calc<<endl;
}

void area(int length, int breadth)
{
    float calc=length*breadth;
    cout<<"Area of Rectangle: "<<calc<<endl;
}

void area(float base,float heigth)
{
    float calc=0.5*base*heigth;
    cout<<"Area of triangle: "<<calc<<endl;
}

int main()
{
    float rad,base,height;
    int length,breadth;
    cout<<"Enter radius for area of circle: ";
    cin>>rad;
    area(rad);
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    area(length,breadth);
    cout<<"Enter base and height of triangle: ";
    cin>>base>>height;
    area(base,height);
    return 0;
}