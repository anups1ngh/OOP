#include <iostream>
using namespace std;
class number
{
protected:
    int n;

public:
    void setvalue(int n)
    {
        this->n = n;
    }
    virtual void show() = 0;
};
class hexadecimal : public number
{
public:
    void show()
    {
        cout << hex << n << endl;
    }
};
class octadecimal : public number
{
public:
    void show()
    {
        cout << oct << n << endl;
    }
};
class decimal : public number
{
public:
    void show()
    {
        cout << dec << n << endl;
    }
};
int main(void)
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Number :" << a << endl;
    number *p;
    hexadecimal h;
    octadecimal o;
    decimal d;
    p = &h;
    p->setvalue(a);
    cout << "Hexadecimal equivalent:\t";
    p->show();
    p = &o;
    p->setvalue(a);
    cout << "Octadecimal equivalent:\t";
    p->show();
    p = &d;
    p->setvalue(a);
    cout << "Decimal equivalent:\t";
    p->show();
}