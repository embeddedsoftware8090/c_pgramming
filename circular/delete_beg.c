#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// traversal function
struct Node *circulartravesal(struct Node *head)
{
    struct Node *ptr = head; // ptr is equal to head
    do
    {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head); // why do while is using bcause

    return head;
}
// Deletion of the first node
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head, *p;
   // if (curr == head)
   // {
        p = head;
        while (p->next != head)
        p = p->next;
        head = ptr->next;
        p->next = head;
        free(ptr);
   // }

    return head; // return  Head
}
int main()
{

    // declaration of  Node and allocate the memory for that node
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *firth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    // link the nodes

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = head; // instead  of NULL we can use  head for circular
    printf("circular before delete first:\n");
    circulartravesal(head);
    head = deleteFirst(head);
    printf("circular After delete first:\n");
    circulartravesal(head);
}