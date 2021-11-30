#include<iostream>
using namespace std;

class batsman
{
    int runstaken;
    int battingavg;
    int halfCenturies;
    int centuries;
    float strikerate;
    public:
    void getdata(int r,int b,int h,int c,float s)
    {
        runstaken=r;
        battingavg=b;
        halfCenturies=h;
        centuries=c;
        strikerate=s;
    }
    void display()
    {
        
        cout<<"Runs Taken: "<<runstaken<<"\nBatting average: "<<battingavg<<"\nHalf centuries: "<<halfCenturies<<"\nCentrury: "<<centuries<<"\nStrike Rate: "<<strikerate<<endl;
    }
};

class baller
{
    int wicket_taken;
    int runrate;
    int speed;
    int hatricks;

    public:    
    void getdata(int w,int r,int s,int h)
    {
        wicket_taken=w;
        runrate=r;
        speed=s;
        hatricks=h;
    }
    void display()
    {
        cout<<"\n";
        cout<<"Wicket Taken: "<<wicket_taken<<"\nRun rate: "<<runrate<<"\nspeed: "<<speed<<"\nHatricks: "<<hatricks<<endl;
    }
};

class allrounder:public baller,public batsman
{
    int manofmatch;
    int internationalmatch;
    int catches;
    int iccrank;
    int stylishplayer;

    public:
    void getdata(int w,int r,int s,int h,int rb,int b,int hi,int c,float sl,int m,int in,int ci,int ic,int si)
    {
        baller::getdata(w,r,s,h);
        batsman::getdata(rb,b,hi,c,sl);
        manofmatch=m;
        internationalmatch=in;
        catches=ci;
        iccrank=ic;
        stylishplayer=si;
    }
    void display()
    {
        cout<<"\n Displaying Allrounder data: \n";
        batsman::display();
        baller::display();
        cout<<endl;
        cout<<"Man of the match: "<<manofmatch<<"\nInternational matches played: "<<internationalmatch<<"\nNo. of catches: "<<catches<<"\nICC ranking: "<<iccrank<<"\nStylish player of the match: "<<stylishplayer<<endl;
    }
};

int main()
{
    int w,r,s,h,rb,b,hi,c,sl,m,in,ci,ic,si;
    cout<<"Enter wicket taken: ";
    cin>>w;
    cout<<"Enter Runrate: ";
    cin>>r;
    cout<<"Enter Baller speed: ";
    cin>>s;
    cout<<"Enter Number of Hatricks: ";
    cin>>h;
    cout<<"Enter Runs Taken: ";
    cin>>rb;
    cout<<"Enter Batting Average: ";
    cin>>b;
    cout<<"Enter Half Centuries: ";
    cin>>hi;
    cout<<"Enter Centuries: ";
    cin>>c;
    cout<<"Enter StrikeRate: ";
    cin>>sl;
    cout<<"Enter No of Man of the Match: ";
    cin>>m;
    cout<<"Enter No of International matches: ";
    cin>>in;
    cout<<"Enter No of catches: ";
    cin>>ci;
    cout<<"Enter ICC ranking: ";
    cin>>ic;
    cout<<"Stylish Player of the Match: ";
    cin>>si;
    allrounder al;
    al.getdata(w,r,s,h,rb,b,hi,c,sl,m,in,ci,ic,si);
    al.display();
    return 0;
}