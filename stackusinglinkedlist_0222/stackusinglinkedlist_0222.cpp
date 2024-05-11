// stackusinglinkedlist_0222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

//Stack class
class Stack
{
private :
    Node* top; 

public :
    Stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node* current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};


int main()
{
    Stack stack;
    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the vale to push: ";
            cin >> value;
            stack.push(value);
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
