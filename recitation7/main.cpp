#include <iostream>
#include "ContactNode.h"
using namespace std;

int main()
{
    // vars to help capture names and numbers
    string name;
    string number;

    // head pointer keep track of linked list
    ContactNode *head = NULL;
    // cur pointer to help with iteration
    ContactNode *curNode = head;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter contact name: ";
        cin >> name;

        cout << "Enter contact phone number: ";
        cin >> number;

        // create a temp node
        ContactNode *temp = new ContactNode(name, number);

        if (head != NULL)
        {
            // perform insertion
            curNode->insertAfter(temp);
        }
        else
        {
            // set first node as head
            head = temp;
        }
        // update current node

        curNode = temp;
    }

    // PRINTING LOGIC

    curNode = head;

    cout << "CONTACT LIST" << endl;

    while (curNode != NULL)
    {
        // print node
        curNode->print();
        // move on to next node in list
        curNode = curNode->getNext();
    }
    return 0;
}