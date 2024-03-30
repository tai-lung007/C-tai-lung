#include<stdio.h>

int main(void)
{
int i,j,temp,arr[10]={1,2,3,4,5,6,7,8,9,10};
for(i=0;i<10;i++)
{
printf("%d-->%d===>%p\n",i+1,arr[i],&arr[i]);
}
printf("=====================================\n");
for(i=0,j=9;i<j;i++,j--)
{
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(i=0;i<10;i++)
{
    printf("%d-->%d===>%p\n",i+1,arr[i],&arr[i]);
}
return 0;
}
