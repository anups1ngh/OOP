#include <iostream>
using namespace std;

class distanc
{
    int feet;
    int inch;
public:
    void getdata()
    {
        cout<<"\nenter the feet: ";
        cin>>feet;
        cout<<"\nenter the inches: ";
        cin>>inch;
    }
    void showdata()
    {
        cout<<feet<<"feet "<<inch<<"inches\n";
    }
    void add(distanc d1,distanc d2)
    {
        inch=d1.inch+d2.inch;
        feet=d1.feet+d2.feet+(inch/12);
        inch=inch%12;
    }
};
int main()
{
    distanc dis1,dis2,dis3;
    dis1.getdata();

    dis2.getdata();

    dis3.add(dis1,dis2);
    dis3.showdata();
    return 0;
}