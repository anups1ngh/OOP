#include<iostream>
using namespace std;

void print(int n=80,char c='*')
{
    for(int i=0;i<n;i++)
    {
        cout<<c<<" ";
    }
}

int main()
{
    char check;
    int n;
    char a;

    here:

    cout<<"Do you want to put your input for print: Y/N ";
    cin>>check;
    if(check=='Y'||check=='y')
    {
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter char: ";
    cin>>a;

    print(n,a);
    }

    else if(check=='n' || check=='N')
    {
        cout<<"You choose not to give input so showing default output:"<<endl;
        print();
        cout<<endl;
    }
    else
    {
        cout<<"You provided wrong input :( Try again !! "<<endl<<endl;
        goto here;
    }
    return 0;
}