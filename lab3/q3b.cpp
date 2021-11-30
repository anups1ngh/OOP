#include<iostream>
using namespace std;

void print()
{
    int n=80;
    char a='*';
    for(int i=0;i<n;i++)
    cout<<a<<" ";
}

void print(int n)
{
    char a='*';
    for(int i=0;i<n;i++)
    cout<<a<<" ";
}

void print(char a)
{
    int n=80;
    for(int i=0;i<n;i++)
    cout<<a<<" ";
}

void print(int n,char a)
{
    for(int i=0;i<n;i++)
    cout<<a<<" ";
}

int main()
{
    char check;
    int n;
    char a;

    here:
    cout<<"\nselect one 1 or 2 or 3 or 4 :\n1.Change n: \n2.Change char: \n3.Change n and char: \n4.No Change: \n";
    cin>>check;
    if(check=='1')
    {
        cout<<"Enter n: ";
        cin>>n;
        print(n);
    }
    else if(check=='2')
    {
        cout<<"Enter char: ";
        cin>>a;
        print(a);
    }
    else if(check=='3')
    {
        cout<<"Enter n and char: ";
        cin>>n>>a;
        print(n,a);
    }
    else if(check=='4')
    {
        cout<<"Showing default Result: \n";
        print();
    }
    else
    {
        cout<<"You entered wrong input...Try again !! "<<endl;
        goto here;
    }
    return 0;
}