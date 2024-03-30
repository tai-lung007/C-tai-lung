#include<stdio.h>
int  func(int k);

int main(void)
{
int i=0,k=3;
    i+=func(k);
    
    printf("---------------------------------------->%d\n",i);
    i+=func(k);
    printf("---------------------------------------->%d\n",i);
    i+=func(k);
    printf("---------------------------------------->%d\n",i);
   // i+=func(k);
    //printf("%d\n",i);

return 0;
}

int func(int k)
{

static int m=2;
printf("m=%d, k=%d\n",m,k);
m=m+k;

printf("m=%d, k=%d\n",m,k);
return m;


}
