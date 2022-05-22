Example 1
#include <stdio.h>  

void insert(int a[], int number) /* function to sort an array with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < number; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int number) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < number; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = { 200, 100, 2000, 500 };  
    int number = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array numbers are - \n");  
    printArr(a, number);  
    insert(a, number);  
    printf("\nAfter sorting array numbers are - \n");    
    printArr(a, number);  
  
    return 0;  
}
