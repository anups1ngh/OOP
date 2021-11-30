#include<iostream>
#include<cstring>
using namespace std;

class store
{    
    char bname[30];
    char aname[30];
    int price;    

    public:
    void getdata(char *b,char *a,int p)
    {
        strcpy(bname,b);
        strcpy(aname,a);
        price=p;
    }
    friend void showdata(store *s,int low,int high,int n);
};

    void showdata(store *s,int low,int high,int n)
    {
        cout<<endl;
        cout<<"SR.No\tBook name\tAuthor name\tPrice\n";
        for(int i=0;i<n;i++)
        {            
            if((s[i].price>=low) && (s[i].price<=high))
            {
                cout<<i+1<<".\t"<<s[i].bname<<"\t"<<s[i].aname<<"\t"<<s[i].price<<endl;
            }
            else
            cout<<"-----No books Found-----Try again!!\n";
        }
    }

int main()
{
    char a[30];
    char b[30];
    int pr,low,high;
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    store st[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details of book "<<i+1<<" : "<<endl;
        cout<<"Enter book name: ";
        cin.ignore();
        cin.getline(a,30);
        cout<<"Enter author name: ";
        cin.getline(b,30);
        cout<<"Enter price of book: ";
        cin>>pr;
        st[i].getdata(a,b,pr);
    }
    cout<<"\nEnter low and high price range: \nLow: ";
    cin>>low;
    cout<<"High: ";
    cin>>high;
    showdata(st,low,high,n);
    return 0;
}