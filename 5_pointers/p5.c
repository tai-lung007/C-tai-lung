#include<stdio.h>
#include<stdlib.h>


int main(void)

{

int i;
char *pc=(char *)malloc(6);

for(i=0;i<8;i++)
{
 pc[i]=i;

}

for(i=0;i<8;i++)
{
printf("%d\n",pc[i]);

}

//free(pc);



return 0;


}
