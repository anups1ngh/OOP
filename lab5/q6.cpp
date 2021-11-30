// WAP to count number of objects created from a class using concept of static data members and static member function.

#include<iostream>
using namespace std;

class test
{
    private: 
        static int a;
        int k;
    public:
     test()
     {
         ++a;
     }
      test(int i)
      {
          k=i;
          ++a;
      }
      test(const test &t)
      {
          k=t.k;
          ++a;
      }
      static void show()
      {
          cout<<"Total object created is: "<<a<<endl;
      }
};

int test::a;

int main()
{
    test t1,t2(3),t4(t2);
    test::show();
    return 0;
}