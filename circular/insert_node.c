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
// circular insertion at the Node
struct Node *insertAtNode(struct Node *Head,struct Node *prevNode, int data)// paased three arguments 
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));// allocate memory for new data which we are going to insert

    ptr->data = data; // ptr point to new data and new data is equal to data
    ptr->next =prevNode->next;// ptr point to pointer previous data 
    prevNode->next = ptr; // previous node point to next pointer of ptr address
    
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

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = head; // instead  of NULL we can use for head


    printf("circular before insert node :\n");
    circulartravesal(head);
    head = insertAtNode(head,second,6);
    printf("circular After insert node:\n");
    circulartravesal(head);
}