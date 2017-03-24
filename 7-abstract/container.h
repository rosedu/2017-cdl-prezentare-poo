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
    virtual int pop(void) = 0;
    virtual int top(void) = 0;

    bool is_empty(void);
    int get_size(void);
    int get_capacity(void);
    // TODO: implement method for removing all elements
    void clear(void);
};
