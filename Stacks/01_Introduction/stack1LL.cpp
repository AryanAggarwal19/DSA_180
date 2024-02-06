//       1.2_Implement_Stack_through_LL

#include <iostream>
    using namespace std;

// class Node
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
// class Stack
class Stack
{
    Node *top;
    int size; // actual size of stack (note=>diff from arr )

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // Implementation
    // push  @start 3
    void push(int value)
    {

        // Edge_Case if heap memory =>full
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "stack overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed " << value << " into the stack\n";
        }
    }
    // pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "Popped " << top->data << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    // peek
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack Is Empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    // IsEmpty
    bool IsEmpty()
    {
        return top == NULL;
    }
    // IsSize
    int IsSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.push(5);
}