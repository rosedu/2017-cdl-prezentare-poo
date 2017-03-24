#pragma once

#include "container.h"


class Stack
    : public Container
{
private:
    int head;

public:
    // Constructors have no return type, they just have the same name as the
    // class
    Stack(int capacity);
    // Don't forget to add "override"! It means you "replace" the parent class
    // implementation
    void push(int element) override;
    int pop(void);
    int top(void);
    // No longer needed!
    // bool is_empty(void);
    int get_size(void);
    int get_capacity(void);
    // Destructors have the class name with a tilda upfront
    ~Stack(void);
};
