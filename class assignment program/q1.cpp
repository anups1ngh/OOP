#include<iostream>
using namespace std;

class polynomial
{
    int n;
    int *arr;
    public:
        polynomial(){}

        polynomial(int *array, int len)
        {
            n = len;
            arr = new int[n];
            for(int i = 0; i < len; i++)
            {
                arr[i] = array[i];
            }
        }

        polynomial(const polynomial &o)
        {
            n = o.n;
            arr = new int[n];
            for(int i = 0; i < n; i++)
            {
                arr[i] = o.arr[i];
            }
        }

        ~polynomial()
        {
            delete[] arr;
        }

        void display()
        {
            int i;
            for(i = n - 1; i > 0; i--)
            {
                cout << arr[i] << "x^" << i << " + ";
            }
            cout << arr[i] << "x^" << i << endl;
        }

        void add(polynomial p1, polynomial p2);
        void multiply(polynomial p1, polynomial p2);
};

void polynomial :: add(polynomial p1, polynomial p2)
{
    n = (p1.n > p2.n) ? p1.n : p2.n;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        if(i < p1.n && i < p2.n)
        {
            arr[i] = p1.arr[i] + p2.arr[i];
        }
        else if(i > p1.n)
        {
            arr[i] = p2.arr[i];
        }
        else
        {
            arr[i] = p1.arr[i];
        }
    }
}

void polynomial :: multiply(polynomial p1, polynomial p2)
{
    n = p1.n + p2.n - 1;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < p1.n; i++)
    {
        for(int j = 0; j < p2.n; j++)
        {
            arr[i+j] += p1.arr[i]*p2.arr[j];
        }
    }
}

int main(){
    int n_411;
    
    cout << "Enter the highest degree of polynomial: ";
    cin >> n_411;
    n_411++;
    int arr_411[n_411];
    for(int i = 0; i < n_411; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr_411[i];
    }
    polynomial o1_411(arr_411, n_411);

    cout << "Enter the highest degree of second polynomial: ";
    cin >> n_411;
    n_411++;
    int arr2_411[n_411];
    for(int i = 0; i < n_411; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr2_411[i];
    }
    polynomial o2_411(arr2_411, n_411);
    polynomial o3_411;
    o3_411.add(o1_411, o2_411);
    polynomial o1_411;
    o1_411.multiply(o1_411, o2_411);
    o1_411.display();
    o2_411.display();
    o3_411.display();
    o1_411.display();

    return 0;
}