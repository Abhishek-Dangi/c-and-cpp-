#include<stdio.h>

int main()
{
    int a , b;
    printf("enter the variable");
    scanf("%d %d" ,&a , &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("value of a is %d  value of b is %d",a , b);
}