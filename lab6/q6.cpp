#include<iostream>
#include<cstring>
using namespace std;

class cricketer
{
    char name[20];
    int age;
    int jersyNumber;
    int ODIplayed;
    public:
        void getdata(char *n,int a,int j,int o)
        {
            strcpy(name,n);
            age=a;
            jersyNumber=j;
            ODIplayed=o;
        }
        void display()
        {
            cout<<"\n********************\n";
            cout<<"Name of player: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"JersyNumber: "<<jersyNumber<<endl;
            cout<<"ODI Played: "<<ODIplayed<<endl;
        }
};

class batsman:virtual public cricketer
{
    int runstaken;
    int Batting_avg;
    int halfcentury;
    int century;
    float strikerate;
    int highest_score;
    char side;
    int numberofSixes;
    float longestSix;
    public:
        void getdata(char *n,int a,int j,int o,int r,int b,int hc,int c,float s,int hs,char si,int nos,float ls)
        {
            cricketer::getdata(n,a,j,o);
            runstaken=r;
            Batting_avg=b;
            halfcentury=hc;
            century=c;
            strikerate=s;
            highest_score=hs;
            side=si;
            numberofSixes=nos;
            longestSix=ls;
        }
        void display()
        {
            cricketer::display();
            cout<<"Runs Taken: "<<runstaken<<endl;
            cout<<"Batting average: "<<Batting_avg<<endl;
            cout<<"Half Century: "<<halfcentury<<endl;
            cout<<"Century: "<<century<<endl;
            cout<<"Strike Rate: "<<strikerate<<endl;
            cout<<"Highest Score: "<<highest_score<<endl;
            cout<<"Playing Side: "<<side<<endl;
            cout<<"Number of Sixes: "<<numberofSixes<<endl;
            cout<<"Longest Sixes Distance: "<<longestSix<<" meter"<<endl;
        }
};

class baller:virtual public cricketer
{
    char type[5];
    int NumberofWickets;
    int runRate;
    int speed;
    int Economy;
    char bSide;
    public: 
        void getdata(char *n,int a,int j,int o,char *t,int now,int rr,int sp,int ec,char b)
        {
            cricketer::getdata(n,a,j,o);
            strcpy(type,t);
            NumberofWickets=now;
            runRate=rr;
            speed=sp;
            Economy=ec;
            bSide=b;
        }
        void display()
        {
            cricketer::display();
            cout<<"\nBalling Type: "<<type<<endl;
            cout<<"Number of wicket taken: "<<NumberofWickets<<endl;
            cout<<"Run Rate: "<<runRate<<endl;
            cout<<"Speed: "<<speed<<" km/hr"<<endl;
            cout<<"Economy: "<<Economy<<endl;
            cout<<"Bowling Side: "<<bSide<<endl;
        }
};

int main()
{
    char name[20];
    int age;
    int jersyNumber;
    int ODIplayed;
    int runstaken;
    int Batting_avg;
    int halfcentury;
    int century;
    float strikerate;
    int highest_score;
    char side;
    int numberofSixes;
    float longestSix;
    char type[5];
    int NumberofWickets;
    int runRate;
    int speed;
    int Economy;
    char bSide;
    char decide;
    cout<<"Choose\n1.Batsman Details\n2.Batsman Details"<<endl;
    cin>>decide;
    if(decide=='1')
    {
        cout<<"Name: ";
        cin.ignore();
        cin.getline(name,20);
        cout<<"Age: ";
        cin>>age;
        cout<<"Jersy Number: ";
        cin>>jersyNumber;
        cout<<"Number of ODIs Played: ";
        cin>>ODIplayed;
        cout<<"Runs Taken: ";
        cin>>runstaken;
        cout<<"Batting Average: ";
        cin>>Batting_avg;
        cout<<"Half Centuries: ";
        cin>>halfcentury;
        cout<<"Centuries: ";
        cin>>century;
        cout<<"Strike Rate: ";
        cin>>strikerate;
        cout<<"Highest Score: ";
        cin>>highest_score;
        cout<<"Batting Side: ";
        cin>>side;
        cout<<"Number of Sixes: ";
        cin>>numberofSixes;
        cout<<"Longest Six Distance: ";
        cin>>longestSix;
        batsman b;
        b.getdata(name,age,jersyNumber,ODIplayed,runstaken,Batting_avg,halfcentury,century,strikerate,highest_score,side,numberofSixes,longestSix);
        b.display();
    }
    else
    {
        cout<<"Name: ";
        cin.ignore();
        cin.getline(name,20);
        cout<<"Age: ";
        cin>>age;
        cout<<"Jersy Number: ";
        cin>>jersyNumber;
        cout<<"Number of ODIs Played: ";
        cin>>ODIplayed;
        cout<<"Pace/Spin Baller: ";
        cin>>type;
        cout<<"Numbers of Wicket Taken: ";
        cin>>NumberofWickets;
        cout<<"Run Rate: ";
        cin>>runRate;
        cout<<"Speed: ";
        cin>>speed;
        cout<<"Economy: ";
        cin>>Economy;
        cout<<"Balling side: ";
        cin>>bSide;
        baller b;
        b.getdata(name,age,jersyNumber,ODIplayed,type,NumberofWickets,runRate,speed,Economy,bSide);
        b.display();
    }
    return 0;
}