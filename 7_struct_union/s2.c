#include<stdio.h>
struct str_out
{
int i;
int j;

}so1,so2;
struct str_out_two
{
    int i;
    int j;

};
int main(void)
{

struct str_inside
{

    int i;
    int j;

}si1,si2;
struct str_inside si3;
struct str_out_two sot1,sot2;

//si1.i=10;
si1.j=20;
si2.i=99;
si2.j=88;
si3.i=76;
si3.j=67;

so1.i=11;
//so1.j=123; //global unintialised var are assigned =0
//so2.i=321;
so2.j=22;
sot1.i=55;
sot2.j=77;




printf("(%d ,%d)--->10,20 \n",si1.i,si1.j);
printf("(%d ,%d)--->99,88\n",si2.i,si2.j);
printf("(%d ,%d)--->76,67\n",si3.i,si3.j);

printf("(%d ,%d)--->11,123\n",so1.i,so1.j);
printf("(%d ,%d)--->321,22\n",so2.i,so2.j);

printf("(%d ,%d)--->55,\n",sot1.i,sot1.j);
printf("(%d ,%d)---> ,77\n",sot2.i,sot2.j);




return 0;
}
