#include<stdio.h>
int main(void)
{

int a,b,i;

printf("enter two numbers:");
scanf("%d%d",&a,&b);

int result=0;

for(i=0;i<b;i++)
{

result =result+a;


}

printf("a*b=%d",result);







return 0;
}
