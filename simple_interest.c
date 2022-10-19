#include<stdio.h>
#include<math.h>
int main()
{
    int principle;
    float final_interset;
    float rate ;
    int month  ;
    float final_interest;

    printf("Enter the priciple amount:\n");
    scanf("%d",&principle);
    printf("Enter the months:\n");
    scanf("%d",&month);
    printf("Enter the months:\n");
    scanf("%f",&rate);

    final_interest = principle * (rate)/100 * month;

    printf("interest = %.2f \n",final_interest);
   
    return 0;

}

////////////////////////////////
/*
//  C Program to calculate simple interest  

#include<stdio.h>

int main()
{
  float principal,rate,time;
  float simpleInterest;
  printf("Enter the principal amount :: ");
  scanf("%f",&principal);
  printf("\nEnter the rate of interest :: ");
  scanf("%f",&rate);
  printf("\nEnter the time duration :: ");
  scanf("%f",&time);
  simpleInterest=(principal*rate*time)/100;
  printf("\nThe simple interest is %f \n",simpleInterest);

  return 0;
}
*/