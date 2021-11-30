#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter a positive Number: ";
    cin>>n;
    try{
        if(n<0)
        throw n;
        else
        cout<<"Square root of "<<n<<": "<<sqrt(n)<<endl;
    }
    catch(int n){
        cout<<"Input is negative"<<endl;
    }
    return 0;
}