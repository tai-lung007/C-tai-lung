#include<stdio.h>
int main(void)
{

int dig,sum,num;
printf("enter the number:\n") ;
scanf("%d",&num);
printf("num -->%d",num);
    do
    {
    sum=0;

    while(num>0)
    {

    dig=num%10;
    sum+=dig;
    num/=10;



    }
printf("%d\t",sum);
num=sum;





    }while(num/10!=0);












   

return 0;
}
