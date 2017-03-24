#include <new>

#include "queue.h"


Queue::Queue(int capacity)
{
    // Would 'capacity = capacity;' work?
    this->capacity = capacity;
    this->data = new int[capacity];
    this->size = 0;

    this->head = 0;
    this->tail = 0;
}

void Queue::push(int element)
{
    if (size >= capacity)
    {
        return;
    }

    data[tail] = element;
    size++;
    // Circular buffer
    tail = (tail + 1) % capacity;
}

int Queue::pop(void)
{
    int ret;

    if (size == 0)
    {
        return 0;
    }

    ret = data[head];
    size--;
    // Circular buffer
    head = (head + 1) % capacity;

    return ret;
}

int Queue::top(void)
{
    if (size == 0)
    {
        return 0;
    }

    return data[head];
}

bool Queue::is_empty(void)
{
    return size == 0;
}

int Queue::get_size(void)
{
    return size;
}

int Queue::get_capacity(void)
{
    return capacity;
}

Queue::~Queue(void)
{
    delete[] data;
}
