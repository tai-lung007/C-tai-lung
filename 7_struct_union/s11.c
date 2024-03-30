#include<stdio.h>

struct student
{
char name[20];
int rollno;
int marks;
};

void display(struct student *);
void inc_marks(struct student *);

int main(void)
{

struct student stu1={"john",12,97};
struct student stu2={"marry",13,90};

printf("()name : %s\t %p\n",stu1.name,&(stu1.name));
printf("()rollno: %d\t %p\n",stu1.rollno,&(stu1.rollno));
printf("()marks: %d\t %p\n",stu1.marks,&(stu1.marks));
printf("-=============-==========-=\n");
printf("()name : %s\t %p\n",stu2.name,&(stu2.name));
printf("()rollno: %d\t %p\n",stu2.rollno,&(stu2.rollno));
printf("()marks: %d\t %p\n",stu2.marks,&(stu2.marks));
printf("-=============-==========-=\n");
inc_marks(&stu1);
inc_marks(&stu2);

display(&stu1);
display(&stu2);


return 0;
}

void inc_marks(struct student *stuptr)
{
  (stuptr->marks)++;
}
void display(struct student *stuptr)
{

printf("()name : %s\t %p\n",stuptr->name,&(stuptr->name));
printf("()rollno: %d\t %p\n",stuptr->rollno,&(stuptr->rollno));
printf("()marks: %d\t %p\n",stuptr->marks,&(stuptr->marks));

}














