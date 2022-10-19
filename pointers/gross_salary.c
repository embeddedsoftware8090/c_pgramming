#include<stdio.h>
int main()
{
    int basic_salary;
    int food;
    int house_rent;
    int conveyance;
    int telphone;
    int medical;
    int fixed;
    int gross_salary ;
    int epfo;


    printf("Enter the basic salary allowance :\n");
    scanf("%d",&basic_salary);

    printf("Enter the food allowance:\n");
    scanf("%d",&food);

    printf("Enter the house rent allowance:\n");
    scanf("%d",&house_rent);

    printf("Enter the conveyance allowance:\n");
    scanf("%d",&conveyance);

    printf("Enter the telephone allowance:\n");
    scanf("%d",&telphone);

    printf("Enter the medical allowance:\n");
    scanf("%d",&medical);

    printf("Enter the fixed allowance:\n");
    scanf("%d",&fixed);
    printf("Enter the Epfo allowance:\n");
    scanf("%d",&epfo);

    gross_salary = basic_salary + food + conveyance + telphone + medical + fixed + house_rent + epfo;

    printf("Gross salary of emplyee is : %d\n",gross_salary);

    return 0;
}

/*  C program to calculate Gross Salary of an employee  */

// #include <stdio.h>
 
// int main()
// {
  
//     char name[30];
//     float basic, hra, da, pf, gross;
 
//     printf("Enter name: ");
//     gets(name);
 
//     printf("Enter Basic Salary: ");
//     scanf("%f",&basic);
//     printf("Enter HRA: ");
//     scanf("%f",&hra);
//     printf("Enter D.A.: ");
//     scanf("%f",&da);
     
//     /*pf automatic calculated 12%*/
//     pf= (basic*12)/100;
 
//     gross=basic+da+hra+pf;
 
//     printf("\nName: %s \nBASIC: %f \nHRA: %f \nDA: %f \nPF: %f \n***GROSS SALARY: %f ***",name,basic,hra,da,pf,gross);
     
//     return 0;
// }