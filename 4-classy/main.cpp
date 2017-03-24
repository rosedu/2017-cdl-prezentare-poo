#include <cstdio>

#include "stack.h"
// #include "open_stack.h"

int main()
{
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    printf("get_size: %d\n", stack.get_size());

    printf("%d\n", stack.pop());
    printf("%d\n", stack.pop());
    printf("%d\n", stack.pop());

    printf("is_empty: %s\n", stack.is_empty() ? "True" : "False");

    // Can I do this?
    // stack.data[5] = 42;

    return 0;
}
