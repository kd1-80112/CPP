#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *arr;

    stack(int size)
    {
        this->size = size;
        this->top = -1;
        arr = new int[size];
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is under flow" << endl;
        }
    }
    void isfull()
    {
        if (top >= size)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            cout << "stack id not full" << endl;
        }
    }
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void disply()
    {
        for (int i = 0; i < top + 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    stack st(5);
    st.isfull();

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.isfull();

    st.disply();
    cout << endl;
    cout << "------------------" << endl;
    st.pop();
    st.pop();
    st.disply();
    cout << endl;
    cout << "------------------" << endl;
    cout << st.peak();
    cout << endl;
    cout << "------------------" << endl;

    st.isempty();
}