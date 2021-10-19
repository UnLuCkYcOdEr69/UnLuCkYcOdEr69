#include<stdio.h>
int main()
{int  x , y , z ;
printf("Enter the first number: ");
scanf("%d",&x);
printf("Enter the second number: ");
scanf("%d",&y);
printf("Enter the three number: ");
scanf("%d",&z);

printf("The order is: ");
if (x>y && y>z){printf("%d ; %d ; %d ",x,y,z);}

else if (x>z && z>y){printf("%d ; %d ; %d ",x,z,y);}

else if (y>x && x>z){printf("%d ; %d ; %d ",y,x,z);}

else if (y>z && z>x){printf("%d ; %d ; %d ",y,z,x);}

else if (z>x&&x>y){printf("%d ; %d ; %d ",z,x,y);}

else if (z>y&&y>x){printf("%d ; %d ; %d ",z,y,x);}

else {printf("Can't be ordered because two or more inputs are EQUAL !!");}

return 0;}
