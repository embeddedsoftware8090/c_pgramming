//  #include<stdio.h>
//    struct student
//    {
//        	int roll;
//        	char name[20];
//        	float marks;
//    }student1 = {10,"Balkumar",99.5},student2 = {20,"Vishwakarma",65.6};

//    int main()
//    {
//       	printf("Student Data...\n");
//       	printf("roll - %d   %d\n",student1.roll,(&student1)->roll);
//       	printf("name - %s   %s\n",student1.name,(&student1)->name);
//       	printf("marks- %f   %f\n",student1.marks,(&student1)->marks);
   
    
//       	printf("student data...\n");
//       	printf("roll - %d   %d\n",student2.roll,(&student2)->roll);
//       	printf("name - %s  %s\n",student2.name,(&student2)->name);
//       	printf("marks - %f  %f\n",student2.marks,(&student2)->marks);

//    }

// #include<stdio.h>
// int main()
// {
//     	struct st
//     	{
//             	int number;
//             	char name;
//             	float percent;
//     	};

//     	struct st s;
//     	printf("Enter the structure data 1)int 2)char 3)float\n");
//     	scanf("%d %c%f",&s.number,&s.name,&s.percent);

//     	printf("x - %d  ch - %c  f - %f\n",s.number,s.name,s.percent);
// }


// checking of sizeof declaration data 
#include <stdio.h>
#include <string.h>

struct Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   struct Data data;

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}
