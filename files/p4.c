// print sting in the from files 

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr =fopen("data.txt","r"); // open the file with read mode
    char ch;
    ch =fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch); 
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr); // close the file successfully
    return 0;
    
}