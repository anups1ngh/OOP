#include<iostream>
using namespace std;
 
class pointt{
    int x;
    int y;
    int z;
    public:
        pointt(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void operator-()
        {
            x=-x;
            y=-y;
            z=-z;
            cout<<"\nx: "<<x<<"\ny: "<<y<<"\nz: "<<z<<endl;
        }
};

int main()
{
    int m,n,o;
    cout<<"X: ";
    cin>>m;
    cout<<"Y: ";
    cin>>n;
    cout<<"Z: ";
    cin>>o;
    pointt p1(m,n,o);
    -p1;
    return 0;
}