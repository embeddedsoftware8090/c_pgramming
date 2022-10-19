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
// insertion at the Node
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
    struct Node *Head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *six;
    struct Node *seven;
    struct Node *eigth;
    struct Node *nine;
    struct Node *ten;

    Head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    six = (struct Node *)malloc(sizeof(struct Node));
    seven = (struct Node *)malloc(sizeof(struct Node));
    eigth = (struct Node *)malloc(sizeof(struct Node));
    nine = (struct Node *)malloc(sizeof(struct Node));
    ten = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    Head->data = 10;     //
    Head->next = second; // pointing to next

    // link first and second node
    second->data = 13;
    second->next = third;

    // link second and third node
    third->data = 15;
    third->next = fourth;

    // link third  and fouth node
    fourth->data = 33;
    fourth->next = fifth;

    // link fourth and fifth node
    fifth->data = 57;
    fifth->next = six;

    // link fifth and six node
    six->data = 83;
    six->next = seven;

    // link six and seven node
    seven->data = 160;
    seven->next = eigth;

    // link seven and eight node
    eigth->data = 150;
    eigth->next = nine;

    // link eight and nine node
    nine->data = 140;
    nine->next = ten;

    // terminate the next node
    ten->data = 130;
    ten->next = NULL;
    printf("\n\n Before insertion at the Node:\n");
    linkedListTraveral(Head); // Head only starting the element
    printf("\n\n After insertion at the Node:\n");
    Head = insertAtNode(Head,second,99);// second is location after next insert the number 99
    linkedListTraveral(Head);

    return 0;
}