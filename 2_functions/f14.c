#include<stdio.h>
int sum(int a, int b);
int main(void)
{
//(void)
int k= sum(1,2);
printf("%d\n",k);
return 0;
}
int sum(int a, int b)
{

printf("sum is %d\n",a+b);
return a+b;

}
