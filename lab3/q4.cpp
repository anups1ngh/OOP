#include<iostream>
using namespace std;

int squ(int n)
{
    return n*n;
}

int cu(int n)
{
    return n*n*n;
}

int main()
{
    char check;
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<"Square= "<<squ(n)<<endl;
    cout<<"Cube= "<<cu(n)<<endl;
    return 0;
}