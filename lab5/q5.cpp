// WAP to demonstrate the order of call of constructors and destructors for a class

#include<iostream>
using namespace std;

class A {
    static int c;
    int a;
    public:
    A()
    {

        cout << "Object no created is: "<<++c<<endl;
    }
    A(int i)
    {
        a=i;
        cout<<"Object no created is: "<<++c<<endl;
    }
    A(const A &ob)
    {
        a=ob.a;
        cout<<"Object no created is: "<<++c<<endl;
    }
    ~A()
    {
        cout << "Object no destroyed is: "<<c--<<endl;
    }
};

int A::c;

int main()
{
    A o1,o2(2),o3(o2);
    return 0;
}