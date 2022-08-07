#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("enter  the elements of array\n");
    for(i=0;i<3;i++)
    {
        printf("%d: row element is ",(i+1));
        for(j=0;j<3;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    printf("enter the 2st array element:\n");
    for(i=0;i<3;i++)
    {
        printf("%d row element is ",(i+1));
        for(j=0;j<3;j++)
        {
            scanf("%d\n",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
        printf("multipication of matrix is :\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    
}



// #include<stdio.h>
// void main()
// {
//     int a[3][3],b[3][3],c[3][3];
//     int i,j,k=0;
//     printf("enter first matrix\n");
//     for(i=0;i<3;i++)
//     {
//         printf("enter next row");
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter next matrix\n");
//     for(i=0;i<3;i++)
//     {
//         printf("enter next row");
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<3;i++)
//     {    c[i][j]=0;
//         for(j=0;j<3;j++)
//         {
//             c[i][j] += a[i][k] * b[k][j];
//         }
//     }

//     printf("sum of two matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d\t",c[i][j]);
//         }
//         printf("\n");
//     }
// }
