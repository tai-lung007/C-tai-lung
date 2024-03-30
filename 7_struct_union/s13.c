//pointer to structure variable is sent to a function arguments
#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;                                         //name,rollno,marks
};

void display(struct student *);
struct student* func(struct student * ,struct student * );

int main(void)
{
printf("======================================\n");
struct student * stuptr;                                        //stuptr
struct student stu1={"dev",23,78},stu2 ={"ved",12,89};          // stu1,stu2
printf("======================================\n");
printf("&stu1=%p\t&st2=%p\n",(void *)&stu1,(void *)&stu2);
//printf("%p\t%p\n",&stu1,&stu2);
printf("stu.marks=%p\n",(void *)&(stu1.marks));
printf("======================================\n");
stuptr=func(&stu1,&stu2);
display(stuptr);
printf("======================================\n");
printf("stuptr=%p\n",(void *)&(stuptr));
printf("======================================\n");
return 0;
}
struct student * func(struct student * p1,struct student * p2) //func
{printf("-----INSIDE FUNC----\n");                                                            //p1,p2
    printf("func=%p\n",(void*)&(func));
    printf("p1->marls: %p\n",(void *)&(p1->marks));
 if(p1->marks > p2->marks)
     return p1;
 else
     return p2;
}
void display(struct student * stuptr)
{
printf("name: %s\n",stuptr->name);


}
