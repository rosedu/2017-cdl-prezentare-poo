#include <cstdio>

#include "stack.h"
#include "queue.h"

void test_stack(Stack *stack)
{
    printf("is_empty: %s\n", stack->is_empty() ? "True" : "False");

    for (int i = 1; i <= 5; i++)
    {
        stack->push(i);
        printf("get_size: %d\n", stack->get_size());
    }

    printf("is_empty: %s\n", stack->is_empty() ? "True" : "False");

    while (!stack->is_empty())
    {
        printf("top: %d\n", stack->top());
        stack->pop();
    }
}

void test_queue(Queue *queue)
{
    printf("is_empty: %s\n", queue->is_empty() ? "True" : "False");

    for (int i = 1; i <= 5; i++)
    {
        queue->push(i);
        printf("get_size: %d\n", queue->get_size());
    }

    printf("is_empty: %s\n", queue->is_empty() ? "True" : "False");

    while (!queue->is_empty())
    {
        printf("top: %d\n", queue->top());
        queue->pop();
    }
}

int main()
{
    // '10' is the capacity argument for the constructor
    Stack *stack = new Stack(10);
    Queue *queue = new Queue(10);

    printf("==== Testing stack ====\n");
    test_stack(stack);
    printf("\n");

    printf("==== Testing queue ====\n");
    test_queue(queue);
    printf("\n");

    // This will call the destructor
    delete stack;
    delete queue;

    return 0;
}
