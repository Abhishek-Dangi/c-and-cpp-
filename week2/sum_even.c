#include <stdio.h>
void main()
{
    int i, num, sum = 0;
    printf("enter the num:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            // printf("%d ",i);
            sum = sum + i;
    }
    printf("\n%d\n", sum);
}

// completed
