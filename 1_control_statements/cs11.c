#include<stdio.h>


int main(void)
{int n;

    printf("enter the number of terms");
    scanf("%d",&n);

    //x,y,z
    //z=x+y
    //x=y,y=z
    int i,x=0,y=1;
    int z;
//int n;


       for(i=0;i<n;i++)
    {
        z=x+y;
        printf("%d\t",z);
        x=y;
        y=z;



    }

printf("\n");







return 0;
}
