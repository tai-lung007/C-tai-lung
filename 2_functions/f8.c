#include<stdio.h>

int func(int n,int base)
{

int rem,d,j=1,dec=0;

while(n>0)
{
rem =n%10;
d=rem*j;
dec+=d;
j*=base;
n/=10;
}


}

int main(void)
{
int num,base,result;

char choice;

printf("enter b:bimary o:octal\n");
scanf("%c",&choice);


printf("enter a number\n");
scanf("%d",&num);



base=(choice=='b')?2: 8;

result=func(num,base);

printf("decimal number is %d\n",result);



return 0;

}
