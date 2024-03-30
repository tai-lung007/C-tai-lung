#include<stdio.h>

void func(int num,int b);


int main(void)
{

int num,ch;
printf("enter a decimeal: ");
scanf("%d",&num);

printf("enter choice\n=====\n1.binary\n2.octal\n3.hexadecimal\n");
scanf("%d",&ch);



switch(ch)
{

case 1:
    printf("binary equivalent :\n");
    func(num,2);
    break;
case 2:
    printf("octal equivalent :\n");
    func(num,8);
    break;
case 3:
    printf("hexadecimal equivalent :\n");
    func(num,16);


}

printf("\n");
return 0;
}
void func(int num, int b)
{
int i=0,j,rem;
printf("inside func:\n`");

char arr[20];
while(num>0)

{

rem=num%b;
num/=b;
if(rem>9 && rem<16)
{
    printf("if ----\n");
    arr[i++]=rem-10+'A';
    printf("--->%c\n",arr[i]);
}
else 
{   
    printf("rem==%c--->%d\n",rem,rem);
    arr[i++]=rem+'0';
}
}

for (j=i-1;j>=0;j--)
{
    printf("%c",arr[j]);
}

}
