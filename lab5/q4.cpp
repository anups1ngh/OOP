// Write a C++ program using class to dynamically allocate two integer arrays, add them it to a third array and display all the arrays
#include<iostream>
using namespace std;

class arr
{
    private:
    int *arr1;
    public:
        arr(){};
        arr(int *a,int *b,int n1,int n2)
        {
            int n3=n1+n2;
            arr1 = new int [n3];
            for(int i=0;i<n1;i++)
            {
                arr1[i]=a[i];
            }
            int k=n1;
            for(int i=0;i<n2;i++)
            {
                
                arr1[k]=b[i];
                k++;
            }
            cout<<"Combined array is: ";
            for(int i=0;i<n3;i++)
            {
                cout<<arr1[i];
            }
        }
};

int main()
{
    int a[50],b[50],n1,n2;
    cout<<"Enter number of inputs for array 1: ";
    cin>>n1;
    cout<<"Enter number of inputs for array 2: ";
    cin>>n2;
    cout<<"Enter array1 elements: \n";
    for(int i=0;i<n1;i++)
    {
        int el;
        cout<<"Element "<<i+1<<" : ";
        cin>>el;
        a[i]=el;
    }
    cout<<"Enter array2 elements: \n";
    for(int i=0;i<n2;i++)
    {
        int el;
        cout<<"Element "<<i+1<<" : ";
        cin>>el;
        b[i]=el;
    }
    arr a1(a,b,n1,n2);
}