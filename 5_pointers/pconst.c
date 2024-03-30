#include<stdio.h>

const int a=10;
int main(void)
{

int * ptr =&a;
*ptr =a;

printf("ptr =%d\n",*ptr);

return 0;
}

/*
initialization discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    7 | int * ptr =&a;
      |            ^


   */
