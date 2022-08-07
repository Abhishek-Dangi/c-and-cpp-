// #include<stdio.h>
// void main()
// {
//     int arr[3][3];
//     int i,j,sum;
//     printf("enter the arry element :\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//         scanf("%d\n",&arr[i][j]);
//         }
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             if(i==j){
//                  sum = sum+ arr[i][j];
//             }
           
//         }
      
//     }
//       printf("%d",sum);
// }

#include<stdio.h>
void main()
{
    int arr[3][3];
    int i,j,sum,n=2;
    printf("enter the arry element :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d\n",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
        for(j=0;j<n;j++)
        {
            sum = sum+ arr[0][j];          
        }
      printf("%d",sum);
}  // not complet....