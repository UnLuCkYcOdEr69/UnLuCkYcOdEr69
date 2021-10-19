#include <stdio.h>

int main()
{
   int i,number,square;
   printf("Input the number of terms : ");
   scanf("%d",&number);

   for(i=1;i<=number;i++)
   {

     square=i*i;
     printf("\nThe square natural of %d terms are :%d",i,square);
   }
return 0;
}
