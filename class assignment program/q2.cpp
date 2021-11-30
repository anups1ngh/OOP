#include <iostream>
using namespace std;

class vector
{
    int x, y, z;

public:
    void create(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void modify();
    void multiplyGivenAxis();
    void multiplyAllAxes();
    void display();
    void divideAllAxes();
    void addAllAxes();
};

void vector ::modify()
{
    char ch;
    int n;
    cout << "Enter the coordinate you want to modify: ";
    cin >> ch;
    cout << "Enter the value: ";
    cin >> n;
    switch (ch)
    {
    case 'x':
        x = n;
        break;
    case 'y':
        y = n;
        break;
    case 'z':
        z = n;
        break;
    default:
        cout << "Invalid input!\n";
        break;
    }
}

void vector ::multiplyGivenAxis()
{
    char ch;
    int n;
    cout << "Enter the coordinate to which you want to multiply: ";
    cin >> ch;
    cout << "Enter the value: ";
    cin >> n;
    if(ch == 'x')
        x *= n;
    else if(ch == 'y')
        y *= n;
    else
        z *= n;
}

void vector :: multiplyAllAxes()
{
    int n;
    cout << "Enter the number you want to multiply: ";
    cin >> n;
    x *= n;
    y *= n;
    z *= n;
}

void vector :: divideAllAxes()
{
    int n;
    cout << "Enter the number you want to divide: ";
    cin >> n;
    x /= n;
    y /= n;
    z /= n;
}

void vector :: addAllAxes()
{
    int n;
    cout << "Enter the number you want to add: ";
    cin >> n;
    x += n;
    y += n;
    z += n;
}

void vector :: display()
{
    cout << "P(" << x << ", " << y << ", " << z << ")" << endl;
}

int main()
{
    vector v_411;
    int x_411, y_411, z_411, n_411;
    cout << "Enter the coordinates of vector\n";
    cout << "x: ";
    cin >> x_411;
    cout << "y: ";
    cin >> y_411;
    cout << "z: ";
    cin >> z_411;
    v_411.create(x_411, y_411, z_411);

    v_411.modify();
    v_411.display();
    v_411.multiplyGivenAxis();
    v_411.display();
    v_411.multiplyAllAxes();
    v_411.display();
    v_411.divideAllAxes();
    v_411.display();
    v_411.addAllAxes();
    v_411.display();

    return 0;
}