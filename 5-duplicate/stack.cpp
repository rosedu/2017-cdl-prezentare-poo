#include "stack.h"


Stack::Stack(int capacity)
{
    // Would 'capacity = capacity;' work?
    this->capacity = capacity;
    this->data = new int[capacity];

    this->head = 0;
}

void Stack::push(int element)
{
    if (size >= capacity)
    {
        return;
    }

    data[head] = element;
    size++;

    head++;
}

int Stack::pop(void)
{
    int ret;

    if (size == 0)
    {
        return 0;
    }

    ret = data[head - 1];
    size--;

    head--;

    return ret;
}

int Stack::top(void)
{
    if (size == 0)
    {
        return 0;
    }

    return data[head - 1];
}

bool Stack::is_empty(void)
{
    return size == 0;
}

int Stack::get_size(void)
{
    return size;
}

int Stack::get_capacity(void)
{
    return capacity;
}

Stack::~Stack(void)
{
    delete[] data;
}
