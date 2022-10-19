#include<stdio.h>
int main()
{
        struct
        {
                int number;
                char ch;
                float f;
        }s = {10,'A',4.5};

  printf("%d %c %.2f\n",s.number,s.ch,s.f); //data of members
  printf("%d %c %.2f\n",(&s)->number,(&s)->ch,(&s)->f); //data of members

  printf("%p %p %p\n",&s.number,&s.ch,&s.f); //addr of members
  printf("%p %p %p\n",&(&s)->number,&(&s)->ch,&(&s)->f);//addr of members
}
