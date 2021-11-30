// Create a class ‘shape’.Derive three classes from it :Circle,Triangle and Rectangle.Include there relevant data members and functions in all the classes.Find the area of each shape and display it
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
    void calculate(float radius)
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
    void calculate(float base,float height)
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
    void calculate(float length,float breadth)
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
    rectangle r;
    cout<<"Enter length and breadth: ";
    cin>>a>>b;
    r.calculate(a,b);
    r.display();
    Triangle t;
    cout<<"Enter base and height: ";
    cin>>a>>b;
    t.calculate(a,b);
    t.display();
    circle c;
    cout<<"Enter radius: ";
    cin>>a;
    c.calculate(a);
    c.display();
}