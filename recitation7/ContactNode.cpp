#include <iostream>
#include "ContactNode.h"

using namespace std;

ContactNode::ContactNode(string name, string number)
{

    this->ContactName = name;
    this->ContactNumber = number;
    this->next = NULL;
}

void ContactNode::insertAfter(ContactNode *node)
{
    // point inserted node to old node's next
    node->next = this->next;
    // point prev node to inserted node
    this->next = node;
}

void ContactNode::setNext(ContactNode *node)
{
    this->next = node;
}

void ContactNode::setBefore(ContactNode *node)
{
    node->next = this;
}

string ContactNode::getName() const
{
    return this->ContactName;
}

string ContactNode::getPhoneNumber() const
{
    return this->ContactNumber;
}

ContactNode *ContactNode::getNext() const
{
    return this->next;
}

void ContactNode::print()
{
    cout << "Name: " << this->ContactName << " "
         << "Number: " << this->ContactNumber << endl;
}