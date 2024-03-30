#include<stdio.h>
int sum(int x,int y);
int multiply(int x,int y);
int main(void)
{

    int m=6,n=3;

    printf("%d \n",multiply(m,n));
    printf("%d \n",multiply(15,4));
    printf("%d \n",multiply(m+n,m-n));
    printf("%d \n",multiply(6,sum(6,sum(2,5))));

return 0;
}
int sum(int x,int y)
{

return x+y;

}
int multiply(int x,int y)
{

return x*y;
}
