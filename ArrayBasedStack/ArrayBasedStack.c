#include <stdio.h>


#include "ArrayBasedStack.h"


void initStack(STACK_PTR s)
{
    s -> top_of_stack = EMPTY_STACK;
}


STACK_PTR createStack(int max_num_of_elements)
{
    if (max_num_of_elements < MIN_STACK_SIZE)
        fprintf(stderr, "%s \n", "ADTError: Stack size is too small. \n");

    STACK_PTR temp = malloc(sizeof(STACK));

    if (temp == NULL)
         fprintf(stderr, "%s \n", "MemoryError: Out of memory. \n");

    temp -> stack = malloc(sizeof(int) * max_num_of_elements);

    if (temp -> stack == NULL)
        fprintf(stderr, "%s \n", "MemoryError: Out of memory. \n");

    temp -> stack_capacity = max_num_of_elements;

    initStack(temp);

    return temp;
}


void removeStack(STACK_PTR s)
{
    if (s != NULL)
    {
        free(s -> stack);
        free(s);
    }
}


bool isStackEmpty(STACK_PTR s)
{
    return s -> top_of_stack == EMPTY_STACK;
}


bool isStackFull(STACK_PTR s)
{
    return s -> top_of_stack == s -> stack_capacity - 1;
}


void push(STACK_PTR s, int x)
{
    if (isStackFull(s))
        fprintf(stderr, "%s \n", "ADTError: Stack is full. \n");
     s -> stack[++(s -> top_of_stack)] = x;
}


int top(STACK_PTR s)
{
    if (isStackEmpty(s))
        fprintf(stderr, "%s \n", "ADTError: Stack is empty. \n");
     return (s -> stack[s -> top_of_stack]);
}


int bottom(STACK_PTR s)
{
    if (isStackEmpty(s))
        fprintf(stderr, "%s \n", "ADTError: Stack is empty. \n");
     return (s -> stack[0]);
}


void pop(STACK_PTR s)
{
    if (isStackEmpty(s))
        fprintf(stderr, "%s \n", "ADTError: Stack is empty. \n");
     --(s -> top_of_stack);
}


void topAndPop(STACK_PTR s)
{
    if (isStackEmpty(s))
        fprintf(stderr, "%s \n", "ADTError: Stack is empty. \n");
     return s -> stack[--(s -> top_of_stack)];
}


void outputStack(STACK_PTR s)
{
    if (isStackEmpty(s))
        fprintf(stderr, "%s \n", "ADTError: Stack is empty. \n");
    else
    {
        int index;
        for (index = s -> stack_capacity - 1; index >= 0; --index)
            printf("%d \n", s -> stack[index]);
    }
}
