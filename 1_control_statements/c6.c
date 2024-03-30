//type conversion in assignment


#include<stdio.h>


int main(void)
{
char c1,c2;
int i1,i2;
float f1,f2;

printf("\n---------char -c1---\n");
printf("%c  ,address c1=%p,int casted is %d-----\nunintialised valuesare assigned value 0 with a valid address>\n",c1,&c1,c1);
c1='H';//char

printf("%c,address is %p\n",c1,&c1);
printf("\n\n------------------------------------------\n");

printf("value of i1is %d, address of i1 is %p , charval of i1 is %c",i1,&i1,i1);
i1=80.56;//float is assigned to int
printf("\nvalue of i1is %d, address of i1 is %p , charval of i1 is %c",i1,&i1,i1);


printf("\n----------------------------\n");

printf("f1 value is %f, address f1is %p",f1,&f1);

f1=12.6;//float

printf("\n f1 value is %f, address f1is %p",f1,&f1);

printf("\n----------------------------\n");

c2=i1;//int is assigned to char
printf("%");
i2=f1;//float is assigned or stored in int
printf("c2 =%c,i2=%d"c2,i2);
printf("");

printf("\n-----------------------\n");






return 0;
}
