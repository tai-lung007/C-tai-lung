#include<stdio.h>

int main(void)
{


int n,sum=0,rem;


int i=0;

printf("entera number:");
scanf("%d",&n);

printf("\n---------------\n");

while (n>0)

{

printf("n is %d, rem is %d, sum is %d\n",n,rem ,sum);

rem=n%10;


printf("n is %d, rem is %d, sum is %d\n",n,rem ,sum);


sum+=rem;


printf("n is %d, rem is %d, sum is %d\n",n,rem ,sum);

n/=10;


printf("n is %d, rem is %d, sum is %d\n",n,rem ,sum);

//int i=0;
i++;
printf("loop ends---->%d \n",i);

}









printf("sum is %d\n", sum);

return 0;
}
