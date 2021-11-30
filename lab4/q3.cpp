#include<iostream>
using namespace std;

class run
{
    int count;
    static int in;
    static int out;
    public:
    void calculate(int b)
    {
        ++in;
        count=b;
        
    }

    void show()
    {
        ++out;
        cout<<"current value of input is: "<<count<<endl;
    }

    void runcount()
    {
        
        cout<<"total input run was: "<<in<<" times"<<endl;
        cout<<"total output run was: "<<out<<" times"<<endl;
    }

};
int run::in;
int run::out;

int main()
{
    run r,r1,r2;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    r.calculate(n);
    r1.calculate(100);
    r2.calculate(78);
    r.show();
    r1.show();
    r2.show();
    r.runcount();
    r1.runcount();
    r2.runcount();
    return 0;
}