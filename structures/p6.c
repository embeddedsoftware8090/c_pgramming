//write a program to pass a structure variable to a function.
#include<stdio.h>
struct st
{
        int x;
        char ch;
};
void fun(struct st); // function declaration
int main()
{
        struct st v = {10,'A'};
        fun(v); // function call 
}
void fun(struct st v)
{
        printf("in fun(), %d %c\n",v.x,v.ch); // function definition
}

