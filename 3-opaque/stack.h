#pragma once

typedef struct _Stack Stack;

Stack *stack_new(void);
void stack_push(Stack *stack, int element);
int stack_top(Stack *stack);
int stack_pop(Stack *stack);
int stack_is_empty(Stack *stack);
int stack_get_size(Stack *stack);
void stack_free(Stack *stack);
