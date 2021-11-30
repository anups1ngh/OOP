// Create a class which stores time in hh:mm format. Include all the constructors. The parameterized constructor should initialize the minute value to zero, if it is not provided.

#include<iostream>
using namespace std;

class time
{
    int hour;
    int minute;
    public:
        time()
        {
            hour=03;
            minute=00;
            cout<<"Default time was: "<<hour<<" h : "<<minute<<" m\n";
        }
        time(int h,int m=0)
        {
            hour=h;
            minute=m;
        }
        void calculate()
        {
            if(minute>60)
            {
            hour=hour+1;
            minute=minute%60;
            }
        }
        void display()
        {
            cout<<"Time is:\n"<<hour<<" hr : "<<minute<<" m"<<endl;
        }
};

int main()
{
    int h,m;
    cout<<"Enter Hour: ";
    cin>>h;
    cout<<"Enter Minute: ";
    cin>>m;
    time t(h,m),t2;
    t.calculate();
    t.display();
}