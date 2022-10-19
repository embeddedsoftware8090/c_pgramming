   //write a program to implement a basic calculator program using function pointer.
   #include<stdio.h>
   #include<stdlib.h>
   int sum(int,int);
   int sub(int,int);
   int mul(int,int);
   int div(int,int);
   int mod(int,int);
   int main()
   {
          int x,y,z,op;
          int (*fp)(int,int);
          printf("Enter the x,y values\n");
          scanf("%d%d",&x,&y);
          printf("Enter the option 1)sum 2) sub 3)mul 4)div 5)mod\n");
          scanf("%d",&op);
  
          switch(op)
          {
                  case 1 : fp = sum; break;
                  case 2 : fp = sub; break;
                  case 3 : fp = mul; break;
                  case 4 : fp = div; break;
                  case 5 : fp = mod; break;
                  default : printf("Invalid option...\n");
                            return 0;
          }
                  z = fp(x,y);
                  printf("z = %d\n",z);
  }
  int sum(int x,int y)
  {
          return x+y;
  }
  int sub(int x,int y)
  {
          return x-y;
  }
  int mul(int x,int y)
  {
          return x*y;
  }
  int div(int x,int y)
  {
          return x/y;
  }
  int mod(int x,int y)
  {
          return x%y;
  }
