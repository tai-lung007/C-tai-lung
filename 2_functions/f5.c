#include<stdio.h>

#include<math.h>

int isprime(int n);

//compile : gcc -o f5 f5.c -lm
//execute: ./f5


int main(void)

{


int num;
printf("entera  number:\n");
scanf("%d",&num);

if(isprime(num))
    printf("number is prime \n");
else
    printf("not a prime \n");


return 0;

}

int isprime(int n)
{

int i;
for(i=2;i<=sqrt(n);i++)
{


  if(n%i==0)
      return 0;



}

return 1;


}
