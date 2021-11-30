#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
    char email[50];
    cout<<"Enter an email address: ";
    cin>>email;
    int len = strlen(email);
    try{
        for(int i=0;i<len;i++)
        {
            if(email[i] == '@')
            {
                if(email[len-1] == 'm' && email[len-2] == 'o' && email[len-3] == 'c' && email[len-4] == '.')
                {
                    throw ((char*)"***** Correct email *****");
                }
                else
                throw ((char*)"***** InCorrect email *****");

            }
        }
        throw ((char*)"***** InCorrect email *****");
    }
    catch(char * ch)
    {
        cout<<ch<<endl;
    }
    return 0;
}