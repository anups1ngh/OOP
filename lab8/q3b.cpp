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
        friend timee operator++(timee &); //prefix ++
        friend timee operator++(timee &,int); //postfix ++
        friend timee operator--(timee &); //prefix --
        friend timee operator--(timee &,int); //postfix --
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
    cout<<"prefix time:"<<endl;
    t2.displaytime();
    cout<<"Overloading postfix ++ operator"<<endl;
    timee t22 = t11++;
    cout<<"Postfix time:"<<endl;
    t22.displaytime();  
    cout<<endl;
    cout<<"Enter Time (hour, minute, second) : "; cin>>h>>m>>s;
    timee t3(h,m,s);
    cout<<"Original time:"<<endl;
    t3.displaytime();
    timee t33 = t3;
    cout<<"Overloading -- prefix operator"<<endl;
    timee t4 = --t3;
    cout<<"Prefix time:"<<endl;
    t4.displaytime();
    cout<<"Overloading postfix -- operator"<<endl;
    timee t44 = t33--;
    cout<<"Postfix time:"<<endl;
    t44.displaytime();
    return 0; 
}


timee operator++(timee &t) 
{
    ++t.second;
    if (t.second == 60) {
    t.second = 0;
    ++t.minute;
    if (t.minute == 60) {
    t.minute = 0;
    ++t.hour; } }
    return t; 
}

timee operator++(timee &t,int) 
{
    timee tt(t.hour,t.minute,t.second);
    t.second++;
    if (t.second == 60) {
    t.second = 0; t.minute++;
    if (t.minute == 60) {
    t.minute = 0; t.hour++;
    } }
    return tt; 
}

timee operator--(timee &t) 
{
    --t.second;
    if (t.second<0) {
    --t.minute; t.second += 60;
    if (t.minute<0) {
    --t.hour; t.minute += 60; } }
    return t; 
}

timee operator--(timee &t,int) 
{
    timee tt(t.hour,t.minute,t.second);
    t.second--;
    if (t.second<0) {
    t.minute--;
    t.second += 60;
    if (t.minute<0) {
    t.hour--;
    t.minute += 60; } }
    return tt;
}