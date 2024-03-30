#include<stdio.h>

int main(void)
{
int i,j;

for(i=0;i<8;i++)
{

    for(j=0;j<8;j++)
    {

        if(i==j)
            printf("\\");
        else if((i+j)==6)
            printf("/");
        else
        printf("*");



    }

printf("\n");


}
return 0;
}
