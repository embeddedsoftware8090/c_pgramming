#include <stdio.h>
#include <stdlib.h> // memory allocation library

struct Node
{
    int data;
    struct Node *next; // self referencial structure node
};
void linkedListTraveral(struct Node *ptr) // traverse ptr to all element
{
    while (ptr != NULL) // condition true till nth element
    {
        printf("Elements : %d\n", ptr->data); // pointer point to
        ptr = ptr->next;
    }
}
void insertAtFirst(struct Node *head, int data) // insert element at bebgning
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));// ptr memory allocation which i want to insert here  

    ptr->next = head;
    ptr->data = data;
    head = ptr;

};

int main()
{
    // declaration of the Nodes
    struct Node *Head = NULL;
    
    // linkedListTraveral(Head); // Head only starting the element
    insertAtFirst(Head, 10); // storing data in head
    insertAtFirst(Head, 20);
    insertAtFirst(Head, 30);
    insertAtFirst(Head, 40);
    insertAtFirst(Head, 50);
    insertAtFirst(Head, 60);
    insertAtFirst(Head, 70);
    insertAtFirst(Head, 80);
    insertAtFirst(Head, 90);
    insertAtFirst(Head, 100);

    linkedListTraveral(Head);        // traverse for everey element

    return 0;
}