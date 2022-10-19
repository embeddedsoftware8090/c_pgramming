#include<stdio.h>
int main()
{
    int length;
    int width;
    int area;

    printf("Enter the length:\n");
    scanf("%d",&length);
    printf("Enter the width:\n");
    scanf("%d",&width);

    area = length *width ;
    printf("The Area of Rectangle is :%d\n",area);

    return 0;

}