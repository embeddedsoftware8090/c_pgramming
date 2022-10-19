// #include<stdio.h>
// #include<stdlib.h>
// typedef struct student // structure declaration
// {
//         int roll;
//         char name[20];
//         float marks;
//         struct student *next;
// }ST;
// void add_begin(ST **); // function declaration
// void print(ST *ptr);  
// int main()
// {
//         ST *hptr = 0; // header pointer
//         char ch;
//         do{
//         add_begin(&hptr); // calling the header pointer
//         printf("Do u want to add another record(y/n)\n");
//         scanf(" %c",&ch);  // scanning the pointer
//         }while((ch == 'y')||(ch == 'Y'));

//         print(hptr);
// }
// void add_begin(ST **ptr)
// {
//         ST *temp = (ST *)malloc(sizeof(ST));
//         printf("Enter the roll,name & marks\n");
//         scanf("%d%s%f",&temp->name,temp->roll,&temp->marks);
//         temp->next = *ptr;
//         *ptr = temp;
// }
// void print(ST *ptr)
// {
//         while(ptr != 0) {
//         printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
//         ptr = ptr->next;
//         }
// }



#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                        //Data of the node
    struct node *nextptr;           //Address of the next node
}*stnode;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

int main()
{
    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n); // function call
    printf("\n Data entered in the list : \n");
    displayList();// function call
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp; // creating a node
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node)); // allocate the memory 

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated."); // if condition is true the print memory is not allocated
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;      
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++) // condition true the allocate the memory
        {
            fnNode = (struct node *)malloc(sizeof(struct node));//memory allocate 
            if(fnNode == NULL) // if condition is true then memory not allocated otherwise esle part executed
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
 
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr; 
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)  // check condition list empty or not
        {
            printf(" Data = %d\n", tmp->num);       // prints the data of current node
            tmp = tmp->nextptr;                     // advances the position of current node
        }
    }
} 





