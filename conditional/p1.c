/*Write a program in C to create and display Singly Linked List. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

 Data entered in the list :
 Data = 5
 Data = 6
 Data = 7  */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;              // Data of the node
    struct node *nextptr; // Address of the next node
} * structnode;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

int main()
{
    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n); // calling the function 
    printf("\n Data entered in the list : \n");
    displayList(); // calling function
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *temp;
    int num, i;
    structnode = (struct node *)malloc(sizeof(struct node));

    if (structnode == NULL) // check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        // reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        structnode->num = num;
        structnode->nextptr = NULL; // links the address field to NULL
        temp = structnode;
        // Creating n nodes and adding to linked list
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL

                temp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                temp = temp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node *temp;
    if (structnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = structnode;
        while (temp != NULL)
        {
            printf(" Data = %d\n", temp->num); // prints the data of current node
            temp = temp->nextptr;              // advances the position of current node
        }
    }
}

