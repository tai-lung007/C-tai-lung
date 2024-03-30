#include<stdio.h>
int main(void)
{
int n,prod=1,rem;
int i=0;
printf("enter a number :\n");
scanf("%d",&n);
printf("==========================================\n");
while (n>0)
{

 printf("rem =%d,n =%d,prod =%d\n",rem,n,prod);
 rem=n%10;
 printf("rem =%d,n =%d,prod =%d\n",rem,n,prod);
 prod*=rem;
 printf("rem =%d,n =%d,prod =%d\n",rem,n,prod);
 n/=10;

 printf("rem =%d,n =%d,prod =%d\n",rem,n,prod);
i++;
printf("loop ends -----> %d\n",i);


}

 printf("prod =%d\n",prod);
return 0;

}
