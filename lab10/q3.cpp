// 10.3 oop lab
/*3 (Function Template) Write a template function to search for a given key
element from an array. Illustrate how you perform search in integer,
character as well as double arrays using the same template function.*/

#include <iostream>
using namespace std;

template <class T>
bool seaRch(T arr[], T key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}
int main()
{
    int arr1[] = {1, 4, 9, 20, 11};
    int size1 = 5;
    int key1 = 9;

    if (seaRch(arr1, key1, size1))
        cout << "Yes the element is found" << endl;
    else
        cout << "No the element is not found" << endl;



    char arr2[] = {'a', 'b', 'c'};
    int size2 = 3;
    char key2 = 'c';
    if (seaRch(arr2, key2, size2))
        cout << "Yes the element is found" << endl;
    else
        cout << "No the element is not found" << endl;



    double arr3[] = {4.567, 9.45, 8.654};
    int size3 = 3;
    double key3 = 4.568;
    if (seaRch(arr3, key3, size3))
        cout << "Yes the element is found" << endl;
    else
        cout << "No the element is not found" << endl;
    return 0;
}
