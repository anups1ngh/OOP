#include <iostream>
using namespace std;

template <class T, int size>
class qUeue
{
    T *q;
    int front, rear;

public:
    qUeue()
    {
        front = -1;
        rear = -1;
        q = new T[size];
    }

    void enqueue(T ele);
    T dequeue();
    void display();
};

template <class T, int size>
void qUeue<T, size>::enqueue(T ele)
{
    if (rear == size - 1)
    {
        cout << "Stack is full\n";
        return;
    }
    else
    {
        q[rear] = ele;
        rear++;
    }
}

template <class T, int size>
T qUeue<T, size>::dequeue()
{
    T popped;
    if (front == rear)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        popped = q[front];
        front++;
    }
    return popped;
}

template <class T, int size>
void qUeue<T, size>::display()
{
    int temp = front;
    while (temp != rear)
    {
        cout << q[temp] << " ";
        temp++;
    }
    cout << endl;
}
int main()
{
    const int size = 20;

    qUeue<int, size> q;
    q.enqueue(1);
    q.display();
    q.enqueue(2);
    q.display();
    q.enqueue(3);
    q.display();
    q.enqueue(4);
    q.display();
    int popped = q.dequeue();
    cout << "The popped element is : " << popped << endl;
    q.display();

    qUeue<double, size> q2;
    q2.enqueue(2.345);
    q2.display();
    q2.enqueue(4.345);
    q2.display();
    q2.enqueue(12.345);
    q2.display();
    double popped2 = q2.dequeue();
    cout << "The popped element is : " << popped2 << endl;
    q2.display();

    return 0;
}