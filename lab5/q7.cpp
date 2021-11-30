// A book shop maintains the inventory of books that are being sold at the workshop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies are available, the total cost of their quested copies is displayed otherwise the message “Required copies not in stock” is displayed. WAP using a class called Books with suitable member functions and constructors.

#include<iostream>
#include<string.h>
using namespace std;

class details
{
    int stock;
    char *author;
    char *title;
    char *publisher;
    float price;
    public:

    details(){};    
    void getdata(details *d,char *a,char *t,char *p,float pr,int s)
    {
            author= new char[strlen(a)+1];
            publisher= new char[strlen(p)+1];
            title= new char[strlen(t)+1];
            stock=s;
            strcpy(author,a);
            strcpy(title,t);
            price=pr;
            strcpy(publisher,p);
        
    }
    details(details *d,int n,char *a,char *t)
    {
        int co;
        for(int i=0;i<n;i++)
        {
            if((strcmp(d[i].author,a)==0) && strcmp(d[i].title,t)==0)
            {
                cout<<"Enter number of copies you want: ";
                cin>>co;
                if(co<=d[i].stock)
                {
                    cout<<"Total price will be: "<<co*d[i].price<<endl;
                    d[i].stock--;
                }
                else
                cout<<"Sorry!! this book is not in stock\n";
            }
        }
    }
};

int main()
{
    int n,stock;
    float pri;
    cout<<"Enter number of books: ";
    cin>>n;    
    details d[n];
    char author[30],title[30],publisher[30];
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        cout<<"Enter the title of book: ";
        cin.ignore();
        cin.getline(title,30);
        cout<<"Enter author of book: ";
        cin.ignore();
        cin.getline(author,30);
        cout<<"Enter name of publisher: ";
        cin.ignore();
        cin.getline(publisher,30);
        cout<<"Enter stock of this book: ";
        cin>>stock;
        cout<<"Enter price of this book: ";
        cin>>pri;
        d[i].getdata(d,author,title,publisher,pri,stock);
    }

    // details

    cout<<"\nSearching Books: \n";    
    cout<<"title name: ";
    cin.ignore();
    cin.getline(title,30);
    cout<<"author name: ";
    cin.ignore();
    cin.getline(author,30);
    details(d,n,author,title);
}