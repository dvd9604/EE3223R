#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
using namespace std;
class ContactNode
{
public:
    // parameterized Constructor
    ContactNode(string name, string number);
    // mutators
    void insertAfter(ContactNode *node);
    void setNext(ContactNode *node);
    void setBefore(ContactNode *node);
    // accessors
    string getName() const;
    string getPhoneNumber() const;
    ContactNode *getNext() const;
    // printing
    void print();

private:
    string ContactName;
    string ContactNumber;
    ContactNode *next;
};
#endif