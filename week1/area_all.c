// #include<stdio.h>
// void main()
// {
//     char operation;
//     printf("enter the operator (T S C)\n");
//     scanf("%c", &operation);

//     switch(operation)
//     {
//     case 'T':
//     {
//     int he , bas , area;
//     printf("enter the height of tringle\n ");
//     scanf("%d", &he);
//     printf("enter the base of tringle\n ");
//     scanf("%d", &bas);
//     area = he*bas/2;
//     printf("area of tringle is %d", area);
//     break;
//     }
//     case 'S':
//     {
//     int side , area;
//     printf("enter the one side of square:\n");
//     scanf("%d",&side);
//     area = side*side;
//     printf("area of a square is %d",area);
//     break;
//     }
//     case 'C':
//     {
//     int area , rid;
//     float pie = 3.14159;
//     printf("enter the radius of circle \n");
//     scanf("%d", &rid);
//     area = pie*rid*rid;
//     printf("area of circle is %d", area);
//     break ;
//     }

//     default:{

//     printf("operation is does not axist\n");
//         break;
//     }
//     }
// }

#include <stdio.h>
void main()
{
    char operator;
    printf("enter the value of T S C");
    scanf("%s", &operator);

    switch (operator)
    {
    case 'T':
    {
        int bas, heigth, area;
        printf("enter the base and heigth \n");
        scanf("%d %d", &bas, &heigth);
        area = bas * heigth / 2;
        printf("area of tringle is =%d", area);
        break;
    }
    case 'S':
    {
        int side, area;
        printf("enter the side of square:\n");
        scanf("%d", &side);
        area = side * side;
        printf("area of square =%d", area);
        break;
    }
    case 'C':
    {
        int pie = 3.141;
        int rdi;
        printf("enter the radius of cricle :\n");
        scanf("%d", &rdi);
        int area = pie * rdi * rdi;
        printf("area of cricle is : %d", area);
        break;
    }
    case 'a':
    {
        int n, temp, rem, sum = 0;
        printf("enter the number to check armstrong:");
        scanf("%d", &n);
        temp = n;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = (rem * rem * rem) + sum;
            temp /= 10;
        }
        if (sum == n)
        {
            printf("Number is armstong");
        }
        else
        {
            printf("number is not armstrong");
        }
        break;
    }
    default:
    {
        printf("does not exist");
        break;
    }
    }
}