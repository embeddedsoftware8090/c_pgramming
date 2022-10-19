#include <stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    // start searching element
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element){
        return mid;
        }
        if (arr[mid]<element)
        {
            low = mid + 1;
        }
        
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,3 ,5,6,8,9,10,22,33,44,66};
    int size = sizeof(arr)/sizeof(int);
    int element = 5;
    int search = binarySearch(arr,size,element);
    printf("The element %d was found at index %d\n",element,search);
    return 0;
}


// #include<stdio.h>
// int binarySearch(int[], int, int, int);   // function declaration
// void main ()
// {
//     int arr[10] = {16, 19, 20, 23, 45, 56, 78, 90, 96, 100};   // binary element need to be sorted
//     int number, location=0;
//     printf("Enter the item which you want to search : \n");
//     scanf("%d",&number);  // number want to search
//     location = binarySearch(arr, 0, 9, number);
//     if(location != 0)
//     {
//         printf("Item found at location  = %d",location);
//     }
//     else
//     {
//         printf("Item not found");
//     }
// }
// int binarySearch(int a[], int beg, int end, int number)
// {
//     int mid;
//     if(end >= beg)
//     {
//         mid = (beg + end)/2;  // logic for getting medium
//         if(a[mid] == number)
//         {
//             return mid+1;
//         }
//         else if(a[mid] < number)
//         {
//             return binarySearch(a,mid+1,end,number);
//         }
//         else
//         {
//             return binarySearch(a,beg,mid-1,number);
//         }
//     }
//     return 0;
// }
