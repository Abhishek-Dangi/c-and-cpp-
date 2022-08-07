#include <stdio.h>
void main()
{
  int i, j, n, sum = 0;
  printf("enter the number:\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 2; j < n; j++)
    {
      if (i % j == 0)
        break;
    }
    if (i == j)
    {
      printf("%d ", i);
      sum = sum + i;
    }
  }
  printf("\n sum of prime number = %d", sum);
}