#include<stdio.h>


int func(int a, int b);
int f1(int x,int y);
int f2(int x,int y);

int main(void)
{
int a,b;
printf("enter a , b:\n");
scanf("%d%d",&a,&b);
printf("%d--->func returns this  ",func(a,b));

return 0;

}

int func(int a, int b)
{
return (a==b)?f1(a,b):f2(a,b);
}
int f1(int x,int y)
{

return x+y;

}
int f2(int x,int y)
{
return x-y;
}
