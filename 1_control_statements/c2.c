#include<stdio.h>


int main(void)
{

float b=123.456;
float c=345.1265;


printf("b=123.456");
printf("\n------------------------\n");
printf("float valueis  %f\n",b);
printf("decimal value%d\n",(int)b);
printf("6.3f is %6.3f\n",b);
printf("2.4f is %2.4f\n",b);

printf("------------------------\n");

printf("hex is %x\n",(unsigned int)b);
printf("oct is %o\n",(unsigned int)b);

printf("char is %c\n",(int)b);
//printf("str is %s",(void *)b);


printf("\n------------------------\n");

printf("c=345.1265");
printf("\n------------------------\n");
printf("float value is  %f\n",c);
printf("decimal value%d\n",(int)c);
printf("6.3f is %6.3f\n",c);
printf("2.4f is %2.4f\n",c);


return 0;
}
