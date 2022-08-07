// #include<stdio.h>
// void main()
// {

//     int n, temp, r , sum=0;
//     printf("enter the number:\n");
//     scanf("%d",&n);
//     temp = n;
//     while(n > 0)
//     {
//         r = n % 10;
//         sum = (sum*10)+r;
//         n /=10;
//     }
//        if(temp == sum)
//        printf("the number is palinadrome number");

//        else
//        printf("the number is not palinadrome number");
// }

#include <stdio.h>
void main()
{
    int n, temp, r, result = 0;
    printf("enter the number\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        result = (result * 10) + r;
        n = n / 10;
    }
    if (temp == result)
    {
        printf("palindome");
    }
    else
    {
        printf("not palindome");
    }
}