//write a program to scan the data to a structure variable and display it.

#include<stdio.h>
int main()
{
        struct st
        {
                int x;
                char ch;
                float f;
        };

        struct st s;
        printf("Enter the structure data 1)int 2)char 3)float\n");
        //scanf("%d %c%f",&s.x,&s.ch,&s.f);
        scanf("%d %c%f",&(&s)->x,&(&s)->ch,&(&s)->f); // scan data from arrow operator

        //printf("x - %d  ch - %c  f - %f\n",s.x,s.ch,s.f);
        printf("number - %d  character - %c  float - %f\n",(&s)->x,(&s)->ch,(&s)->f);
}
