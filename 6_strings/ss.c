#include<stdio.h>
#include<stdio.h>

int main()
{

char arr[5][10]={"apple","banana","caramel","darjg","elephant"};

int i;

//printf("%p\n",arr);
//printf("%p",arr[0]);
for(i=0;i<5;i++)
{
printf("string= %s,  \t address of arr[%d]---->%p,\t size of aar[%d] is %zu bytes \n",arr[i],i,arr[i],i,sizeof(arr[i]));

}

return 0;
}
