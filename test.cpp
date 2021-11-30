#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
    char customerName[20];
    int customerid;
    int accountnumber;
    double accountBalance;
    char email[30];
    public:
    BankAccount()
    {
        strcpy(customerName,"ABC");
        customerid=0;
        accountnumber=0;
        accountBalance=2000.0;
        strcpy(email,"Abc@gamil.com");
    }
    BankAccount(char name[],int id,int ano,double bal,char eid[])
    {
        strcpy(customerName,name);
        customerid=id;
        accountnumber=ano;
        accountBalance=bal;
        strcpy(email,eid);
    }
    BankAccount(const BankAccount &B1)
    {
        strcpy(customerName,B1.customerName);
        customerid=B1.customerid;
        accountnumber=B1.accountnumber;
        accountBalance=B1.accountBalance;
        strcpy(email,B1.email);
    }
    void getdata();

    int getBalance()
    {
        cout<<"CurrentBalance is "<<accountBalance<<endl;
    }

    void withdraw(double amt)
    {
        if(accountBalance>=500)
        {
            cout<<"Your transaction is successful for Rs. "<<amt<<endl;
        }
        else if(accountBalance<500)
        {
            cout<<"Sorry! Balance is below minimum balance\n";
        }
    }
    friend void displayit(BankAccount *b,int n);
};

int main()
{
    int n;
    cout<<"Enter no of accounts: ";
    cin>>n;
    BankAccount b[n];
    for(int i=0;i<n;i++)
    b[i].getdata();
    for(int i=0;i<n;i++)
    displayit(b,n);
    return 0;
}

void BankAccount::getdata()
{
    cout<<"Enter Name: ";
    cin>>customerName;
    cout<<"Enter Id: ";
    cin>>customerid;
    cout<<"Enter AccountNo: ";
    cin>>accountnumber;
    cout<<"Enter Balance: ";
    cin>>accountBalance;
    cout<<"Enter email: ";
    cin>>email;
}

void displayit(BankAccount *b,int n)
{
    BankAccount temp;
    for(int i=0;i<n;i++)
    {
        if(b[i].accountBalance>b[i+1].accountBalance)
        temp=b[i];
    }
    cout<<"Maximum Balance customer is: ";
    cout<<"CustomerName= "<<temp.customerName<<"\nCustomerId= "<<temp.customerid<<"\nCustomer AccountNo= "<<temp.accountnumber<<"\nCustomer Balance= "<<temp.accountBalance<<"\nCustomer email= "<<temp.email<<endl;
}
