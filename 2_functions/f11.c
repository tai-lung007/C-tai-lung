#include<stdio.h>

int main(void)
{


    int s;
    s=func(1,2);
    printf("%d\n",s);
    s=func(1,2,3,4);
    printf("%d\n",s);

return 0;

}

int func(int a , int b,int c)
{
printf("-------inside fun--------------\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
printf("c=%d\n",c);
return a+b+c;

printf("---------outside----------------\n");
}
