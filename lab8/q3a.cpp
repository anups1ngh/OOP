#include <iostream>
using namespace std;
class timee
    {
    int hour,minute,second;
    public:
    timee() //default contructor called
      {
         hour = minute = second = 0; 
      }

    timee(int h, int m, int s) //parameterized contructor called
      {
        hour = h + m/60;
        minute = m%60 + s/60;
        second = s%60; 
      }
    void displaytime()
      {       
          cout<<"Time: "<<hour<<" hours: "<<minute<<" minutes: "<<second<<"seconds"<<endl; 
      }
            timee operator++(); //prefix ++
            timee operator++(int); //postfix ++
            timee operator--(); //prefix --
            timee operator--(int); //postfix --
    };


int main()
{
    int h,m,s;
    cout<<"Enter Time (hour, minute, second) : "; cin>>h>>m>>s;
    timee t1(h,m,s);
    cout<<"Original time:"<<endl;
    t1.displaytime();
    timee t11 = t1;
    cout<<"Overloading ++ prefix operator"<<endl;
    timee t2 = ++t1;
    cout<<"Prefix time:"<<endl;
    t2.displaytime();
    cout<<"Overloading postfix ++ operator"<<endl;
    timee t22 = t11++;
    cout<<"Postfix time:"<<endl;
    t22.displaytime();    
    cout<<"\n"<<endl;
    cout<<"Enter Time (hour, minute, second) : "; cin>>h>>m>>s;
    timee t3(h,m,s);
    cout<<"Original time:"<<endl;
    t3.displaytime();
    timee t33 = t3;
    cout<<"Overloading -- prefix operator"<<endl;
    timee t4 = --t3;
    cout<<"prefix time:"<<endl;
    t4.displaytime();
    cout<<"Overloading postfix -- operator"<<endl;
    timee t44 = t33--;
    cout<<"postfix time:"<<endl;
    t44.displaytime();
    return 0; 
}

timee timee::operator++()
{
    ++second;
    if (second == 60) {
    second = 0;
    ++minute;
    if (minute == 60) 
    {
    minute = 0;
    ++hour; 
    } 
    }
    return *this; 
}

timee timee::operator++(int) 
{
    timee t(hour,minute,second);
    second++;
    if (second == 60) {
    second = 0;
    minute++;
    if (minute == 60) {
    minute = 0;
    hour++;
    } }
    return t; 
}

timee timee::operator--()
{
    --second;
    if (second<0) {
    --minute;
    second += 60;
    if (minute<0) {
    --hour;
    minute += 60; } 
    }
    return *this; 
}

timee timee::operator--(int) 
{
    timee t(hour,minute,second);
    second--;
    if (second<0) {
    minute--;
    second += 60;
    if (minute<0) {
    hour--;
    minute += 60; } }
    return t; 
}