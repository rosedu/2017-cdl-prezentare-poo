#pragma once

#include "container.h"


class Queue
    : public Container
{
private:
    int head;
    int tail;

public:
    // Constructors have no return type, they just have the same name as the
    // class
    Queue(int capacity);
    // Notice that you don't have to explicitly add the "this parameter"
    void push(int element) override;
    int pop(void) override;
    int top(void) override;
    // No longer needed!
    // bool is_empty(void);
    int get_size(void);
    int get_capacity(void);
    // Destructors have the class name with a tilda upfront
    ~Queue(void);
};
