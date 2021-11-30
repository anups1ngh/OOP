// Create a class which stores a string and its length as data members. Include all the constructors. Include a member function to join two strings and display the concatenated string
#include<iostream>
#include<string.h>
using namespace std;

class str
{
    char *one;
    char *two;
    int len1;
    int len2;
    public:
       str()
       {
           one= new char[4];
           two= new char[5];
           strcpy(one,"Anup");
           strcpy(two,"Singh");
           cout<<"Default name is: "<<strcat(one,two)<<endl;
       }
       str(char *first,char *second)
       {
           len1= strlen(first);
           len2= strlen(second);
           one= new char[len1];
           two= new char[len2+1];
           strcpy(one,first);
           strcpy(two,second);
           cout<<"Full string is : "<<strcat(one,two)<<endl;
       }
       str(const str &s1)
       {
           one= new char[s1.len1];
           two= new char[s1.len2+1];
           strcpy(one,s1.one);
           strcpy(two,s1.two);
           cout<<"Full copy string is : "<<strcat(one,two)<<endl;
       }
       
};

int main()
{
    char a[10];
    char b[10];
    cout<<"Enter string 1: ";
    cin>>a;
    cout<<"Enter string 2: ";
    cin>>b;
    str s1(a,b),s2,s3(s1);
}