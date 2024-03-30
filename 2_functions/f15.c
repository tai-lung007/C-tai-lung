#include<stdio.h>


int square1(int a);
int square2(double a);
double square3(int a);
double square4(double a);

int main(void)
{
    double x=2.5,y;

    y=square1(x);
    printf(" %lf\n",y);
    y=square2(x);
    printf(" %lf\n",y);
    y=square3(x);
    printf("%lf\n",y);
    y=square4(x);
    printf(" %lf\n",y);

return 0;
}

int square1(int a)
{
    printf("int square1(int\n)");
return a*a;
}
int square2(double a)
{
printf("int square2(double\n)");
return a*a;

}
double square3(int a)
{
    printf("double square3(int)\n");
return a*a;
}
double square4(double a)
{
printf("double square4(double)\n");
return a*a;
}
