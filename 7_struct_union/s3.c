#include<stdio.h>
struct box
{
char name[20];
int roll;
float mark;
}b1,b2;
struct student
{
int roll;
float mark;
char name[20];
};
int main(void)
{
struct student stu1={23,45.67,"marry"}; 
printf("%d\t%f\t%s\n",stu1.roll,stu1.mark,stu1.name);
struct student stu2={45,77.67,"bharath"}; 
printf("%d\t%f\t%s\n",stu2.roll,stu2.mark,stu2.name);
//printf("%p\n",&stu1);
//printf("%p\n",(void *)stu1);//cannot converty to pointer type
//printf("%p\n",&stu2);
//printf("--------------\n difference =%ld\n",(&stu2-&stu1));
    printf("--------------\n difference = %ld bytes --->> (20+12)\n", ((char *)&stu2 - (char *)&stu1));
    printf("sizeof stu1 = %zu,&stu1 = %p \n",sizeof(stu1),(void *)&stu1);
    printf("sizeof stu2 = %zu,&stu2 = %p \n",sizeof(stu2),(void *)&stu2);
    printf("sizeof stu1.roll = %zu ,&stu1.roll=%p\n",sizeof(stu1.roll),(void *)&stu1.roll);
    printf("sizeof stu1.mark = %zu ,&stu1.mark=%p\n",sizeof(stu1.mark),(void *)&stu1.mark);
    printf("sizeof stu1.name = %zu ,&stu1.name=%p\n",sizeof(stu1.name),(void *)&stu1.name);
     printf("--------------\n difference = %ld bytes --->>(20+4)\n", ((char *)&stu2.roll - (char *)&stu1.name));
    printf("sizeof stu2.roll = %zu ,&stu2.roll=%p\n",sizeof(stu2.roll),(void *)&stu2.roll);
    printf("sizeof stu2.mark = %zu ,&stu2.mark=%p\n",sizeof(stu2.mark),(void *)&stu2.mark);
    printf("sizeof stu2.name = %zu ,&stu2.name=%p\n",sizeof(stu2.name),(void *)&stu2.name);
printf("==========================================================================\n");


struct box b1={"cat",23,45.67};
printf("%s\t%d\t%f\n",b1.name,b1.roll,b1.mark);
struct box b2={"toy",45,77.67}; 
printf("%s\t%d\t%f\n",b2.name,b2.roll,b2.mark);
    printf("--------------\n difference = %ld bytes --->> (20+12)\n", ((char *)&b2 - (char *)&b1));
    printf("sizeof b1 = %zu,&b1=%p\n",sizeof(b1),(void *)&b1);
    printf("sizeof b2 = %zu,&b2=%p\n",sizeof(b2),(void *)&b2);
    printf("sizeof b1.name = %zu,&b1.name=%p\n",sizeof(b1.name),(void *)&b1.name);
    printf("sizeof b1.roll = %zu,&b1.roll=%p\n",sizeof(b1.roll),(void *)&b1.roll);
    printf("sizeof b1.mark = %zu,&b1.mark=%p\n",sizeof(b1.mark),(void *)&b1.mark);
printf("--------------\n difference = %ld bytes --->>()\n", ((char *)&b2.name - (char *)&b1.mark));
    printf("sizeof b2.name = %zu,&b2.name=%p\n",sizeof(b2.name),(void *)&b2.name);
    printf("sizeof b2.roll = %zu,&b2.roll=%p\n",sizeof(b2.roll),(void *)&b2.roll);
    printf("sizeof b2.mark = %zu,&b2.mark=%p\n",sizeof(b2.mark),(void *)&b2.mark);





return 0;
}
