#include "container.h"


Container::Container(int capacity)
{
    this->capacity = capacity;
    this->data = new int[capacity];
    this->size = 0;
}

bool Container::is_empty(void)
{
    return size == 0;
}

int Container::get_size(void)
{
    return size;
}

int Container::get_capacity(void)
{
    return capacity;
}

// TODO: implement method for removing all elements from the container
// Hint: also print the elements, see what happens when you call the method
