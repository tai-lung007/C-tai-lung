#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks;
};
int main(void)
{
struct student stu={"bharath",7,97};
struct student stu1={"catlove",8,99};
printf("&stu     =%p    sizeof(stu):  %zu\n",&stu,sizeof(stu));
printf("====================================\n");
//printf("&stu     =%p    izeof(stu): \n",(void *)&(stu));
printf("&stu.name=%p    size of name: %zu\n",(void *)&(stu.name),sizeof(stu.name));
printf("&stu.roll=%p    sizeof roll  :%zu\n",(void *)&(stu.rollno),sizeof(stu.rollno));
printf("&stu.mark=%p    sizeof mark:  %zu\n",(void *)&(stu.marks),sizeof(stu.marks));

//pointers to structures
printf("=====================================\n") ;
struct student * ptr;
printf("address hold by ptr before assigning =%p\n",ptr);
//ass
ptr=&stu;
printf("address hold by ptr after  assigning =%p\n",ptr);
//printf("%s\n",*ptr);
//printf("%c\n",*ptr);
printf("=========================================\n");
printf("ptr->name %s\n ptr->rollno %d \n ptr->marks %d\n",ptr->name,ptr->rollno,ptr->marks);
printf("==========================================\n");
printf("%p-%zu\n%p-%zu\n%p-%zu\n",ptr->name,sizeof(ptr->name),(void *)&(ptr->rollno),sizeof(ptr->rollno),(void *)&(ptr->marks),sizeof(ptr->marks));
printf("==============================================\n");
ptr++;

printf("%p\n",ptr);
return 0;
}
