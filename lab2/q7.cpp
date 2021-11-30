#include <iostream>
#include<math.h>
using namespace std;

class coordinate
{
    double x,y;
public:
    void getdata()
    {
        cout<<"\nenter the x coordinate: ";
        cin>>x;
        cout<<"\nenter the y coordinate: ";
        cin>>y;
    }
    double result(coordinate c1,coordinate c2)
    {
        double res;
        res=sqrt((pow((c1.x-c2.x),2))+(pow((c1.y-c2.y),2)));
        return res;
    }

};
int main()
{
    coordinate a,b,c;
    double x;
    a.getdata();
    b.getdata();
    x=c.result(a,b);
    cout<<"result is: "<<x;
    return 0;
}