#include<stdio.h>

int reverse(int n);

int main(void)
{
int n;
printf("enter the number:");
scanf("%d",&n);

printf("rev is %d\n",reverse(n));
return 0;
}

int reverse(int n)
{
    printf("-----------------INSIDE FUNCTION---------------\n");
int rev=0;
do
{
          printf("n= %d, rev =%d\n",n,rev);
          rev=rev*10+ n%10;
          printf("n= %d, rev =%d\n",n,rev);
          n/=10;
          printf("n= %d, rev =%d\n",n,rev);
}while(n>0);

return rev;
}
