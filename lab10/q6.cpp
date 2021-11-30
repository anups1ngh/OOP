/*6.(Class Template) Write a class template to represent a generic vector.
Include member functions to perform the following tasks:

? To create the vector. T *a;
Int size;
? To modify the value of a given element.
Void modify(T newval, int index)
? To multiply the vector by a scalar value.
Void multiply(T scalarval)*/
//lab 10.6.cpp
#include <iostream>
using namespace std;

const int size = 3;
template <class T>
class veCtor
{
    T *vec;

public:
    veCtor()
    {
        vec = new T[size];
        for (int i = 0; i < size; i++)
        {
            vec[i] = 0;
        }
    }
    veCtor(T *a)
    {
        vec = new T[size];
        for (int i = 0; i < size; i++)
        {
            vec[i] = a[i];
        }
    }
    void modify(T newValue, int idx)
    {
        vec[idx] = newValue;
    }
    void multiply(T value)
    {
        for (int i = 0; i < size; i++)
        {
            vec[i] *= value;
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int arr[] = {10,20,30};
    veCtor<int> v1(arr);
    cout << "The vector is : ";
    v1.display();

    int idx1 = 2;
    int modify1 = 10;
    v1.modify(modify1, idx1);
    cout << "The vector after modifying value is : ";
    v1.display();

    int scalar = 5;
    v1.multiply(scalar);
    cout << "The vector after multiplying with scalar is : ";
    v1.display();

    float arr2[] = {1.1,2.2,3.3};
    veCtor<float> v2(arr2);
    cout << "The vector is : ";
    v2.display();

    int idx2 = 0;
    float modify2 = 1.9;
    v2.modify(modify2, idx2);
    cout << "The vector after modifying value is : ";
    v2.display();

    float scalar2 = 1.1;
    v2.multiply(scalar2);
    cout << "The vector after multiplying with scalar is : ";
    v2.display();

    return 0;
}
