#include<stdio.h>

int main(void)
{
int rem;


int n;

printf("enter the number:");
scanf("%d",&n);

int sum=0;

for(;n>0;n/=10)
{
rem=n%10;
sum+=rem;


}
printf("sum is %d\n",sum);









return 0;
}
