#include
#include <stdio.h>

int main()
{
   /*
    * Output using the C standard library printf function
    * defined in the stdio.h header file
    */
    printf(" %d\n", 2003);

    return 0;
}

#define 
#include <stdio.h>
#define NAME "univision"
#define AGE 10

int main()
{
   printf("%s is over %d years old.\n", NAME, AGE);
   return 0;
}

#undef

#include <stdio.h>  
#define number 15  
int square=number*number;  
#undef number  
main() {  
   printf("%d",square);  
}  
Macros :#####################################################################

Predefined macro ############################################################
#include<stdio.h>  
 int main(){    
   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   printf("STDC :%d\n", __STDC__ );      // compiler conforms to ISO Standard C
   return 0;  
 }
 User define macro ####################################################################
1.Object macro(without argument)
######################################################################################
#include <stdio.h>  
#define PI 3.14  
int main() {  
   printf("%f",PI);  
   return 0;
}  

2.function macro(with argument)

#include <stdio.h>  
#define MIN(a,b) ((a)<(b)?(a):(b))  
void main() {  
   printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));    
  
}  

#include <stdio.h>
int main()
{
   int x =10 ,y = 20,result ;
   result = ( x > y  ? "univision" : "not univision" ) ;
   printf("result is = %s \n",result );
}

