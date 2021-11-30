#include<iostream>
using namespace std;

class stud{
    public:
        void display()
        {
            cout<<"Display function"<<endl;
        }
};

int main()
{
    int n;
    cout<<"Enter number of objects you want to create: ";
    cin>>n;
    stud *s[n];
    try{
        s[n-1] = NULL;
        for(int i=0;i<n-1;i++)
        {
            s[i]= new stud;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i] == NULL)
            throw ((char*)"failed to allocate memory");
            else
            cout<<"Memory allocated successfully"<<endl;
        }
    }
    catch(char *ch)
    {
        cout<<ch<<endl;
    }
    return 0;
}