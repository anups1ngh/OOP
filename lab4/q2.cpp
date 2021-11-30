#include<iostream>
using namespace std;

class centi;
class feet
{
    float ft;
    float in;
    float final;
    public:
        void store(float a,float b)
        {
            ft=a;
            in=b;
        }

        void calcfeet()
        {
            final=ft*30.48+in*2.54;
        }


    friend void compare(feet,centi);
};

class centi
{
    float cen;
    float me;
    float final;
    public: 
    void store(float a,float b)
    {
        cen=a;
        me=b;
    }

    void calccent()
    {
        final=cen+me*100;
    }

    friend void compare(feet,centi);
};



void compare(feet f1,centi c1)
{
    if(f1.final>c1.final)
    {
        cout<<f1.ft<<" feet and "<<f1.in<<" inch is greater";
    }
    else if(f1.final<c1.final)
    {
        cout<<c1.cen<<" cm and "<<c1.me<<" m is greater";
    }
}

int main()
{
    feet f1;
    centi c1;
    float ft,cen,me,in;
    cout<<"Enter distance in feet and inch: ";
    cin>>ft>>in;
    f1.store(ft,in);
    cout<<"Enter distance in centimeter and meter: ";
    cin>>cen>>me;
    c1.store(cen,me);
    f1.calcfeet();
    c1.calccent();
    compare(f1,c1);
}