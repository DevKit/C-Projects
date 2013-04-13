#include <stdio.h>


#include "SinglyAcyclicLinkedList.h"


int main()
{
    // The head pointer is actually a sentinel pointer that
    // points to the first element in the list
    Node *list = NULL;

    // Output an empty list
    // outputLinkedListElements(list);

    // Get the size of an empty list
    // printf("%s: %u \n\n", "Size of list", getListLength(list));

    // Lets insert some elements in the list
    int i, test[] = {3, -4, 0, 99};

    for (i = 0; i < 4; ++i)
        insertElementAtFront(NULL, test[i]);

    // Output list with some elements in it
    // outputLinkedListElements(list);
    // printf("\n");

    // Get thje size of the non-empty list
    // printf("%s: %u \n\n", "Size of list", getListLength(list));

    // Check if an element is in the list
    // printf("%d \n\n", findListElement(list, 99));

    // See the value of the previous element
    // printf("%d", findPreviousElement(list, 0) -> data);

    // Find the kth element
    // findKthElement(list, 99);

    // Find the n to the last element
    //Node *t = nThToLast(list, 5);
    //printf("%d", t -> data);

    // Delete an element from the list
    // removeListElement(&list, 3);


    // Check the length again
    // printf("%s: %u \n\n", "Size of list", getListLength(list));

    // Check for the deleted element
    // printf("%d \n\n", findListElement(list, -4));

    // Output the modified list
    // outputLinkedListElements(list);
    // printf("\n");

    // Delete the list
    removeLinkedList(&list);

    return 0;
}
