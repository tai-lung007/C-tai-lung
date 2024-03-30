#include<stdio.h>
int func1(int , int);
int func2(int , int);
int main(void)
{
    
    printf("------INSIDE FUNC 1----------\n");
printf("%d \n",func1(3,8));
printf("-------------------------------\n");
    printf("------INSIDE FUNC 2----------\n");
printf("%d\n",func2(3,8));
printf("-------------------------------\n");
return 0;
}
int func1(int a, int b)
{
    printf("a=%d , b=%d\n",a,b);
    //printf("------------------------------------>%d",b+func1(a,b-1));
if(a>b)
{    printf("a>b here %d>%d\n",a,b);
    return 0;
}
int k;
static int x=0;
x++;
printf("this is %d th time the func 1 is been called \n",x);
k=b+func1(a,b-1);
printf("unwinding phase begun   \n k =%d\n",k);
//return b+func1(a,b-1);
return k;
}
int func2(int a, int b)
{

    printf("a=%d , b=%d\n",a,b);

if(a>b)
{    printf("a>b here %d>%d\n",a,b);
    return 0;
}
int k;
k=a+func2(a+1,b);
printf("unwinding phase now\n k=%d\n",k);
return k;

}
