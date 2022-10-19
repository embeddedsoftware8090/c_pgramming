#include<stdio.h>
int celsiu(float num);
int forhen(float num1);

int main()
{
    float celsius;
    float forhens;
    int choice;
    printf("Enter the option celsius 1 and forhenheight 2 :\n");
    scanf("%d",&choice);
    if (choice == 1)
    {
        printf("Enter the celsius : \n");
        scanf("%f",&celsius);
        celsiu(celsius);

    }

    else if (choice == 2)
    {
        printf("Enter the forhenheight:\n");
        scanf("%f",&forhens);
        forhen(forhens) ;
    }
    else
    {
    printf("Invalid option \n");
    }  
    
}
int celsiu(float num)
{
    num = num * (9.0/5.0) + 32 ; 
    printf("Celsius is :%f\n",num);
}
int forhen(float num1)
{
    num1 = (num1 -32 ) * 5.0/9.0 ;  
    printf("Forhenheight is :%f \n",num1);
}