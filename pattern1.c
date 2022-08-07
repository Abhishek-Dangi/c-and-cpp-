// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<=5; j++)
//         {
//         printf(" * ");
//         }
//     printf("\n");
//     }
    

//  }


// #include<stdio.h>
// void main()
// {
//     int j,i;
//     for(i=1; i<=5; i++)
//     {
        
//         for(j=1; j<=5; j++)
//         {
//            printf("%d",i);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1; i<=3; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
// }



   /*   *
        ***
        ***** */
// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for(i=1; i<=3; i++)
//     {
        
//         for(j=1; j<=i ; j++)
//         {
//             for(k=1; k<=j; k++)
//             {printf("*");
//             }
//         }
//         printf("\n\n");
//     }
// }


//  #include<stdio.h>
// void main()
// {
//     int i,k,j,n=5;
//     for(i=0;i<=n;i++)
//     {   printf("*");
//         for(j=0;j<=i;j++)
//         {   
//             for(k=0;k<=j-1;k++)
       
//         {
           
//           printf("*");
           
//         }
        
//         }
//         printf("\n\n");
//     }
// }


/*       5
         54
         543
         5432
         54321 */

// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//          int n=5;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",n);
//             n = n-1;
//         }
//         printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//     int i,j,k;
//     for(i=8;i>=1;i--)
//     {  int m = 1;
//         for(j=i;j>=1;j--)
//         {
//      printf("%d", m);
//         m++;
//     }
//     printf("\n");
//     int n = 7;
//     for(k=i;k>=1;k--)
//     {
//     printf("%d",n);
//     n = n-1;
//     }
//     printf("\n");
// }
// }// appoximatly right but not pully right


/*         *
         * *
       * * *
   * * * * * 
*/

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
//             for(j=1; j<i; j++)
//             {
//                 printf("*");
//             }
//              printf("\n");
    // }
    // for(i=n; i>=1; i--)
    // {   
    //     for(j=i; j<n ; j++)
    //     {
    //         printf(" ");
    //     }
    //         for(j=1; j<i; j++)
    //         {
    //             printf("*");
    //         }
    //         for(j=1; j<=i; j++)
    //         {
    //             printf("*");
    //         }
        
    //     printf("\n");
    //     }
    // }

//     #include<stdio.h>
// void main()
// {
//     int i,j,n=9;
//     for(i=1; i<=n; i++)
//     {   
//         for(j=1; j<=n ; j++)
//         {
//             if(i==5 || j==5 || (i==1 && j>5) || (i==9 && j<5) || (j==9 && i>5) || (j==1 && i<5))
//             printf(" *");
//          else
//         printf("  ");
//     }
//        printf("\n");
//     }
//     }


//   #include<stdio.h>
// void main()
// {
//     int i,j,n=9;
//     for(i=1; i<=5; i++)
//     {   
//         for(j=1; j<=9 ; j++)
//         {
//             if(i==5 || j+i==6 || j-i==4)
//             printf(" *");
//          else
//         printf("  ");
//     }
//        printf("\n");
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int i,j,n=9;
//     for(i=1; i<=5; i++)
//     {   
//         for(j=1; j<=9 ; j++)
//         {
//             if(j==1 || j==5 || (i==j && i<4) || (i+j==6 && i<3) )
//             printf(" *");
//          else
//         printf("  ");
//     }
//        printf("\n");
//     }
// }


// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(i==1||j==0||i==5 || (i+j==6))
//             printf(" *");
//             else
//             printf("  ");
//         }
//         printf("\n");

//     }
// }

// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(i==1||j==1||i==5 || j==5 ||(i+j==7 || i+j==8))
//             printf(" *");
//             else
//             printf("  ");
//         }
//         printf("\n");

//     }
// }

