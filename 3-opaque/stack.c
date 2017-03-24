#include <stdlib.h>

#include "stack.h"

struct _Stack
{
    int head;
    int data[10];
};

Stack *stack_new(void)
{
    Stack *this;

    this = malloc(sizeof(Stack));

    this->head = 0;
}

void stack_push(Stack *this, int element)
{
    this->data[this->head] = element;
    this->head++;
}

int stack_pop(Stack *this)
{
    int ret;

    ret = this->data[this->head - 1];

    this->head--;

    return ret;
}

int stack_top(Stack *this)
{
    return this->data[this->head - 1];
}

int stack_is_empty(Stack *this)
{
    return this->head == 0;
}

int stack_get_size(Stack *this)
{
    return this->head;
}

void stack_free(Stack *this)
{
    free(this);
}
