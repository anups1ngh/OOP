#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char c,ch[50],chl[256];
    int uc=0,lc=0,nos=0,nod=0,nol=0,noc=0,now=0;
    fstream file("q5.txt",ios::in);
    if(!file)
    {
        cout<<"File not Found\n";
        exit(0);
    }
    while(file.eof() ==0)
    {
        file.get(c);
        if(c !=' ')
        noc++;
        if(c>= 'A' && c<= 'Z')
        uc++;
        if(c>= 'a' && c<= 'z')
        lc++;
        if(c>= '0' && c<= '9')
        nod++;
        if(c>='!' && c<= '/')
        nos++;
    }
    fstream fwcount("q5.txt",ios::in);
    while(fwcount.eof()==0)
    {
        fwcount>>ch;
        now++;
    }
    fstream flcount("q5.txt",ios::in);
    while(flcount.eof()==0)
    {
        flcount.getline(chl,256);
        nol++;
    }
    cout<<"Number of Upper-Case characters: "<<uc<<endl;
    cout<<"Number of Lower-Case characters: "<<lc<<endl;
    cout<<"Number of speacial characters: "<<nos<<endl;
    cout<<"Number of characters: "<<noc<<endl;
    cout<<"Number of Lines: "<<nol<<endl;    
    cout<<"Number of words: "<<now<<endl;
    cout<<"Number of digits: "<<nod<<endl;  
    

    file.close();
    fwcount.close();
    return 0;
}