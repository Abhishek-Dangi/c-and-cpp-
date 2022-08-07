#include<stdio.h>
void main()
{
    int x ;
    int *pot;
    x= 30;
    printf("address of x is : %p\n",x);
    printf("value of x is %d\n",x);
    pot  = &x;
    printf("value of pot is %p\n",pot);
    printf("value of *pot %d\n",*pot);
}