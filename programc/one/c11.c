#include<stdio.h>
#define MAX(x,y) ((x)>(y))? (x):(y)


main()
{


int i=10,j=5,k=0;

k=MAX(i++,++j);


printf("\ni=%d j= %d  k=%d\n ",i,j,k);
}
