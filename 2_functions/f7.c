#include<stdio.h>
double power(double a, int n);
#include<math.h>
#include<stdlib.h>


int main(void)
{
    double a;
    int n;

    printf("enter base\n");
    scanf("%lf",&a);

    printf("enter the exponent\n");
    scanf("%d",&n);

    printf("base %lf exp =%dis ==>%lf\n",a,n,power(a,n));

return 0;
}
double power(double a, int n)
{

     int i;
     double p=1;

     if(n==0)
         return i;
     else
     {
       for(i=1;i<=abs(n);i++)
       {
        
        p=p*a;

       }

if(n>0) 
    return p;
else
    return 1/p;

     }

}
