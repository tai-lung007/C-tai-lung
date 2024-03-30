#include<stdio.h>

int main(void)
{


int i,j,x=0;


for(i=0;i<5;i++)

{
    printf("-----------------------------------------------\n");
printf("i =%d\n",i);
    for(j=i;j>0;j--)
    {
printf("\t\t\t j =%d\n",j);
    x=i+j+1;

printf("\t\t\t\t\t\tx =%d\n",x);
    }


}
printf("--------------------------------------\n");
printf("x =%d\n",x);




return 0;
}




