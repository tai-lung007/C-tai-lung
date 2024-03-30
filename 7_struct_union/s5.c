#include<stdio.h>
struct student 
{
char name[20];
int rollno;
int submarks[4];
};
int main(void)
{
int i,j;
struct student stuarr[3];
for(i=0;i<3;i++)
{
 printf("enter data for students %d\n",i+1); printf("enter name: ");
 scanf("%s",stuarr[i].name);
 printf("enter roll number :"); scanf("%d",&stuarr[i].rollno);

 for(j=0;j<4;j++)
 {
    printf("enter marks for subjects %d : ",j+1);
    scanf("%d",&stuarr[i].submarks[j]);
 }
}
printf("==============================================\n");
for(i=0;i<3;i++)
{
 printf("------<<<<<<data of student %d  >>>>>>>>---- \n",i+1);
 int k;
 for(k=0;k<3;k++)
 {
 printf("sizeof(stuarr[%d]): %zu , &(stuarr[%d])=%p\n",k,sizeof(stuarr[k]),i,(void *)&(stuarr[k]));
 }
 printf("name:   %s,   sizeof(name): %zu ,     &(stuarr[%d].name)=%p    \n",stuarr[i].name,sizeof(stuarr[i].name),i,(void *)&stuarr[i].name);
 printf("rollno: %d,   sizeof(rollno): %zu ,   &(stuarr[%d].rollno)= %p \n",stuarr[i].rollno,sizeof(stuarr[i].rollno),i,(void *)&stuarr[i].rollno);
 printf("marks: \n");
 for(j=0;j<4;j++)
 {
 printf("%d  ",stuarr[i].submarks[j]);
 printf("---->sizeof(stuarr[].submarks[]): %zu \t &(stuarr[].submarksd]): %p\n",sizeof(stuarr[i].submarks[j]),(void *)&(stuarr[i].submarks[j]));
 }
 printf("\n-------------------------------\n");
}
return 0;
}
