// Create two classes DM and DB which store the value of distances. DM stores distances in meters and centimeters and DB in feet and inches. Write a program that can read values for the class objects and add one object of Dm with another object of DB. Use friend function to carry out the operation. The object that stores the results may be a DM object or DB object, depending on the units in which the results are required. The display should in the format of feet and inches or meters and centimeters depending on the object on display.


#include<iostream>
using namespace std;

class DM;
class DB
{
    float ft;
    float in;
    public:
        void store(float a,float b)
        {
            ft=a;
            in=b;
        }
        float add(DM c1);
};

class DM
{
    float cm;
    float m;
    public:
    void store(float a,float b)
        {
            cm=a;
            m=b;
        }
        friend float DB::add(DM c1);
};

float DB::add(DM c1)
{
    float temp1=(ft*30.48)+(c1.m*100)+(in*2.54)+(c1.cm);
    return temp1;
}


int main()
{
    DB f1;
    DM c1;
    float ft,cen,me,in;
    cout<<"Enter distance in feet and inch: ";
    cin>>ft>>in;
    f1.store(ft,in);
    cout<<"Enter distance in centimeter and meter: ";
    cin>>cen>>me;
    c1.store(cen,me);
    cout<<"Sum of these lengths = "<<f1.add(c1)<<" Centimeters"<<endl;

    return 0;
}