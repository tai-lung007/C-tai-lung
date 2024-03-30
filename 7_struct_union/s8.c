#include<stdio.h>

struct student 
{
//    int *ptrmem;
char name[25];
int *ptrmem;
};

struct student stu ,*stuptr=&stu;

int main(void)
{
    printf("enter name:\n");
    scanf("%s",stu.name);
    printf("name: %s\n",stu.name);
    int x=10;

    stu.ptrmem=&x;
    printf("==============================\n");
    printf("---------address :-----------\n");
    printf("struct student: %p\n",(void *)&( stu));
    printf("size of struct student: %zu\n",sizeof(struct student));
    printf("&stu.name=%p,    sizeof:%zu\n",&stu.name,sizeof(stu.name));
    printf("&stu.ptrmem=%p   sizeof:%zu\n",&stu.ptrmem,sizeof(stu.ptrmem));
    printf("*ptrmexm= %d",*(stu.ptrmem));

return 0;
}
