#include<stdio.h>
void func1(int , int);
void func2(int ,int);
int main(void)
{
 func1(10,18);
 printf("\n---------------------------------\n");
 func2(10,18);
return 0;
}
void func1(int a, int b)
{
if(a>b)
    return;
printf("%d\n",b);
func1(a,b-1);
}
void func2(int a,int b)
{
if(a>b)
    return ;
func2(a,b-1);
printf("%d\n",b);
}

