#include<stdio.h>

int main(void)
{

int a=11,b=0,c=0;
printf("a =%d\n",a);
printf("what is !a --> %d",!a);

printf("\nwhat is a<10 --> %d\n",a<10);
printf("\nwhat is !a<10 --> %d\n",!a<10);

printf("\nwhat is a<10 --> %d\n",a<10);
printf("\n-------------------------\n");

if(!a<10 && !b||c)
   printf("c in depth");
else
    printf("nope ");



return 0;
}
