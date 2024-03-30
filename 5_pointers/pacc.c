//access dynamically allocated memory as a  1d array

#include<stdio.h>
#include<stdlib.h>

int main()
{

        int *p,n,i;
        printf("enter teh enumber of integers to be entered :");
        scanf("%d",&n);
        p=(int* )malloc(n*sizeof(int));
        
        
        if(p== NULL)
        {
        printf("memory not availabell");
        
        }
        
        for(i=0;i<n;i++)
        {
        
           printf("enter an integer :");
        
           scanf("%d",&p[i]);
        
        
        }
        
        for(i=0;i<n;i++)
        printf("%p\there lies p[%d]===%d \n",&p[i],i,p[i]);
     

/*

enter teh enumber of integers to be entered :5
enter an integer :1
enter an integer :2
enter an integer :3
enter an integer :4 
enter an integer :5
0x55615ae55ac0	here lies p[0]===1 
0x55615ae55ac4	here lies p[1]===2 
0x55615ae55ac8	here lies p[2]===3 
0x55615ae55acc	here lies p[3]===4 
0x55615ae55ad0	here lies p[4]===5 

*/



return 0;
}
