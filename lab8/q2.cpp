#include<iostream>
using namespace std;
 
class arr{
    static int cnt;
    int a[10];
    public:
        friend istream & operator >> (istream &, arr &arrr);
        friend ostream & operator << (ostream &, const arr &arrr);
};
istream & operator >> (istream &, arr &arrr)
{
    cout<<"Enter 10 elements in array: ";
    for(int i=0;i<10;i++)
    cin>>arrr.a[i];
    return cin;
}
ostream & operator << (ostream &,const arr &arrr){
    cout<<"\nElements in the array are: ";
    for(int i=0;i<10;i++)
    cout<<arrr.a[i]<<"\t";
    return cout;
}

int arr::cnt;
int main()
{
   arr a1,a2;
   cin>>a1>>a2;
   cout<<a1<<a2;
   return 0;
}