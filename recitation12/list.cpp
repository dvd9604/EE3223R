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

class List
{
private:
    Node *head = NULL;
    Node *tail = NULL;
    Node *curNode = NULL;
    int size;

public:
    List()
    {
        size = 0;
    }
    void append(int value)
    {
        if (this->head == NULL)
        {
            //empty
            this->head = new Node(value);
            this->tail = this->head;
        }
        else
        {
            this->tail->next = new Node(value);
            this->tail = this->tail->next;
        }
        this->size++;
    }

    void prepend(int value)
    {
        if (this->head == NULL)
        {
            this->head = new Node(value);
            this->tail = this->head;
        }
        else
        {
            Node *temp = new Node(value);
            temp->next = this->head;
            this->head = temp;
        }
        this->size++;
    }
    void print()
    {
        if (curNode == NULL)
        {
            //reset to head
            curNode = head;
        }

        cout << "Printing list of size " << size << endl;

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

    List l;

    l.append(4);
    l.append(5);
    l.append(6);

    l.print(); //4->5->-6->NULL

    l.prepend(3);
    l.prepend(2);
    l.prepend(1);

    l.print(); //1->2->3->4->5->6->NULL

    return 0;
}
