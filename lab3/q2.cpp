#include<iostream>
using namespace std;

void vol(float radius)
{
    float calc=4/3*3.14*radius*radius*radius;
    cout<<"The volume of Sphere is: "<<calc<<endl;
}

void vol(float radius, float height)
{
    float calc=3.14*radius*radius*height;
    cout<<"Volume of Cylinder: "<<calc<<endl;
}

void vol(float length,float breadth,float height)
{
    float calc=length*breadth*height;
    cout<<"Volume of Cuboid: "<<calc<<endl;
}

int main()
{
    float rad,radius,heigth,l,b,h;
    cout<<"Enter radius for volume of sphere: ";
    cin>>rad;
    vol(rad);
    cout<<"Enter radius and height for volume of cylinder: ";
    cin>>radius>>heigth;
    vol(radius,heigth);
    cout<<"Enter length breadth and height for volume of cuboid: ";
    cin>>l>>b>>h;
    vol(l,b,h);
    return 0;
}