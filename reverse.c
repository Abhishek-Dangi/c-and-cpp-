#include<stdio.h>
void main()
{
    int n , temp, sum ,rem;
    printf("enter the three digit number\n");
    scanf("%d",&n);
    temp = n;
    printf("reverse number Is  ");
    while (n>0)
    {
        rem = n%10;
        sum = rem+sum;
        n = n/10;
    printf("%d",rem);
    }
    printf("\nreverse number is %d",sum);
    
}