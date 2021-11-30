#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive number : ";
    cin >> num;
    try
    {
        if (num == 0)
            throw(char *)"Zero";
        else if (num == -1)
            throw num;
        else if (num == 1)
            cout <<"\nNUMBER = "<< num;
        else
            throw(float) num;
    }

    catch (int num)
    {
        cout <<"\n" << num << " is negative";
    }
    catch (char *msg)
    {
        cout <<"\nThe number is " << msg;
    }
    catch (...)
    {
        cout << "\nNo specific code executed ";
    }
    cout << "\nExiting main()";
}