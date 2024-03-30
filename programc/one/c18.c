#include<stdio.h>

int main(void)
{
int x=1,y=1;


while((x>0)&&(y>0))
{
printf("%16d %16d\n",x,y);
x+=y;
y+=x;


}
printf("%d %d\n",x,y);
return 0;
}
