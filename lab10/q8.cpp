//lab-10.8.cpp
#include <iostream>
using namespace std;

template <class T, int size>
class sTack
{
    T *stk;
    int top;

public:
    sTack()
    {
        top = -1;
        stk = new T[size];
    }

    void push(T ele);
    T pop();
    void display();
};

template <class T, int size>
void sTack<T, size>::push(T ele)
{
    if (top == size - 1)
        cout << "Stack is full.\n";
    else
    {
        top++;
        stk[top] = ele;
    }
}

template <class T, int size>
T sTack<T, size>::pop()
{
    T popped;
    if (top == -1)
        cout << "STack is empty\n";
    else
    {
        popped = stk[top];
        top--;
    }
    return popped;
}

template <class T, int size>
void sTack<T, size>::display()
{
    while (top != -1)
    {
        cout << stk[top] << " ";
        top--;
    }
    cout << endl;
}
int main()
{
    const int size = 20;
    sTack<int, size> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int popped = st.pop();
    cout << "The popped element is : " << popped << endl;
    cout << "The stack is : ";
    st.display();

    sTack<char, size> st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');

    char popped2 = st2.pop();
    cout << "The popped element is : " << popped2 << endl;
    cout << "The stack is : ";
    st2.display();

    return 0;
}
