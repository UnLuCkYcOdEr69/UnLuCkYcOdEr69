#include <stdio.h>

int main()
{
   int i,number,square,sum=0;
   printf("Input the number of terms : ");
   scanf("%d",&number);

   for(i=1;i<=number;i++)
   {

     square=i*i;
     printf("\nThe square natural of %d terms are :%d",i,square);
     sum+=i*i;

   }
   printf("\nThe sum of square natural of %d terms are :%d",number,sum);
return 0;
}
