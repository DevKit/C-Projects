#include <stdlib.h>
#include <stdio.h>


#include "ArrayBasedStack.h"


int main()
{
    /// Create a stack
    STACK_PTR stack = createStack(5);
    /// Initialize the stack
    initStack(stack);


    return 0;
}
