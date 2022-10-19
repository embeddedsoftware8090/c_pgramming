#include<stdio.h>
int main()
{
	int i=0,j=0;
	int arr[4][3]={{10,20,30},{40,50,60},{70,80,90},{4,5,6}};
	for(i=0;i<4;i++)
    	{
    	for(j=0;j<3;j++)
            	{
             	printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
             	}
	}
	return 0;
	}

