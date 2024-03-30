#include<stdio.h>
int main(void)
{

    printf("enter the number:\n");
    int n;

    scanf("%d",&n);//dec int but conside it as binary 
int dec=0;
int rem;
int j,d;
j=1;

    while(n>0)
    {
    rem=n%10;
    d=rem*j;
    dec+=d;
    j*=2;
    n/=10;
    }

    printf("the decimal =%d",dec);

return 0;
}
