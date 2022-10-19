#include<stdio.h>

    struct student
    {
        int roll_number;
        char name[20];
        float percentage;

    };//student1 = {100,"Balkumar",81.5},student2 = {200,"Rohan",90.02};
 int main()
 {
    struct student student1 = {10,"Balkumar",99.99},student2 = {20,"Hello",3.14};
    
    printf("Roll number =%p  %p \n",student1.roll_number,(&student1)->roll_number);
    printf("Name        =%s  %s \n",student1.name,(&student1)->name);
    printf("Percentage  =%f  %f \n",student1.percentage,(&student1)->percentage);

    printf("Roll number %d %d \n",student2.roll_number,(&student2)->roll_number);
    printf("Name %s %s \n",student2.name,(&student2)->name);
    printf("Percentage %f %f \n",student2.percentage,(&student2)->percentage);
 }