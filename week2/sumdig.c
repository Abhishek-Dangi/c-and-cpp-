#include<stdio.h>
void main()
{
    int n , temp, sum;
    printf("enter the number is n:\n");
    scanf("%d",&n);
    while(n>0)
    {
        temp = n%10;
        sum = temp+sum;
        n = n/10;
    }
    printf("sum of number%d\n", sum);

}