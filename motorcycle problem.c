#include<stdio.h>
int main()
{int distance,fuel;
distance=1;
printf("Enter the amount of fuel(in 'L'):");
scanf("%d",&fuel);

while(fuel>0 && fuel>=distance){
        if(distance%6==0)
            fuel+=5;
        distance++;
}
printf("You can travel %d",distance);

return 0;


}
