#include<iostream> 
using namespace std;
   
int x=2;  // Global x
   
int main()
{
  int x = 10; // Local x
  cout << "Value of global x is " << ::x;
//   global value can be used by using scope-resolution operator :: 
  cout << "\nValue of local x is " << x; 
  return 0;
}