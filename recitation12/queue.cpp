#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node *prev = NULL;
    Node(int value)
    {
        this->val = value;
    }
};

class Queue
{
private:
    int size;
    Node *head;
    Node *tail;
    Node *curNode;

public:
    Queue()
    {
        this->size = 0;
        head = NULL;
        tail = NULL;
        curNode = NULL;
    }
    void enqueue(int value)
    {
        if (this->head == NULL)
        {
            //empty
            this->head = new Node(value);
            this->tail = this->head;
        }
        else
        {
            this->head->prev = new Node(value);
            this->head->prev->next = this->head;
            this->head = this->head->prev;
        }
        this->size++;
    }

    Node *dequeue()
    {
        Node *temp = this->tail;

        this->tail = this->tail->prev;
        this->tail->next = NULL;

        this->size--;

        return temp;
    }
    void print()
    {
        if (curNode == NULL)
        {
            //reset to head
            curNode = head;
        }

        cout << "Printing queue of size " << size << endl;

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

    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print(); //3->2->1->NULL

    q.dequeue();

    q.print(); // 3->2->NULL

    q.enqueue(4);

    q.print(); // 4->3->2->NULL

    return 0;
}
