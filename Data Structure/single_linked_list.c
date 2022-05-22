#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
        int roll;
        char name[20];
        float marks;
        struct student *next;
}ST;
void add_begin(ST **);
void print(ST *);
int main()
{
        ST *hptr = 0;
        char ch;
        do{
        add_begin(&hptr);
        printf("Do u want to add another record(y/n)\n");
        scanf(" %c",&ch);
        }while((ch == 'y')||(ch == 'Y'));

        print(hptr);
}
void add_begin(ST **ptr)
{
        ST *temp = (ST *)malloc(sizeof(ST));
        printf("Enter the roll,name & marks\n");
        scanf("%d%s%f",&temp->name,temp->roll,&temp->marks);

        temp->next = *ptr;
        *ptr = temp;
}
void print(ST *ptr)
{
        while(ptr != 0) {
        printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
        ptr = ptr->next;
       }
}
