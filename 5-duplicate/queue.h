#pragma once

class Queue
{
private:
    int *data;
    int size;
    int capacity;
    int head;
    int tail;

public:
    // Constructors have no return type, they just have the same name as the
    // class
    Queue(int capacity);
    // Notice that you don't have to explicitly add the "this parameter"
    void push(int element);
    int pop(void);
    int top(void);
    bool is_empty(void);
    int get_size(void);
    int get_capacity(void);
    // Destructors have the class name with a tilda upfront
    ~Queue(void);
};
