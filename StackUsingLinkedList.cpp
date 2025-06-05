#include <iostream>
using namespace std;

//
//

//
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//
class stack
{
private:
    Node *top; //

public:
    stack()
    {
        top = NULL; //
    }

    //
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory
        newNode->data = value;      // 2. Allign Value
        newNode->next = top;        // 3. Set the next pointer
        top = newNode;              // 4. Update the top pointer
        cout << "push value: " << value << endl;
        return value;
    }
    //
    bool isEmpty()
    {
        return top == NULL; // rteurn true if the top pointer is NULL
    }

    // Pop operation: remove the tempost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // If
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node
    }

    // Peek/Top operation: retrieve the value of the top
    void peek()
}