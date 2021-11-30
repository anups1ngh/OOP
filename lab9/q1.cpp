#include <iostream>
#include <cmath>
using namespace std;
class shape
{
protected:
    float area;

public:
    virtual void calc() = 0;
    virtual void display()
    {
        cout << "Area : " << area << endl;
    }
};
class circle : public shape
{
private:
    float radius;

public:
    circle(float r)
    {
        radius = r;
    }
    ~circle(){};
    void calc()
    {
        area = 3.14 * radius * radius;
    }
    void display()
    {
        cout << "Area of Circle : " << area << endl;
    }
};
class rectangle : public shape
{
private:
    float length, breadth;

public:
    rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    ~rectangle(){};
    void calc()
    {
        area = length * breadth;
    }
    void display()
    {
        cout << "Area of Rectangle : " << area << endl;
    }
};
class triangle : public shape
{
private:
    float side1, side2, side3;
    bool check()
    {
        if (side1 + side2 > side3 || side2 + side3 > side1 || side1 + side3 > side2)
            return 1;
        else
        {
            cout << "The sides do not form a triangle." << endl;
            return 0;
        }
    }

public:
    // using heron's formula
    triangle(float s1, float s2, float s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    ~triangle(){};
    void calc()
    {
        if (check() == 1)
        {
            float s;
            s = (side1 + side2 + side3) / 2.0;
            area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
    }
    void display()
    {
        cout << "Area of Triangle : " << area << endl;
    }
};
int main()
{
    float r1, l1, b1, ss1, ss2, ss3;
    cout << "Shape" << endl;
    cout << "For Circle:\t Enter Radius: ";
    cin >> r1;
    cout << "For Rectangle:\t Enter Length and Breadth: ";
    cin >> l1 >> b1;
    cout << "For Triangle:\t Enter the 3 Sides: ";
    cin >> ss1 >> ss2 >> ss3;
    circle C(r1);
    rectangle R(l1, b1);
    triangle T(ss1, ss2, ss3);
    shape *S[] = {&C, &R, &T};
    cout << "Area of Shape" << endl;
    S[0]->calc();
    S[0]->display();
    S[1]->calc();
    S[1]->display();
    S[2]->calc();
    S[2]->display();
    return 0;
}