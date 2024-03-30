#include<stdio.h>

#include<math.h>
mult(int a , int b)
{
return a*b;
}
int main(void)
{

int m=3,k;
k=mult(m,m++);

int i=3;
printf("\n %d \n",k);
k=mult(i++,i);
printf("\n%d\n",k);
int j=3;
k=mult(i--,i);
printf("\n%d\n",k);
return 0;
}
