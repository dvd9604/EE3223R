#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <cstdlib> //size_t
class sequence
{
public:
    // TYPEDEFS and MEMBER CONSTANTS
    typedef double value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;
    // CONSTRUCTOR
    sequence()
    {
        used = 0;
        current_index = CAPACITY;
    }

    // MODIFICATION MEMBER FUNCTIONS
    void start();
    void advance();
    void insert(const value_type &entry);
    void attach(const value_type &entry);
    void remove_current();

    // CONSTANT MEMBER FUNCTIONS
    size_type size() const { return used; }
    bool is_item() const;
    value_type current() const;

private:
    value_type data[CAPACITY]; // The array to store items
    size_type used;            // How much of array is used
    size_type current_index;   // Index of current item
};

#endif