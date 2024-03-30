#include<stdio.h>

void func(int a,int b);

int main(void)
{

func(1,2);
func(3,4);

return 0;


}
void func(int a,int b)
{
    int static b;

printf("a=%d,b=%d\n",a,b);
a++;
b++;
printf("a=%d,b=%d\n",a,b);

}
