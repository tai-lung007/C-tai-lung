#include<stdio.h>
void func1(int a, int b)
{
if(a>b)
return ;

printf("%d\t %p\n",a,&a);
    func1(a+1,b);
printf("----------------------->>>%d\t %p\n",a,&a);
}
void func2(int a ,int b)
{
if(a>b)
    return ;
printf("%d\t %p\n",a,&a);
func2(a+1,b);
printf("^^^^^^^^^^^^^^^^^^^^^>>>%d\t%p\n",a,&a);

}
int main(void)
{
func1(10,18);
printf("==================================\n") ;
func2(20,28);
return 0;
}
/*   




10	 0x7ffc244037ec
11	 0x7ffc244037cc
12	 0x7ffc244037ac
13	 0x7ffc2440378c
14	 0x7ffc2440376c
15	 0x7ffc2440374c
16	 0x7ffc2440372c
17	 0x7ffc2440370c
18	 0x7ffc244036ec
----------------------->>>18	 0x7ffc244036ec
----------------------->>>17	 0x7ffc2440370c
----------------------->>>16	 0x7ffc2440372c
----------------------->>>15	 0x7ffc2440374c
----------------------->>>14	 0x7ffc2440376c
----------------------->>>13	 0x7ffc2440378c
----------------------->>>12	 0x7ffc244037ac
----------------------->>>11	 0x7ffc244037cc
----------------------->>>10	 0x7ffc244037ec
==================================
20	 0x7ffc244037ec
21	 0x7ffc244037cc
22	 0x7ffc244037ac
23	 0x7ffc2440378c
24	 0x7ffc2440376c
25	 0x7ffc2440374c
26	 0x7ffc2440372c
27	 0x7ffc2440370c
28	 0x7ffc244036ec
^^^^^^^^^^^^^^^^^^^^^>>>28	0x7ffc244036ec
^^^^^^^^^^^^^^^^^^^^^>>>27	0x7ffc2440370c
^^^^^^^^^^^^^^^^^^^^^>>>26	0x7ffc2440372c
^^^^^^^^^^^^^^^^^^^^^>>>25	0x7ffc2440374c
^^^^^^^^^^^^^^^^^^^^^>>>24	0x7ffc2440376c
^^^^^^^^^^^^^^^^^^^^^>>>23	0x7ffc2440378c
^^^^^^^^^^^^^^^^^^^^^>>>22	0x7ffc244037ac
^^^^^^^^^^^^^^^^^^^^^>>>21	0x7ffc244037cc
^^^^^^^^^^^^^^^^^^^^^>>>20	0x7ffc244037ec




*/     