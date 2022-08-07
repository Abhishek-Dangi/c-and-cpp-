#include <stdio.h>
void main()
{

    int x, y, z, res;
    printf("enter the x y z:");
    scanf("%d %d %d", &x, &y, &z);
    res = (x == y) && (x == z) && (y == z);
    printf("logical AND is : %d\n", res);
    res = (x == y) || (x == z) || (y == z);
    printf("logical OR is %d\n", res);
    res = !(x == y) || (x == z) || (y == z);
    printf("logical NOT is %d\n", res);
}

// #include<stdio.h>
// void main()
// {

//     int x , y , z ,res;
//     printf("enter the x y z:");
//     scanf("%d %d %d", &x,&y,&z);
//     res = (x == y) && (x == z) || (y == z);
//     printf("logical AND is : %d\n", res);
//     res = (x == y) || (x ==z) && (y == z);
//     printf("logical OR is %d\n", res);

//     }