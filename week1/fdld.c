#include <stdio.h>
void main()
{

    int ld, fd, n, sum;
    printf("enter the value is n:");
    scanf("%d", &n);

    ld = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    fd = n;
    sum = fd + ld;
    printf("addition of first and last digite is %d", sum);
}
