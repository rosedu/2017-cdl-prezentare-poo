#include <stdio.h>


void push(int *v, int *n, int el)
{
    v[*n] = el;
    (*n)++;
}

int top(int *v, int *n)
{
    return v[*n - 1];
}

int pop(int *v, int *n)
{
    int ret;

    ret = top(v, n);

    (*n)--;

    return ret;
}

int is_empty(int *v, int *n)
{
    return *n == 0;
}

int get_size(int *v, int *n)
{
    return *n;
}

int main()
{
    int n = 0;
    int v[10];

    push(v, &n, 1);
    push(v, &n, 2);
    push(v, &n, 3);

    printf("%d\n", pop(v, &n));
    printf("%d\n", pop(v, &n));
    printf("%d\n", pop(v, &n));

    return 0;
}
