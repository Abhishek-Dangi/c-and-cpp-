// wap to check the prime num using function with args and return type?

#include <stdio.h>

int prime(int);

void main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    int cnt = prime(num);
    if (cnt == 2)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}

int prime(int num)
{
    int count = 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return count;
}
