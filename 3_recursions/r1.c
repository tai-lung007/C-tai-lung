#include<stdio.h>
void display1(int n);

int main(void)
{
int n;
printf("enter the number n:\n");
scanf("%d",&n);
printf("-----inside d1-------\n");
display1(n);
printf("--------------------------------\n");
//display2(n);


return 0;
}

void display1(int n)
{
//    printf("inside  display -1\n-----------\n");
if(n==0)
    return ;
printf("%d\n",n);

 display1(n-1);
//int i=0;
//i++;
printf("-------->%d\n",n);
//printf("===========\n%d-------->%d\n",i,n);

}
