#include<stdio.h>

struct student
{
char name[20];
int rollno;
int marks;
};
void display(struct student);
struct student change(struct student stu);
int main()
{
struct student stu1={"john",12,87};

struct student stu2={"john",20,109};
printf("%p\t%p\n========================\n",(void *)&(stu1),(void*)&stu2);
stu1=change(stu1);
stu2=change(stu2);
display(stu1);
display(stu2);
return 0;
}
struct student change(struct student stu)
{
stu.marks=stu.marks+5;
stu.rollno=stu.rollno-10;
return stu;

}
void display (struct student stu)
{
printf("name: %s\troll no: %d\tmarks: %d\n",stu.name,stu.rollno,stu.marks);

printf("\n%p\n-----------------\n",(void *)&(stu));
}
