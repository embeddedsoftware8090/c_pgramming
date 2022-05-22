Example 1
#include<stdio.h>  
int binarySearch(int[], int, int, int);  
void main ()  
{  
    int arr[10] = {16, 19, 20, 23, 45, 56, 78, 90, 96, 100};  
    int number, location=0;   
    printf("Enter the item which you want to search : \n");  
    scanf("%d",&number);  
    location = binarySearch(arr, 0, 9, number);  
    if(location != 0)   
    {  
        printf("Item found at location  = %d",location);  
 }  
    else  
    {  
        printf("Item not found");  
    }  
}   
int binarySearch(int a[], int beg, int end, int number)  
{  
    int mid;  
    if(end >= beg)   
    {     
        mid = (beg + end)/2;  
        if(a[mid] == number)  
        {  
            return mid+1;  
        }  
        else if(a[mid] < number)   
        {  
            return binarySearch(a,mid+1,end,number);  
        }  
        else   
        {  
            return binarySearch(a,beg,mid-1,number);  
        }  
      
    }  
    return 0;   
}  

