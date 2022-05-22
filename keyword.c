1.
#include<stdio.h>
int main()
{
        int x = 10;//int is keyword
        static int y = 10;// static is keyword
        x = x+1;
        y = y+1;
        printf("x = %d y = %d\n",x,y);
        return 0;
}

2.
#include<stdio.h>
int main()
{
        int x = 10;
        static int y = 10;
        float f = 3.14;
        char ch = 'A';
        double d = 2.32789;

        printf("x = %d \n",x);
        printf("y = %d \n",y);
        printf("f = %f \n",f);
        printf("ch = %d \n",ch);
        printf("d = %lf \n",d);
        return 0;
}
