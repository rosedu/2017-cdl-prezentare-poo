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
