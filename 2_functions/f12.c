#include<stdio.h>
int func(int a, int b);
int main(void)
{
 int x;
 x=func(7,3);
 printf("x =%d\n",x);
 return 0;
}

int  func(int a,int b)
{

int s;
s=a+b;
return s;
//return ;

}
