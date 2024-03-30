#include<stdio.h>

int main(void)
{

char str[]="INDIA";
char *p;
p=str;

while(*p!='\0')
{
 printf("characther = %c\t",*p);
 printf("address = %p \n",p);
        p++;
        
} 



return 0;
}
