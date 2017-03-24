#pragma once

class Container
{
protected:
    int *data;
    int size;
    int capacity;
public:
    Container(int capacity);
    // "Abstract method" - focus on the concept, not on the syntax
    virtual void push(int element) = 0;
    // TODO: extract other method(s) that should be abstract
    bool is_empty(void);
    // TODO: extract other common methods
};
