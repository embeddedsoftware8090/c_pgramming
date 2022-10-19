
// scan two number and print sum 
#include<stdio.h>
int main()
{
    FILE *fptr = fopen("data.txt","r");
    int a;
    fscanf(fptr,"%d",&a); // scan 
    int b;
    fscanf(fptr,"%d",&b);// scan data from file and print 
    fclose(fptr);
    fptr = fopen("data.txt","w"); 
    fprintf(fptr,"%d",a+b); //print the data from  file 
    fclose(fptr); // close successfully and save also
    return 0;
}