#include <stdio.h>


struct stack
{
    int head;
    int data[10];
};

void push(struct stack *s, int el)
{
    s->data[s->head] = el;
    s->head++;
}

int pop(struct stack *s)
{
    int ret;

    ret = s->data[s->head - 1];

    s->head--;

    return ret;
}

int top(struct stack *s)
{
    return s->data[s->head - 1];
}

int is_empty(struct stack *s)
{
    return s->head == 0;
}

int get_size(struct stack *s)
{
    return s->head;
}

int main()
{
    struct stack s;

    s.head = 0;

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("get_size: %d\n", get_size(&s));

    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));

    printf("is_empty: %s\n", is_empty(&s) ? "True" : "False");

    // Can I do this?
    // s.data[5] = 42;

    return 0;
}
