#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *circulartravesal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d\n",ptr->data);
        ptr =ptr->next;

    } while (ptr != head);

    return head;
}
int main()
{

    // declaration of  Node
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

    head->data =4;
    head->next =second;

    second->data =8;
    second->next =third;

    third->data =10;
    third->next =fourth;

    fourth->data =20;
    fourth->next =head; // instead  of NULL we can use for head 

    circulartravesal(head);

}