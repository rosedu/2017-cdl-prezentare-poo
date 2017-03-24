#include <stdio.h>

#include "stack.h"

int main()
{
    Stack *stack;

    stack = stack_new();

    stack_push(stack, 1);
    stack_push(stack, 2);
    stack_push(stack, 3);

    printf("get_size: %d\n", stack_get_size(stack));

    printf("%d\n", stack_pop(stack));
    printf("%d\n", stack_pop(stack));
    printf("%d\n", stack_pop(stack));

    printf("is_empty: %s\n", stack_is_empty(stack) ? "True" : "False");

    // TODO: Can I do this?
    // stack->data[5] = 42;

    stack_free(stack);

    return 0;
}
