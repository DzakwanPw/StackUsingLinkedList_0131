#include <iostream>
using namespace std;

// stackUsingLinkedlist_4nimbelakang
// minimal commit 20

// Node class representing = single node in the linked list
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

// Stack class
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
    // IsEmpty operation: check if the stack is Empty
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
    {
        if(isEmpty())
        {
            cout << "List is empty," << endl;
            return; //
        }
        else
        {
            Node *current = top;
            while (current !=NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return the value of the top node
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice !=4)
    {
        cout << "i. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value
            break;
        case 2:
            stack.pop(); // Pop the temposit element from the stack
            break;
        case 3:
            stack.peek();
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}