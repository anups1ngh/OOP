#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class media
{
protected:
    string title;
    float price;

public:
    media(string t, float p$)
    {
        title = t;
        price = p$;
    }
    virtual void print() = 0;
};
class book : public media
{
    int pages;

public:
    book(string t, float p$, int p) : media(t, p$)
    {
        pages = p;
    }
    void print()
    {
        cout << "\nTitle : " << title;
        cout << "\nPages : " << pages;
        cout << "\nPrice : " << price;
    }
};
class tape : public media
{
    float timee;

public:
    tape(string t, float p$, int te) : media(t, p$)
    {
        timee = te;
    }
    void print()
    {
        cout << "\nTitle : " << title;
        cout << "\nTime : " << timee;
        cout << "\nPrice : " << price;
    }
};
int main()
{
    media *m[2];
    string s;
    int pages;
    float price, timee;
    cout << "Enter Title: ";
    getline(cin, s);
    cout << "Enter Price: ";
    cin >> price;
    cout << "If Book\tEnter pages: ";
    cin >> pages;
    cout << "If Tape\tEnter time: ";
    cin >> timee;
    book b(s, price, pages);
    tape t(s, price, timee);
    m[0] = &b;
    m[1] = &t;
    cout << "\n\tBook";
    m[0]->print();
    cout << "\n\n\tTape";
    m[1]->print();
    return 0;
}