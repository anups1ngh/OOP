#include<iostream>
using namespace std;

void sum(int a,int b=10,int c=20)
{
    int sum=a+b+c;
    cout<<"Sum => "<<a<<" + "<<b<<" + "<<c<<" = "<<sum<<endl;
}

int main()
{
    int a1,a2,a3;
    char ch;

    here:
    cout<<"How many numbers you want to take: \n1.One\n2.Two\n3.Three\n";
    cin>>ch;
    if(ch=='1')
    {
        cout<<"Enter the number: ";
        cin>>a1;
        sum(a1);
    }
    else if(ch=='2')
    {
        cout<<"Enter the numbers: ";
        cin>>a1>>a2;
        sum(a1,a2);
    }
    else if(ch=='3')
    {
        cout<<"Enter the numbers: ";
        cin>>a1>>a2>>a3;
        sum(a1,a2,a3);
    }
    else
    {
        cout<<"You entered wrong input...Try again !! "<<endl;
        goto here;
    }
    return 0;

}