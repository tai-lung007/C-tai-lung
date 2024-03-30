#include<stdio.h>
#include<limits.h>


int main(void)
{

//declarations
    char ch;

    printf("enter a charachter\n");
    scanf("%c",&ch);
    printf("%c , %d\n",ch,ch);


//backslash r 
    printf("Indian\b \n");
    printf("New\rDelhi\n");
    printf("bharath\rpagadalabi\rbharathreddy\n");

 //integers in dec,oct,hexa
    int a=11;
    printf("decimal integgera=%d\t",a);
    printf("octalintegera=%o\t",a);
    printf("hexadecinta=%x\t",a);
    printf("HexDecInta=%X\t\n",a);

 //unsigned integers
    int c=40000000;
    unsigned int b=40000000;
    if(c=b)
    {
    printf("yes\n");
    }
    else
    {
    printf("no\n");
    }
    printf("c=%d ,b=%u \n",c,b);

    printf("c=%d ,b=%u \n",INT_MAX,UINT_MAX);
//printf("c=%d ,b=%u \n",INT_MIN,INT_MIN);

return 0;


}
