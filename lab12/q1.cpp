// #include <iostream>
// #include <time.h>
// using namespace std;
// int main()
// {
// 	struct tm* ptr;
// 	time_t t;
// 	t = time(NULL);
// 	ptr = localtime(&t);
// 	cout<<asctime(ptr);
// 	return 0;
// }


#include<iostream>
using namespace std;
 
void division(float a,float b)
{
    float cal;
    if(b == 0)
    throw ((char*)"Denominator is zero");
    else
    {
        cal = a/b;
        cout<<"Division = "<<cal<<endl;
    }
}

int main()
{
    float x,y;
    cout<<"Number 1: ";
    cin>>x;
    cout<<"Number 2: ";
    cin>>y;
    try{
        division(x,y);
    }
    catch(char * ch)
    {
        cout<<ch<<endl;
    }
    return 0;
}