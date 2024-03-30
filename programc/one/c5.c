#include<stdio.h>

int main(void)
{
FILE *fp1,*fp2;

fp1=fopen("one","w");
fp2=fopen("two","w");
fputc('A',fp1);
//fgetc=('A',fp1);
fputc('B',fp2);
while((ch=fgetc(fp1))!=NULL)
fclose(fp1);
fclose(fp2);
return 0;
}
