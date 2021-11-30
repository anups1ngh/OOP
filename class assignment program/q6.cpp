#include<iostream>
#include<string.h>
using namespace std;

class books
{
    char code[10];
    char name[20];
    float price;
    int quantity;
    float total;
    static int count;
    public:
        void setData(char *c, char *n, float p, int q)
        {
            strcpy(code, c);
            strcpy(name, n);
            price = p;
            quantity = q;
            total = p * q;
        }
        
        void display()
        {
            if(count < 1)
            {
                cout << "SI.No.\tCode\tName\tPrice\tQuantity\tTotal\n";
                cout << "*********************************************************************\n";
                count++;
            }
            cout << count++ << "\t" << code << "\t" << name << "\t" << price << "\t" << quantity << "\t\t" << total << endl;
        }

        friend void calc(books *b, int a);
};

int books :: count;

void calc(books *b, int a)
{
    float temp;
    for(int i = 0; i < a; i++)
    {
        temp += b[i].total;
    }
    cout << "********************************************************************\n                                              Total = Rs." << temp << "/-\n";
}


int main(){
    int n_411, quantity_411;
    float price_411;
    char name_411[20], code_411[10];
    cout << "Enter the number of books: ";
    cin >> n_411;
    books b_411[n_411];
    for(int i = 0; i < n_411; i++)
    {
        cout << "Enter the code: ";
        getchar();
        gets(code_411);

        cout << "Enter the name: ";
        gets(name_411);

        cout << "Enter the price: ";
        cin >> price_411;
        cout << "Enter the quantity: ";
        cin >> quantity_411;
        b_411[i].setData(code_411, name_411, price_411, quantity_411);
    }

    for(int i = 0; i < n_411; i++)
    {
        b_411[i].display();
    }

    calc(b_411, n_411);
    return 0;
}