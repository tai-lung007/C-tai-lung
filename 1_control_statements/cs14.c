#include<stdio.h>

int main(void)
{
    int n,num,d,sum,cube;
   printf("armstrong numbers are:\n");
   //scanf("");

    for(num=100;num<=99999;num++)
    { 

        n=num;
        sum=0;

       while(n>0){
        //n=num;
        d=n%10;
        n/=10;

        cube=d*d*d;
        sum+=cube;
        }

    if(num==sum)
        printf("%d\n",sum);

    }




return 0;
}
