#include<stdio.h>

void display_bits(int x)
{
int i, mask;
for(i=31;i>=0;i--)
{
 mask=1<<i;
 putchar((x&mask)?'1':'0');

 if(i%4==0)
    putchar(' ');

}

printf("\n");
}

int main(void)
{
unsigned int n=2004;
printf("n\n");
display_bits(n);
/*
printf("n&1\n");
display_bits(n&1);
printf("n|1\n");
diplay_bits(n|1);
*/
printf("===============\n");
printf("n-1\n");
display_bits(n-1);

printf("n&n-1----->clears the rightmost 1 bit\n");
display_bits(n&n-1);
printf("===============\n");





return 0;
}

