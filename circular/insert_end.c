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
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *ptr = head;
    ptr->data = data;
    struct Node *p = head->next;

    while (p->next != head) // here will get last node of circular list
    {
        p = p->next;
    }
    // at this point p point to last node of this circular linked list
    p->next = ptr;
    ptr->next = head;

    return head;
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

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = head; // instead  of NULL we can use for head
    printf("circular before insert:\n");
    circulartravesal(head);
    head = insertAtEnd(head, 60);
    printf("circular After insert:\n");
    circulartravesal(head);
}