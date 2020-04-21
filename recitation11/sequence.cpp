#include <cassert>
#include "sequence.h"
#include <iostream>

using namespace std;

void sequence::start()
{
    // move the current position tracker to 0
    current_index = 0;
}

void sequence::advance()
{
    // advance the position tracker by 1
    if (is_item())
        current_index = current_index + 1;
}

void sequence::insert(const value_type &entry)
{
    // make sure we have room to insert
    if (size() < CAPACITY)
    {
        if (!is_item())
        {
            // insert to front
            current_index = 0;
        }

        // shift over data
        for (size_type pos = used; pos > current_index; pos--)
        {
            data[pos] = data[pos - 1];
        }

        //insert value and increment used
        data[current_index] = entry;
        used++;
    }
}

//TODO ATTACH

void sequence::attach(const value_type &entry)
{
    if (size() < CAPACITY)
    {
        if (!is_item())
        {
            // enter at end
            data[used] = entry;
            used++;
        }
        else
        {
            for (size_type pos = used; pos > current_index + 1; pos--)
            {
                data[pos] = data[pos - 1];
            }

            data[current_index + 1] = entry;
            used++;
        }
    }
}

void sequence::remove_current()
{
    if (is_item())
    {
        //shift by 1 to delete
        for (size_type pos = current_index; pos < used; pos++)
        {
            data[pos] = data[pos + 1];
        }
        used--;
    }
}

// helper functions

bool sequence::is_item() const
{
    /*
    since all values will be placed one after another
    if the current index is equal to used we are at
    end of seq and current value isnt valid 
    */
    return (current_index != used);
}

sequence::value_type sequence::current() const
{
    // ensure we dont go off list
    assert(is_item());
    // give back the value of current index
    return data[current_index];
}
