#include <stdio.h>
int fact()
{
    int num, i, f = 1;
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int num, c;
    printf("enter the number ");
    scanf("%d", &num);
    c = fact(num);
    printf("factorial %d", c);
}