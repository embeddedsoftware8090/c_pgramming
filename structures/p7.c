//write a program the functions scan() and print() to scan and print the struct variable data. 
#include<stdio.h>
struct st
{
        int x;
        char ch;
};
void scan(struct st *); // struct function declartion 
void print(struct st);
int main()
{
        struct st v;
        scan(&v); // struct function call
        print(v);
}
void scan(struct st *p)
{
        printf("enter the data 1)int 2)char\n");
        scanf("%d %c",&p->x,&p->ch);
}
void print(struct st v)
{
        printf("v.x = %d  v.ch = %c\n",v.x,v.ch); // struct function definition
}
