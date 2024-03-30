#include<stdio.h>
#define MAX 50

int search_linear(int arr[],int n, int item);
void swap_min_zero(int arr[],int n)
{


int temp,min,i,j;
min=0;
for(j=0;j<n;j++)
{

    if(arr[j]<arr[min])
        min=j;



}
if(min!=0)
{


    temp=arr[0];
    arr[0]=arr[min];
    arr[0]=temp;



}

for(i=0;i<n;i++)
   printf("%d",arr[i]);

printf("\n");




printf("---------------------------\n");

}
int search_binary(int arr[], int size, int item)
{

int low=0,up=size-1;
int mid;
while(low<=up)
{
mid=(low+up)/2;

if(item>arr[mid])
    low=mid+1;
else if(item < arr[mid])
    up=mid-1;
else
    return mid;

}


return -1;


}


int main(void)
{

int i,n,item,arr[MAX],index;
printf("enter the number of elements :");
scanf("%d",&n);

printf("enter yhe elements : \n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
//printf("search item :\n");
//scanf("%d",&item);
int s;
printf("------\n1.linear \n2.binaryi\n3.swap\n");
scanf("%d",&s);
if(s==1)
{
    index=search_linear(arr,n,item);
}
if(s==2)
{
    index=search_binary(arr,n,item);

}
if(s==3)
{

swap_min_zero(arr,n);

}
if(index==-1)
    printf("item not found \n");
    else  
    printf("%d fond at pos %d\n",item,index);


return 0;
}



//-------------------------------

//linear search

int search_linear(int arr[], int n,int item)
{
int i=0;

while(i<n && item!=arr[i])
    i++;

if(i<n)
    return i;
else
    return -1;
}
