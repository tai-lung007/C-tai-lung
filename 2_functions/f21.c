#include<stdio.h>

int func(int a , int b);

int main(void)
{
int i=2,j=3;

printf("func(i,j) returned from func is -=====-%d \n",func(i,j));

return  0;

}

int func(int a,int b)

{
a=a-5;
b=b+5;

printf("%d--->a\n%d--->b\n",a,b);
printf("!a is %d\n",!a);

}
