#include <iostream>
#include <ctime>
using namespace std;


void cal(int year,int y,int month,int m,int day,int d)
{
    if(year == y && month == m && day == d)
    {
        throw ((char*)"Expired\n");
    }
    else
    {
        int ye = y - year;
        int mo = (12*ye + m) - month;
        int da = (30*mo +d) - day;
        if(da > 0)
        throw ((char*)"Not Expired\n");
        else
        throw ((char*)"Expired\n");
    }
    
}

int main() {
    int d,m,y;
   // current date/time based on current system
   time_t now = time(0);

   tm *ltm = localtime(&now);

    int ye = 1900 + ltm->tm_year;
    int mo =  1 + ltm->tm_mon;
    int da = ltm->tm_mday;
    cout<<"Enter expiry date in dd mm yyyy format: ";
    cin>>d>>m>>y;
    try{
        cal(ye,y,mo,m,da,d);
    }
    catch(char* ch)
    {
        cout<<ch<<endl;
    }
}
