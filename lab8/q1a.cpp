#include<iostream>
using namespace std;
 
class Distance{
   int feet;
   int inch;
   public:
      Distance()
      {
         feet=inch=0;
      };
      Distance(int f,int i){
         feet=f;
         inch=i;
      }
      Distance operator+ (Distance d1)
      {
               int temp=0;
               Distance d;
               if(d1.inch>=12 && inch<=12)
               {
                  temp=d1.inch/12;
                  d.feet=d1.feet+temp+feet;
                  d.inch=inch+(d1.inch-12*temp);
                  if(d.inch>=12)
                  {
                     d.feet++;
                     d.inch-=12;
                  }
               }
               else if(inch>=12 && d1.inch<=12)
               {
                  temp=inch/12;
                  d.feet=d1.feet+temp+feet;
                  d.inch=d1.inch+(inch-12*temp);
                  if(d.inch>=12)
                  {
                     d.feet++;
                     d.inch-=12;
                  }
               }
               else if(inch>=12 && d1.inch>=12)
               {  int t1=0;
                  temp=inch/12;
                  t1=d1.inch/12;
                  d.feet=feet+d1.feet+temp+t1;
                  d.inch=(inch-12*temp)+(d1.inch-12*t1);
                  if(d.inch>=12)
                  {
                     d.feet++;
                     d.inch-=12;
                  }
               }
               return d;
            }
      friend Distance operator+(int i,Distance d1);
      
      void display()
      {
         cout<<feet<<" feet "<<inch<<" inch "<<endl;
      }
};    

Distance operator+(int i,Distance d1)
{
   Distance d;
   d.feet=d1.feet;
   d.inch=i+d1.inch;
   if(d.inch>=12)
   {
      d.feet++;
      d.inch-=12;
   }
   return d;
}

int main()
{
   Distance d1(5,45),d2(12,34),sum;
   sum=d1+d2;
   sum.display();
   sum=3+sum;
   cout<<endl;
   sum.display();
   return 0;
}