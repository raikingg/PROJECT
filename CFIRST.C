#include <stdio.h>


int main()

{
   
int m1,m2,m3,m4,m5,per;
   
int sum;

   printf("Enter the marks in five subjects: \n");

   scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);

   sum=(m1+m2+m3+m4+m5);

   per=(sum)/5;

   printf("Total sum: %d", sum);

   if(per>=60)

   printf("\n First division");

   if((per>=50)&&(per<60))

   printf("\n Second division");

   if(per>=33)

   printf("\nPassed");

   if(per<33)

   printf("\n Failed");


   return 0;
}
