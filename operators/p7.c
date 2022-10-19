// perimeter of rectangle 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
int perimeter;
int area;
int length =100 ;
int width = 100 ;
area = length * width;
perimeter = 2 * (length  + width);
printf( "perimeter = %d\n",perimeter); 
printf( "area = %d\n",area);

 return 0;
}