#include<stdio.h>

int  main(void)
{
int n,count=0,rem;
printf("entera number");
scanf("%d",&n);
do{
    n/=10;
    count++;

}while(n>0);
printf("\n%d\n",count);

return 0;
}
