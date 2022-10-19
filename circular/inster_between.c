#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *circulartravesal(struct Node *head)
{
    struct Node *ptr = head; // ptr is equal to head
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head); //

    return head;
}
struct Node *insertAtBetween(struct Node *Head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); // malloc allocate the memory for new element
    struct Node *p = Head;// new p is pointing to Head data
    int i = 0; // iteration start from 0
    while (i != index-1) // i stop previous node of the element
    {
        p = p->next;
        i++;
    }
    ptr->data = data;// ptr data is equal to the new data
    ptr->next = p->next; // ptr pointer is equal to p pointer 
    p->next = ptr;
     //p pointer is equal to ptr pointer 
    return Head;
}
int main()
{

    // decalration of  Node
    struct Node *head;
    struct Node *firth;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // allocate the memory for that node
    head = (struct Node *)malloc(sizeof(struct Node));
    firth = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link the nodes

    head->data = 3;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = head; // instead  of NULL we can use for head
    printf("circular before insert between:\n");
    circulartravesal(head);
    head = insertAtBetween(head,9,3);
    printf("circular After insert between:\n");
    circulartravesal(head);
}