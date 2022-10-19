// #include<stdio.h>
// int main()
// {
//     int array[6] = {10,20,30,40,50,60};
//     int *pointer =&array;
//    // pointer =array;
//     printf("array size  = %d\n",sizeof(array));// size of pointer to an array
//     printf("pointer size = %d\n",sizeof(pointer));
//     printf(" %p \n %p \n %p \n %p \n",pointer[0],pointer[1],pointer[2],pointer[3]);
// }

   #include<stdio.h>
   int main()
   {
           int a[] = {10,20,30,40,50,60,70,80,90};
           int *p;
           int (*q)[3];
           p = a; //pointer to an integer
           q = (int(*)[3])a; //pointer to an array  
           printf("%d  %d\n",sizeof p,sizeof q);
  
          printf("p = %p  p+1 = %p\n",p,p+1); //1000 , 1004
          printf("q = %p  q+1 = %p\n",q,q+1); //1000 , 1012
 
//   }
          //p = a; --> int * = int *
          //q = a; --> int (*)[3] = int * //warning
          //&a --> int (*)[9]; 
          //q = &a; --> int (*)[3] = int (*)[9] //warning
 
