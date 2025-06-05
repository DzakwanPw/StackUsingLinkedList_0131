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
        newNode->data = value;      // 2. 
        newNode->next = top;        // 3.
        top = newNode;              // 4.
        cout << *Push value: * << value << endl;
        return value;
    }
}