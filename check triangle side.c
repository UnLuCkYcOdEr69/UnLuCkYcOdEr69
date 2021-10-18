#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c;
printf("Enter the 1st side of triangle(in CMs):");
scanf("%d",&a);
printf("\n");
printf("Enter the 2nd side of triangle(in CMs):");
scanf("%d",&b);
printf("\n");
printf("Enter the 3rd side of triangle(in CMs)");
scanf("%d",&c);
printf("\n");

if(a==b && b==c){
    printf("It's a equilateral triangle");
}
else if (a==b || b==c || a==c)
{
    printf("It's a isosceles triangle");
}
else
{
    printf("It's a scalene trangle");
}
return 0;

}
