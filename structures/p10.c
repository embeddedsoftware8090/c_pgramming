// #include<stdio.h>
// struct st
// {
//         int x;
//         int *p; // pointer declaration 
// };
// int main()
// {
//    struct st v = {10,&v.x};
//    struct st *p = &v; // 

//    printf("&v.x = %p\n",&v.x);
//    printf("%d  %p\n",p->x,p->p);
//    printf("%d %d\n",*p->p,*((*p).p));
// }



// #include<stdio.h>
// struct st
// {
//         int x;   
//         int y; 
//         int z;  
// };
// int main()
// {
//         auto struct st v1;
//         static struct st v2;
//         register struct st v3;
// }


// #include<stdio.h>
// struct st1
// {
//         int x;
//         struct st2
//         {
//                 int y;
//                 struct st3
//                 {
//                         int z;
//                 }v3;
//         }v2;
// }v1 = {10,{20,{30}}};
// int main()
// {
//         printf("v1.x = %d\n",v1.x);
//         printf("v1.v2.y = %d\n",v1.v2.y);
//         printf("v1.v2.v3.z = %d\n",v1.v2.v3.z);

//         printf("%d\n",v2.y);
// }



// #include<stdio.h>
// struct st
// {
//         int x;
//         int y;
// };
// int main()
// {
//         struct st v1 = {10,20},v2 = {11,22},v3;
//         //v3 = v1 + v2; //invalid       
//         v3.x = v1.x + v2.x;
//         v3.y = v1.y + v2.y;
//         printf("%d %d\n",v3.x,v3.y);
// }
/* 
Note : Only some of the operators can perform its operations directly on structure variable like (., -> , *, &, [], sizeof )
*/



// #include<stdio.h>
// struct st1
// {
//         int x;
//         int y;
// };
// struct st2
// {
//         int a;
//         int b;
// };
// int main()
// {
//         struct st1 v1;
//         struct st2 v2 = {10,20};
//         v1 = v2; //invalid
// }
// //Note : Assignment b/w 2 different structure variable is invalid invalid.




// #include<stdio.h>
// struct st
// {
//         int x;
//         int y;
// };
// int main()
// {
//         struct st v1,v2 = {10,20};
//         v1 = v2; //valid
// }
//Note : Assignment b/w same structure variable is valid.

