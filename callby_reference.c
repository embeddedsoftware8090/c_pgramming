//Call by reference
#include<stdio.h>  
void change(int *num);
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing address in function    
    printf("After function call x=%d \n", x);    
return 0;  
}	
void change(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}   