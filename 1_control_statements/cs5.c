#include<stdio.h>
#include<limits.h>


int main(void)
{


int n, num;
long fact=1;
printf("entera number :\n");
scanf("%d",&n);
num=n;
printf("the ranges of ld is\n");
printf("--------------------------\n");

printf("limits of  long:----\n min long is =%ld, max is =%ld\n",LONG_MIN,LONG_MAX);
long k=LONG_MAX;
printf("k is %ld\n",k);
    printf("fact =%ld,n =%d,num =%d",fact,n,num);
if(n<0||fact<0||fact>k)  printf("not possi")  ;
else
{
    printf("compute engine starts for fact mission ");
    while (n>1)
        {   
    printf("fact =%ld,n =%d,num =%d\n",fact,n,num);
fact*=n;
    printf("fact =%ld,n =%d,num =%d\n",fact,n,num);
n--;
    printf("fact =%ld,n =%d,num =%d\n",fact,n,num);
}
}
printf("factorial of %d = %ld\n",num,fact);


return 0;

}
