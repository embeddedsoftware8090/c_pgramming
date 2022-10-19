// #include<stdio.h>
// void function1()
// {
//     printf("I am Balkumar function1\n");
// }
// // callback function
// void function2(void (*ptr)())
// {
//     (*ptr) (); // callback to function1
// }
// int main()
// {
//     void (*ptr)() = &function1;
//     // calling function function2 and passing
//     // address of the function function1 as argument
//     function2(ptr);
//     return 0;
// }



// #include<stdio.h>
// void my_function() {
//    printf("This is a normal function.\n");
// }
// void my_callback_function(void (*ptr)()) {
//    printf("This is callback function.\n");
//    (*ptr)();   //calling the callback function
// }
// main() 
// {
//    void (*ptr)() = &my_function;
//    my_callback_function(ptr);
// }



#include<stdio.h>
int func(int, int);
int main(void)
{
    int result1,result2;
    /* declaring a pointer to a function which takes
       two int arguments and returns an integer as result */
    int (*ptrFunc)(int,int); 
 
    /* assigning ptrFunc to func's address */                     
    ptrFunc=func; // passing function address
 
    /* calling func() through explicit dereference */
    result1 = (*ptrFunc)(10,20); // dereferencing of the function pointer
 
    /* calling func() through implicit dereference */         
    result2 = ptrFunc(10,20);               
    printf("result1 = %d result2 = %d\n",result1,result2);
    return 0;
}
 
int func(int x, int y)
{
    return x+y;
}

