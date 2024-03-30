#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{


char arr[5][20]={"xxappla","zabannan","akjcarrot","pldarkchoc","melegance"};
char temp[20];
int i,j;

printf("before sorting \n");
for(i=0;i<5;i++)
{
printf("%s\n",arr[i]);
}

printf("-----------------------------------");
for(i=0;i<5;i++)
for(j=i+1;j<5;j++) {
	if(strcmp(arr[i],arr[j])>0)
	{
		strcpy(temp,arr[i]);
		strcpy(arr[i],arr[j]);
		strcpy(arr[j],temp);



	}

}

printf("after sorting: \n");


for(i=0;i<5;i++)
{

printf("%s \n",arr[i]);
}







return 0;
}
