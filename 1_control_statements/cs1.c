#include<stdio.h>
#include<limits.h>


int main(void)
{
int a,b,c,big,i;
printf("ENTER THREE NUMBERS:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{

    if(a>c)
        big=a;
    else
        big=c;

}
else
{

if(b>c)
    big=b;
else
    big=c;
}
printf("biggest number is %d \n",big);
int k;
k= printf("MAX INT %d\n",INT_MAX);
printf("\n k is %d\n",k);
int j;
j=k;
printf("\nj is %d\n",j);
printf("char is %c,int is %d\n",j,j);
char m;
m=j;
printf("m is %c\n",m);
m=+100;
printf("------------------------------------------\n");
for(i=0;i<10;i++)
   {

printf("k is %d\n",k);k++;

printf("j is %d\n",j);j++;

printf("m is %c ,m is %d\n",m,m);m++;
   

   }








return 0;

}
