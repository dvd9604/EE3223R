#include <iostream>

using namespace std;

class Node
{
public:
    //data members value + pointer
    int val;
    Node *next = NULL;
    // constructor
    Node(int value)
    {
        this->val = value;
    }
};

class Stack
{
private:
    int size;
    Node *top = NULL;
    Node *curNode = NULL;

public:
    Stack()
    {
        this->size = 0;
    }
    void push(int value)
    {
        if (this->top == NULL)
        { // empty stack
            this->top = new Node(value);
        }
        else
        {
            Node *temp = new Node(value);
            temp->next = this->top;
            this->top = temp;
        }
        this->size++;
    }
    Node *pop()
    {
        Node *temp = this->top;
        this->top = this->top->next;
        this->size--;

        return temp;
    }

    Node *peek()
    {
        return this->top;
    }

    void print()
    {
        if (curNode == NULL)
        {
            //reset to head
            curNode = top;
        }

        cout << "Printing stack of size " << size << endl;

        while (curNode != NULL)
        {
            cout << curNode->val << " ";
            curNode = curNode->next;
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.print(); // 3->2->1->NULL

    s.pop();

    s.print(); // 2->1->NULL
    return 0;
}
