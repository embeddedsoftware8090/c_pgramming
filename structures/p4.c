// scaning the data and display it

#include<stdio.h>
int main()
{
        struct st
        {
                int number;
                char character;
                float floating_number;
        };

        struct st s;
        printf("Enter the structure data 1)int 2)char 3)float\n");
        scanf("%d %c%f",&s.number,&s.character,&s.floating_number);

        printf("number - %d  character - %c  floating number - %f\n",s.number,s.character,s.floating_number);
}
