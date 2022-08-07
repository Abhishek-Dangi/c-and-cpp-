#include <stdio.h>
void main()
{
    int a, b, c;
    int oper;
    printf("enter the operator");
    scanf("%d", &oper);
    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);
    switch (oper)
    {

    case 1:
    {
        c = a + b;
        printf("%d", c);
        break;
    }

    case 2:
    {
        c = a - b;
        printf("%d", c);
        break;
    }
    default:
    {
        printf("npthing match");
    }
    }
}