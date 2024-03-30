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
int mask,i;
int num;
printf("enter num\n");
scanf("%d",&num);
display_bits(num);

printf("2s compliment : \n");
display_bits(~num+1);



printf("--------------------------------\n");



for(i=0;i<=31;i++)
{
    mask=1<<i;
    //display_bits(mask);
    if(num&mask!=0)
        break;
}
for(i=i+1;i<32;i++)
{

    mask=1<<i;
    num=num^mask;


}

display_bits(num);
return 0;
}
