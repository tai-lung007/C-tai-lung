#include<stdio.h>

#define PRINT(int) printf("int =%d",int)

main()
{

int x,y,z;

x=3;
y=2;
z=1;

PRINT(x^x);
printf("\n");
PRINT(y);
printf("\n");
y<<=3;
PRINT(y);
printf("\n");
y>>=3;
PRINT(y);

printf("\n");
z>>=3;
PRINT(z);
printf("\n");
}
