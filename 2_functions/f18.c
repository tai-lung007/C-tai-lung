#include<stdio.h>

void func(void);

int main(void)
{
int i=5;
for(i=i+1;i<8;i++)
{
    int x=1;
    printf("-----------this is %d time func is being c---------\n",x);
func();
x++;

}
return 0;
}
void func(void)
{
int j;
for(j=1;j<3;j++)
{
printf("j is %d\n",j);
printf("%d\n",++j);
}
}
