#include <iostream>
#include <cstring>
using namespace std;
class strr
{
    public:
    char *s;
    int len;
    //str(){};
    strr()
    {
         s = new char[6];
        strcpy(s,"Hello");
    }

    strr(char *first) 
    {
        len = strlen(first);
        s = new char[len+1];
        strcpy(s,first);
    }

    strr operator+(strr &s2) 
    {
        strr temp;
        int l1,l2;
        l1=s2.len;
        l2=len;
        temp.len=l1+l2;   
        temp.s=new char[temp.len+1];     
        strcat(s,s2.s);
        strcpy(temp.s,s);
        return temp;
    }

    strr operator=(strr &s2) 
    {   
        len = s2.len;
        s= new char[len+1];
        strcpy(s,s2.s);
        return *this; 
    }
};


int main()
{
    char a[30];
    char b[30];
    cout<<"Enter string 1: ";
    cin>>a;
    cout<<"Enter string 2: ";
    cin>>b;
    strr s1(a),s2(b);
    strr assigns1 = s1;
    strr assigns2 = s2;
    strr cat = s1 + s2;    
    cout<<"Full string is : "<<cat.s<<endl;
    cout<<"String assigned with S1 is : "<<assigns1.s<<endl;
    cout<<"String assigned with S2 is : "<<assigns2.s<<endl;
    return 0; 
}