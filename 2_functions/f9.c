#include<stdio.h>
void func(void);

int main(void)
{
ab: printf("barrey\n");

//printf("lucknow\n");
//goto ab;

printf("hi\n");

goto gb;


return 0;

}
void func(void)
{
//gb: printf("barrey\n");
goto ab;
}
