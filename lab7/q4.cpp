#include<iostream>
using namespace std;

class shape
{
    protected:
    float area;
    public:
    void display()
    {
        cout<<area<<" m^2"<<endl;
    }
};
class circle:public shape
{
    float cal;
    public:
    circle(float radius)
    {
        cal=3.14*radius*radius;
    }
    void display()
    {
        area=cal;
        cout<<"Area of Circle: ";
        shape::display();
    }
};
class Triangle:public shape
{
    float cal;
    public:
    Triangle(float base,float height)
    {
        cal=0.5*base*height;
    }
    void display()
    {
        area=cal;
        cout<<"Area of Triangle: ";
        shape::display();
    }
};

class rectangle:public shape
{
    float cal;
    public:
    rectangle(float length,float breadth)
    {
        cal=length*breadth;
    }
    void display()
    {
        area=cal;
        cout<<"Area of rectangle: ";
        shape::display();
    }
};

int main()
{
    float a,b;
    cout<<"Enter length and breadth: ";
    cin>>a>>b;
    rectangle r(a,b);
    r.display();
    cout<<"Enter base and height: ";
    cin>>a>>b;
    Triangle t(a,b);
    t.display();
    cout<<"Enter radius: ";
    cin>>a;
    circle c(a);
    c.display();
}