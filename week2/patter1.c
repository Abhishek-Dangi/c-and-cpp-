// // #include<stdio.h>
// // void main()
// // {
// //     int i,j,k,n=5;
// //     for ( i = 1; i<=n; i++)
// //     {
// //         for(j=1;j<=i;j++)
// //         {
// //             for(k=1;k<=i;k++)
// //             printf(" *");
// //         }
// //         printf(" ");
// //         printf("\n");
// //     }
    

// #include<stdio.h>
// void main()
// {
//     int i,j,n=5;
//     for(i=1; i<=n; i++)
//     {   
//         for(j=i; j<n ; j++)
//         {
//             printf(" ");
//         }
//             for(j=1; j<=i; j++)
//             {
//                 printf("*");
//             }
//         printf("\n");
//         }
//     }
    



   #include<stdio.h>
   void main()
   {
    int i,j,k,n = 5;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        for(k=0;k<=i;k++)
        {
            printf("   ");
        }
        }
    printf("\n");
        }
   } 