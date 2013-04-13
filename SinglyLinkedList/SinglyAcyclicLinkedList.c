#include <stdlib.h>
#include <stdio.h>


#include "SinglyAcyclicLinkedList.h"


_Bool insertElementAtFront(Node **list, TYPE value)
{
    Node *temp = malloc(sizeof(Node));

    if (!temp)
    {
        printf("AllocationError: Out of memory. \n");
        return 0;
    }

    temp -> data = value;
    temp -> next = *list;
    *list = temp;

    return 1;
}


void outputLinkedListElements(Node *list)
{
    if (!list)
    {
        printf("ListError: List is empty. \n");
        return;
    }

    Node *temp = list;

    while (temp)
    {
        printf("%d \n", temp -> data);
        temp = temp -> next;
    }
}


int findListElement(Node *list, TYPE data)
{
    if (!list)
    {
        printf("ListError: List is empty. \n");
        return (-1);
    }

    Node *temp = list;

    while (temp)
    {
        if (temp -> data == data)
        {
            return 1;
            break;
        }

     temp = temp -> next;
    }

  return 0;
}


int getListLength(Node *list)
{
    if (!list)
        return 0;

    int length = 0;

    Node *temp = list;

    while (temp)
    {
        ++length;
        temp = temp -> next;
    }

  return length;
}


void findKthElement(Node *list, int k_position)
{
    if (!list)
    {
        printf("ListError: List is empty. \n");
        return;
    }

    if ((k_position <= 0) || (k_position > getListLength(list)))
    {
        printf("ListError: No such index in list. \n");
        exit(0);
    }

    Node *temp = list;

    int index = 1;

    while (temp)
    {
        if (index == k_position)
        {
            printf("Element at position %u is: %d \n", k_position, temp -> data);
            break;
        }

        ++index;

        temp = temp -> next;
    }
}


Node *nThToLast(Node *list, int n)
{
    Node *current, *n_behind;

    int i;

    if (!list)
        return NULL;

    if (n <= 0 || n >= getListLength(list))
    {
        printf("UserError: Invalid nth element. \n");
        exit(-1);
    }

    current = list;

    for (i = 0; i < n; ++i)
    {
        if (current -> next)
        {
            current = current -> next;
        }

        else
        {
            return NULL;
        }
    }

    n_behind = list;

    while (current -> next)
    {
        current = current -> next;

        n_behind = n_behind -> next;
    }

    return n_behind;
}


_Bool listType(Node *list)
{
    Node *fast, *slow;

    slow = list;

    fast = list -> next;

    while (1)
    {
        if (!fast || !fast -> next)
            return 0;

        else if (fast == slow || fast -> next == slow)
            return 1;

        else
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
    }
}


Node *findPreviousElement(Node *list, TYPE data)
{
    if (!list)
    {
        printf("ListError: List is empty. \n");
        return;
    }

    Node *temp = list;

    while ((temp) && (temp -> next -> data != data))
        temp = temp -> next;

  return temp;
}


_Bool removeListElement(Node **list, TYPE data)
{
    if (!findListElement(*list, data))
    {
        printf("ListError: Element not in the list. \n");
        return 0;
    }

    if (!list || !*list)
    {
        printf("ListError: NULL pointer passed. \n");
        return 0;
    }

    Node *i, *j;

    if ((*list) -> data == data)
    {
        i = *list;
        *list = i -> next;
        free(i);
        return 1;
    }

    i = findPreviousElement(*list, data);


    if (i -> next != NULL)
    {
        j = i -> next;
        i -> next = j -> next;
        free(j);
        return 1;
    }

}


void removeLinkedList(Node **list)
{
    if (!*list)
        return;

    Node *i, *j;

    i = *list;

    while (i)
    {
        j = i -> next;
        free(i);
        i = j;
    }

  *list = NULL;
}
