#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next; // self  referential structure
};
void traversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}
int main()
{
    // delcaration of elements
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *five;

    // dynamacally allocation

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    five = (struct Node *)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = five;

    five->data = 9;
    five->next = NULL;
    printf("\n\n before delete the index element :\n");
    traversal(head);
    head = deleteValue(head, 5);
    printf("\nAfter delete the index element :\n");
    traversal(head);
    return 0;
}