#include<iostream>
using namespace std;

int inc(int n)
{
    return ++n;
}

int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<"Incremented number= "<<inc(n)<<endl;
    return 0;
}