// #include<stdio.h>
// void main()
// {
//     int a[3][3], sum[3][3], b[3][3];
//     int i,j,c;
//     printf("enter the 1st array element:\n");
//     for(i=0;i<3;i++)
//     {
//         printf("%d\n: row element is ",i+1);
//         for(j=0;j<3;j++)
//         {
//             scanf("%d\n",&a[i][j]);
//         }
//     }
//     printf("enter the 2st array element:\n");
//     for(i=0;i<3;i++)
//     {
//         printf("%d row element is ",i+1);
//         for(j=0;j<3;j++)
//         {
//             scanf("%d\n",&b[i][j]);
//         }
//     }
//     printf("array element is\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//     {
//         sum[i][j] = a[i][j]+b[i][j];
//     }
//     }
//     printf("sum of matrix \n");
//        for(i=0;i<3;i++)
//     {   
//         for(j=0;j<3;j++)
//         {
//             printf("%d \t ",sum[i][j]);
//         }
//     printf("\n");
//     }   
// }





#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("enter first matrix\n");
    for(i=0;i<3;i++)
    {
        printf("enter next row");
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter next matrix\n");
    for(i=0;i<3;i++)
    {
        printf("enter next row");
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum of two matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
