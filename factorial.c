#include<stdio.h>
int main()
{
int value,i,factorial=1;
printf("Enter the value:");
scanf("%d",&value);
    //shows error if user enter a negative number
if (value<=0){
    printf("Error!!, Factorial of negative number doesn't exsists.");
}
else{
        for(i=1;i<=value;++i)
{
factorial*=i;
}
    printf("The factorial of %d th term is:%d\n",value,factorial);
}

return 0;

}
