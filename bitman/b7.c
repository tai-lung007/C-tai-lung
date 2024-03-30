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
int main()
{

int table[]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};


unsigned x=1024;

display_bits(x);

int count =0;
while(x!=0)
{

  count += table[x&0xF];
  x>>=4;


}


printf("count---> %d\n",count);

return 0;
}
