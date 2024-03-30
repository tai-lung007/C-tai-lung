#include<stdio.h>


int main(void)
{

int sum=0,term=1,i,n;
    printf("enter number of terms:\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("n=%d,term=%d,sum=%d\n",n,term,sum);
        sum+=term;
        printf("n=%d,term=%d,sum=%d\n",n,term,sum);
        term+=i;

        printf("n=%d,term=%d,sum=%d\n",n,term,sum);

    }
    printf("sum =%d\n",sum);
return 0;
}
