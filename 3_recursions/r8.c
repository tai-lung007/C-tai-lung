#include<stdio.h>
int func(int);
int main(void)
{
printf("=====>%d\n",func(14837));
return 0;
}

int func(int n)
{
printf("n=%d\t &n =%p\n",n,&n);

return (n)?n%10 +func(n/10): 0;

//return (n)?n%10 +func(n/10),printf("%d\t",n): 0;
printf("------------------->n=%d\t &n =%p\n",n,&n);
}
