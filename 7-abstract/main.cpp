#include <cstdio>

#include "stack.h"
#include "queue.h"
#include "container.h"


void test_container(Container *container)
{
    for (int i = 1; i <= 5; i++)
    {
        container->push(i);
    }

    printf("is_empty: %s\n", container->is_empty() ? "True" : "False");

    container->clear();

    printf("is_empty: %s\n", container->is_empty() ? "True" : "False");
}

int main()
{
    // '10' is the capacity argument for the constructor
    Stack *stack = new Stack(10);
    Queue *queue = new Queue(10);

    printf("==== Testing stack ====\n");
    test_container(stack);
    printf("\n");

    printf("==== Testing queue ====\n");
    test_container(queue);
    printf("\n");

    // This will call the destructor
    delete stack;
    delete queue;

    return 0;
}
