// #include<stdio.h>
// int main()
// {
//     int days;
//     float years;
//     int months;
//     printf("Enter the number of days:\n");
//     scanf("%d",&days);
//     printf("Days = %d\n",days);
//     years = days/365;
//     months =days/30;
//     printf("years = %f\n",years);
//     printf("Month = %d\n",months);
    
//     return 0;

// }

#include <stdio.h>

int main(void)
{
    int day,year,month,nd;
    printf("Enter number of days :\n ");
    scanf("%d",&day);
    year=day/365; //  day = 369 year is 1 but remainder is 4
    day=day%365; // reminder 4
    month=day/30; // 
    nd=day%30; // day 
    printf("\n%d years, %d months, %d days\n",year,month,nd);
    return 0;
}