Example 1######################################################################################
#include <stdio.h>  
int main()  
{  
typedef unsigned int univision;  //local declaration
univision i,j;  
i=10;  
j=20;  
printf("Value of i is :%d",i);  
printf("\nValue of j is :%d",j);  
return 0;  
} 
 Example 2#########################################################################################
#include<stdio.h>
typedef int INTEGER;//global declaration
int main()
{
    INTEGER var1 = 10;
     printf("%d\n",var1);
    
    return 0;
    
}
Example 3############################################################################################
#include<stdio.h>
typedef float uni;
typedef int   bal;
typedef char ch;
int main()
{
    uni p1 = 10.12,p2 = 12.12;
    bal num1 = 10,num2 = 32;
    ch ch1 = 'B',ch2 = 'A';
    printf("%f %f\n",p1,p2);
    printf("%d %d\n",num1,num2);
    printf("%c %c\n",ch1,ch2);
    return 0;
}

Example 4###########################################################################################
#include<stdio.h>
typedef  int bal;//integer
void foo(bal,bal );
int main()
{
   bal num1 = 20,num2 = 30;
    foo(num1,num2);
    printf("num1 = %d\nnum2 = %d \n",num1,num2);
}
void foo(bal x,bal y)
{
   
   bal num1= 20,num2 = 30,result;
    result = num1 + num2;
    printf("summation of num1 and num2 = %d \n",result);
   
}

Example 5########################################################################################
#include<stdio.h>
typedef  int bal;//integer
typedef float uni;//float
void foo(bal,uni );
int main()
{
    bal num1 = 20;
    uni num2 = 30.12;
    foo(num1,num2);
    printf("num1 = %d\nnum2 = %f \n",num1,num2);
}
void foo(bal x,uni y)
{
   
    bal num1= 20;
    uni num2 = 30.12,result;
    result = num1 + num2;
    printf("summation of num1 and num2 = %f \n",result);
   
}

Example 6##########################################################################################

#include<stdio.h>  
typedef int tech;
void change(tech *num)
{    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}      
int main() 
{    
    tech x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x);    
return 0;  
}    

Example 7##########################################################################################
#include<stdio.h>
typedef int univision;
univision func(univision, univision);
int main(void)
{
    univision result1,result2;
    /* declaring a pointer to a function which takes
       two int arguments and returns an integer as result */
    univision (*ptrFunc)(univision,univision); 
 
    /* assigning ptrFunc to func's address */                     
    ptrFunc=func; 
 
    /* calling func() through explicit dereference */
    result1 = (*ptrFunc)(10,20); 
 
    /* calling func() through implicit dereference */         
    result2 = ptrFunc(10,20);               
    printf("result1 = %d result2 = %d\n",result1,result2);
    return 0;
}
univision func(univision x, univision y)
{
    return x+y;
}


