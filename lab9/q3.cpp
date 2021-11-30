#include <iostream>
#include <cmath>
using namespace std;
class Account
{
protected:
    int account_number;
    float balance;
    char customer_name[50];

public:
    void input()
    {
        cout << "Enter Account Name: ";
        cin >> customer_name;
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void deposit()
    {
        int amt;
        cout << "Enter the Amount to deposit:";
        cin >> amt;
        balance = balance + amt;
        cout << "->> Amount added to your Balance.";
    }
    virtual void withdrawal() = 0;
    virtual void display()
    {
        cout << "->> Account Name : " << customer_name << endl;
        cout << "->> Account Number : " << account_number << endl;
        cout << "->> Total Balance : Rs. " << balance << endl;
    }
};
class Savings : public Account
{
    int minimumBalance = 500;

public:
    void withdrawal()
    {
        int amt;
        cout << "Enter the Amount to withdraw:";
        cin >> amt;
        if (amt <= balance)
        {
            if (amt > minimumBalance)
                cout << "->> Your withdrawal is more than minimum Balance.";
            else
            {
                balance = balance - amt;
                cout << "->> Withdrawal is Passed";
            }
        }
        else
            cout << "->> Your withdrawal is more than Account Balance.";
    }
};
class Current : public Account
{
    float overdueBalance = 0.0;
    int timeperiod = 1;

public:
    void withdrawal()
    {
        int amt;
        cout << "Enter the Amount to withdraw:";
        cin >> amt;
        balance = balance - amt;
        if (balance < 0)
        {
            cout << "->> Your withdrawal is more than Account Balance. Amount Overdued.\nInterest Rate = 0.15%\n";
            int debt = -balance;
            timeperiod += 1;
            overdueBalance = debt + debt * 0.15 * timeperiod;
        }
        cout << "->> Withdrawal is Passed";
    }
    void display()
    {
        cout << "->> Account Name : " << customer_name << endl;
        cout << "->> Account Number : " << account_number << endl;
        cout << "->> Total Balance : Rs. " << balance << endl;
        cout << "->> Overdue Amount : Rs. " << overdueBalance;
    }
};

int main()
{
    int ch;
    char account_type;
    Savings S;
    Current C;
    Account *A;
    cout << "Enter Account Type(S for Savings; C for Current): ";
    cin >> account_type;
    if (account_type == 'S' || account_type == 's')
    {
        cout << "For Savings Account : ";
        S.input();
        A = &S;
        while (1)
        {
            cout << "\nSAVINGS ACCOUNT\n1.Deposit.\n2.Withdraw.\n3.Account Details.\n4.EXIT.\nEnter the Choice:";
            cin >> ch;
            switch (ch)
            {
            case 1:
                A->deposit();
                break;
            case 2:
                A->withdrawal();
                break;
            case 3:
                A->display();
                break;
            case 4:
                printf("Thank you.\n");
                exit(1);
            default:
                printf("Invalid Choice.\n");
                break;
            }
        }
    }
    if (account_type == 'C' || account_type == 'c')
    {
        cout << "For Current Account : ";
        C.input();
        A = &C;
        while (1)
        {
            cout << "\nCURRENT ACCOUNT\n1.Deposit.\n2.Withdraw.\n3.Account Details.\n4.EXIT.\nEnter the Choice:";
            cin >> ch;
            switch (ch)
            {
            case 1:
                A->deposit();
                break;
            case 2:
                A->withdrawal();
                break;
            case 3:
                A->display();
                break;
            case 4:
                printf("Thank you.\n");
                exit(1);
            default:
                printf("Invalid Choice.\n");
                break;
            }
        }
    }
    else
    cout<<"Invalid choice\n";
    return 0;
}