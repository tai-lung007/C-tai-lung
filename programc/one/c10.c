#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int *p,*c,i;


i=5;

p= (int *)(malloc(sizeof(i)));
printf("\n %d\n",*p);
*p=110;
printf("\n %d\n",*p);

c=(int *)calloc(2,2);
printf("\n %d\n",*c);




return 0;
}
