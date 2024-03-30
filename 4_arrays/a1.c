#include<stdio.h>

int main(void)
{
int i,arr[10]={1,2,3,4,5,6,7,8,9,10};
int small,large;

for(i=0;i<10;i++)
{
    arr[i]+=10;

printf("%d-->%d\n",i+1,arr[i]);


if(arr[i]<small)
{
    small=arr[i];
}
if(arr[i]>large)
{
    large=arr[i];

}
}
printf("small=%d,large=%d\n",small,large);
return 0;
}
