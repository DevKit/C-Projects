#ifndef SINGLYLINKEDLIST_H_INCLUDED
#define SINGLYLINKEDLIST_H_INCLUDED



typedef int TYPE;


typedef struct Node
{
    TYPE data;
    struct Node *next;
} Node;


extern _Bool insertElementAtFront(Node **list, TYPE data);


extern void outputLinkedListElements(Node *list);


extern int findListElement(Node *list, TYPE data);


extern int getListLength(Node *list);


extern void findKthElement(Node *list, int k_position);


extern Node *nThToLast(Node *list, int n);


extern _Bool listType(Node *list);


// const extern int countOccurances(Node *list, TYPE element);


// const extern void copyLinkedList(Node *list);


// extern void sortLinkedList(Node *list);


// extern void reverseLinkedList(Node *list);


// extern void insertElementAtPosition(Node *list, int position);


// extern void removeDuplicates(Node **list);


extern Node *findPreviousElement(Node *list, TYPE data);


extern _Bool removeListElement(Node **list, TYPE data);


extern void removeLinkedList(Node **list);


#endif // SINGLYLINKEDLIST_H_INCLUDED
