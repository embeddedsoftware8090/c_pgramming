#include<stdio.h>
struct st
{
        int x;
        char ch;
};
int main()
{
        struct st v;
        struct st *p = &v;
      
        printf("Enter the x,ch values\n");
        scanf("%d %c",&p->x,&p->ch); // 
        printf("print --> %d %c\n",p->x,p->ch);
/*
        printf("Enter the x,ch values\n");
        scanf("%d %c",&(*p).x,&(*p).ch); // scaning data from user 
        printf("print --> %d %c\n",(*p).x,(*p).ch);
*/

}   




