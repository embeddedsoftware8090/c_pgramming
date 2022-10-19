#include<stdio.h>
int main()
{
    int i ,number,position;
    printf("Enter the number :\n");
    scanf("%d ",&number);
    printf("Enter the  position:\n");
    scanf("%d",&position);
    printf("Given number is\n");
    for ( i = 31; i >=0; i--)

        printf("%d",number>>i&1);
        printf("\n");

    
    printf("Set the bit poition of the given number:\n");
    number=number|1<<position;
    for ( i = 31; i >= 0; i--)

        printf("%d",number>>i&1);
        printf("\n");
    
    
}