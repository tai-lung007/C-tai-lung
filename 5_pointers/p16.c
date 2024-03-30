
//call by value
#include<stdio.h>


void value(int x,int y);

int main(void){

        int a=5,b=8;
        printf("a=%d,b=%d \n",a,b);  // 5,6
        value(a,b);// 6,9
        printf("a=%d,b=%d \n",a,b);//5,6
        
        return 0;
        
}

void value(int x,int y)
{

  x++;
  y++;
  printf("x=%d,y=%d \n",x,y);
}


//call by refernce
/*
#include<stdio.h>

void ref(int *p, int *q);

int main(void){
        int a=5,b=8;
        printf("a=%d,b=%d \n",a,b);//a=5,b=8 
        ref(&a,&b); //*p=6,*q=9 
        printf("a=%d,b=%d \n",a,b);//a=6,b=9 
        return 0;

}
void ref(int* p, int* q){

        (*p)++;
        (*q)++;
        printf("*p=%d,*q=%d \n",*p,*q);
}
*/
