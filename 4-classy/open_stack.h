#pragma once

class Stack
{
private:
    int data[10];
    int head;

public:
    // Constructors have no return type, they just have the same name as the
    // class
    Stack(void)
    {
        head = 0;
    }
    // Notice that you don't have to explicitly add the "this parameter"
    void push(int element)
    {
        data[head] = element;
        head++;
    }

    int pop(void)
    {
        int ret;

        ret = data[head - 1];

        head--;

        return ret;
    }

    int top(void)
    {
        return data[head - 1];
    }

    bool is_empty(void)
    {
        return head == 0;
    }

    int get_size(void)
    {
        return head;
    }
    // Destructors have the class name with a tilda upfront
    ~Stack(void)
    {

    }
};
