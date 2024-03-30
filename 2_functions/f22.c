#include<stdio.h>

void func(int a,int b);

int main(void)
{
int i=5,j=10;
printf("a=%d,b=%d\n",i,j);
func(i/2,j%3);

//printf("i/2=%d,jr3=%d\n",i,j);
return 0;
}

void func(int a, int b)
{
printf("a=%d,b=%d\n",a,b);
a/=2;
printf("a/=2-->%d\n",a);
b--;
printf("b-- is %d\n",b);
printf("%d\n",a+b);


}
