#include "stack.h"


Stack::Stack(void)
{
    this->head = 0;
}

void Stack::push(int element)
{
    this->data[this->head] = element;
    this->head++;
}

int Stack::pop(void)
{
    int ret;

    ret = this->data[this->head - 1];

    this->head--;

    return ret;
}

int Stack::top(void)
{
    return this->data[this->head - 1];
}

bool Stack::is_empty(void)
{
    return this->head == 0;
}

int Stack::get_size(void)
{
    return this->head;
}

Stack::~Stack(void)
{
    // Nothing to do here
}
