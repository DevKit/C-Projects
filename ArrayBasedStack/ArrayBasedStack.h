#ifndef ARRAYBASEDSTACK_H_INCLUDED
#define ARRAYBASEDSTACK_H_INCLUDED


#include <stdbool.h>


#define MIN_STACK_SIZE (2)
#define EMPTY_STACK    (-1)


typedef struct Stack
{
    int top_of_stack;
    int stack_capacity;
    int *stack;
} STACK, *STACK_PTR;


extern void initStack(STACK_PTR s);

extern STACK_PTR createStack(int max_num_of_elements);

extern void removeStack(STACK_PTR s);

extern bool isStackEmpty(STACK_PTR s);

extern bool isStackFull(STACK_PTR s);

extern void push(STACK_PTR s, int x);

extern int top(STACK_PTR s);

extern int bottom(STACK_PTR s);

extern void pop(STACK_PTR s);

extern void topAndPop(STACK_PTR s);

extern void outputStack(STACK_PTR s);

#endif // ARRAYBASEDSTACK_H_INCLUDED
