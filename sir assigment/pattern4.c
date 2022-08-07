// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=0; i<=5; i++)
//     {
//         for(j=0; j<=i; j++)
//         {
//             printf("1");
//         }
//         printf("\n");
//     }

// }


// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1; i<=4; i++)
//     {
//         for(j=1; j<=4; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
        
//     }}


// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1; i<=5; i++)
//     {
//         for(j=5; j>=i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");


//     }
//     }


// #include<stdio.h>
// void main()
// {

//   int i ,j ,sum,min,max =0,
//     arr[5]={ 12, 44, 6 ,43, 12,};
//     for(i=0;i<5;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         if(arr[i] > max)
//         {
//             max  = arr[i];
//         }
//     }
//     printf("max is %d\n",max);

//      min = max;

//     for(i=0;i<5;i++)
//     {
//         if(arr[i] < max)
//         {
//             max = arr[i];
//         }
//     }
//         printf("max is %d",max);


// }


// #include<stdio.h>
//  void main()
// {
//     char str[10] ,rev[10];
//     int i,j,count = 0;

//     printf("enter a string");
//     scanf("%s",str);

//     while (str[count]!='\0')
//     {
//         count++;
//     }
//     j = count-1;

//     for(i=0;i<count;i++)
//     {
//         rev[i] = str[j];
//         j--;
//     }
//     printf("%s",rev);
    

// }


// #include<stdio.h>
// int main()
// {
//     int num,i,rem,rev;

//     printf("enter a nnumber ");
//     scanf("%d",&num);

//     while (num>0)   
//     {
//        rem = num%10;
//        rev = rev*10+rem;
//        num = num/10;
//     }
//     printf("%d",rev);
    
// }


// #include<stdio.h>
// void main()
// {
//     int num,rev,rem,c;
//     printf("enter the number\n");
//     scanf("%d",&num);
//     c= num;
//     while(num>0)
//     {
//         rem = num%10;
//         rev = (rev*10)+rem;
//         num = num/10;
//     }
//     if(rev==c)
//     {
//         printf("palindrom");

//     }
//     else{
//         printf("not ");
//     }
// }

// #include<stdio.h>
// void main()
// {
//   int num,rem,rev,temp;
//   printf("enter the number");
//   scanf("%d",&num);
//   temp = num;
//   while(num >0)
//   {
//       rem = num%10;
//       rev = (rem*rem*rem)+rev;
//       num /=10;
//   }
//   if(temp==rev)
//   {
//       printf("ARMS");

//   }
//   else{
//       printf("not arms");
//   }


// }



// #include<stdio.h>
// void main()
// {
//     int arr[10] = { 13, 5 ,3 ,2 ,7 ,8 ,2, 7 };
//     int i, j ,temp=0;
//     for(i=0;i<8;i++)
//     {
//         printf("%d\n",arr[i]);

//     }
//     for ( i = 0; i<8; i++)
//     {  
//          for(j=i+1; j<8;j++)
//     {
//         if(arr[i]>arr[j])
//         {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j]= temp;
//         }
//      }
//     }
//     printf("elements are :\n");
//     for(i=0;i<8;i++)
//     {
//         printf("%d\n",arr[i]);

//     }

    
// }



// #include<stdio.h>
// void main()
// {
//     int arr[10] = { 13, 5 ,3 ,2 ,7 ,8 ,2, 7 };
//     int i, j ,temp=0;
//     for(i=0;i<8;i++)
//     {
//         printf("%d ",arr[i]);

//     }
//     for(i=0; i<8;i++)
//     {
//         for(j=i+1;j<8;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(i=0;i<8;i++)
//     {
//         printf("\n %d ",arr[i]);
//     }


// }


// #include<stdio.h>
// void main()
// {
//     int n, a=0,b=1,c,i;
//     printf("enter the number is:\n");
//     scanf("%d",&n);
//     {
//       i = 0;
//       while(i<n){
//           c = a+b;
//             printf("%d   ",c);
//             a = b;
//             b = c;
//             i++;

//       }

        // for(i=0;i<n;i++)
        // {
            
        

        // }
      
//     }




// }



// #include<stdio.h>
// void main()
// {
//   int i , j , n;
//   printf("enter the number:\n");
//   scanf("%d",&n);
//   for(i=1; i<=n; i++)
//   {
//     for(j=2;j<n; j++)
//     {
//       if(i%j==0)
//       break;

//     }
//     if(i==j)
//       printf("%d ",i);
    
//   }
// }



// #include<stdio.h>
// void main()
// {
//     int arr[10] = { 13, 5 ,3 ,2 ,7 ,8 ,2, 7 };
//     int i, j ,temp=0;
//     for(i=0;i<8;i++)
//     {
//         printf("%d ",arr[i]);

//     }
//     for(i=0; i<8;i++)
//     {
//         for(j=i+1;j<8;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(i=0;i<8;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }


// #include<stdio.h>
// void main()
// {
//     int arr[20];
//     int i, j ,k,size;

//     printf("define the number of elements in an arry:");
//     scanf("%d",&size);
//     printf("\n enter %d elements  of an array:\n",size);
//     for(i=0; i<size;i++)    //print size of arry 
//     {
//       scanf(" %d ",&arr[i]);   // give input 
//     }
//     for(i=0;i<size;i++)     //i<= given size and incre
//     {
//       for ( j =i+1; j<size; j++)  // j = i+1 size and incre    
//       {
//         if(arr[i] == arr[j])      //to cheak arr[i] is equal to arr[j]
//         {
//           for (k=j; k<size-1; k++)  // k =j and k is more then of size is derc k is increment
//           {
//             arr[k]=arr[k+1];    // arr[k] is eqaul to arr[k+1] 
//           }

//           size--;               // size is decres

//           j--;                  // j is decre
          
//         }
//       }
      
//     }
//     printf("\narray elements after deletion of the diplicate elements:"); 

//     for(i=0; i<size; i++)       //i is lessthen size and incre
//     {
//       printf(" %d ",arr[i]);   //print arr[i] is replesed duplicat
//     }
// }



// #include<stdio.h>
// void main()
// {
//     int i,j,k ;
//     for(i=5;i>=1;i--)
//     {                               //*****
//         for(j=5;j>=i;j--)           // ****
//         {                            // ***
//         printf(" ");                  // **
//     }                                  // *
//     for(k=1;k<=i;k++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     }
//     printf("\n");
// }

// #include<stdio.h>
// void main()
// {
//     int i,j,k ;
//     for(i=5;i>=1;i--)
//     {                               //* * * * *
//         for(j=5;j>=i;j--)          //  * * * *
//         {                            // * * *
//         printf(" ");                  // * *
//     }                                  // *
//     for(k=1;k<=i;k++)
//     {
//         printf(" *");  // give space in this *
//     }
//     printf("\n");
//     }
//     printf("\n");
// }



// #include<stdio.h>                   //*      //i=1---1<5---tr--j++
// void main()                         //* *    //j=1---1<1---tr-- *\n-- j++
// {                                   //* * *  //j=2---2<1---fl--- i++
//     int i,j,k ;                     //* * * *   //i=2----  2<5---tr---j++
//     for(i=1;i<=5;i++)               //* * * * *//j=1---1<2---t--*\n -- j++
//     {                               //* * * * *//j 2---2<2---t--*\n -- j++
//         for(j=1;j<=i;j++)          // * * * *  //j 3---3<2----f--*\n--- i++
//                                    // * * *  //i=3----3<5---tr---j++
//         printf("*");               // * *    //j 1----1<3--tr---*\nj++
//         printf("\n");              // *      //-- -- -- - - - -  - - -                       
//     }                                        //- -- - ---- - - -- - - - 
//     for(i=5;i>=1;i--)                        //i=6----6<5--fl---out loop in i++
//     {                                        //i=5----5>1 --t --tr j++
//         for ( j = 1; j<=i; j++)              //j=1 -- 1<=1 - t --*\n j++
//                                                j=2 --2<=2  ----ff -- i--       
//             printf("*");                   // i=4----4<1--t--j++
//             printf("\n");                     
        
        
  
// }
//     }


// /* * * * * *
//  *         *
//  *         *
//  *         *
//  * * * * * * */

// #include<stdio.h>
// void main()
// {
//         int i,j;
//         for(i=1;i<=5;i++)
//         {
//                 for(j=1;j<=5;j++)
//                 {
//                 if(j==1|| j==5|| i==1|| i==5)
//                 printf("* ");
                
//                 else
//                 printf("  ");
//         }
//         printf("\n");

// }
// }


/*                  * 
                  * * 
                * * *
              * * * *
            * * * * * 
            * * * * *
              * * * *
                * * *
                  * *
                    *   */
// #include<stdio.h>
// void main()
// {
//      int i,j;
//      for(i=1;i<=5;i++)
//      {
//              for(j=5;j>=1;j--)
//              {

//              if(i>=j)
             
//                      printf("*");
             
//              else
             
//                      printf(" ");
//              }
//                printf("\n");        
//      }    for(i=1;i<=5;i++)
//      {
//              for(j=5;j>=1;j--)
//              {

//              if(i<=j)
             
//                      printf(" ");
             
//              else
             
//                      printf(" * ");
//              }
//                printf("\n"); 
//      }
     

// } 



// /*    * * * * * * * * *
//         * * * * * * * 
//          * * * * * *
//            * * * *
//             * * *
//               *   */

// #include<stdio.h>
// void main()
// {
//    int i,j,k;
//    for(i=5; i>=1; i--)
//    {
//            for(j=0;j<5-i;j++)
//            printf("  ");
//            for(k=i; k<=2*i-1; k++)
//             printf("* ");
//             for(k=0; k<i-1; k++)
//             printf("* ");
//             printf("\n");
//    }

// }

// /*               *
//                 * *
//                * * *
//               * * * *
//              * * * * * */
// #include<stdio.h>
// void main()
// {
//    int i,j;
//    for(i=0;i<=5;i++)
//    {
//            for(j=5;j>=1;j--)
//            {
//                 if(j<=i)
//                 printf(" *");
//                 else
//                 printf(" ");
//            }
//            printf("\n");
//    }

// }


/*     * * * *
      *       *
      *       *
      * * * * *
      *       *
      *       *
          */

// #include<stdio.h>
// void main()
// {
//   int i,j,height=14 ;
//     for(i=0;i<height;i++)
//     {
//       for(j=0;j<=height/2;j++)
//       {
//         if (((j==0 || j==height/2) && i!=0)
//         ||(i==0 &&  j!=0 && j!=height/2)
//         || i==height/2)
//         {
        
//         printf(" *");
//         }
//       else
//       printf("  ");
//     }
//     printf("\n");
// }
// }


// /*      * * * * * 
//         *
//         * * * * * 
//         *
//         * * * * *  */



// #include<stdio.h>
// void main()
// {
//   int row,col,height=6;
//   for(row=0;row<=height;row++)
//   {
//     for(col=0;col<=height;col++)
//     {
//       if(row==0 ||col==0 || row==height/2||row==height)
//       {
//         printf("*");
//       }
//       printf(" ");
      

//     }
//     printf("\n");
//   }

// }


// /*      * * * * * 
//         *
//         * * * * * 
//                 *
//         * * * * * */



// #include<stdio.h>
// void main()
// {
//   int row,col,height=8,width=5;
//   for(row=0;row<=height;row++)
//   {
//     for(col=0;col<=width;col++)
//     {
//       if(row==0  || col==0 && row<=4||row==4 || row==8 || col==3 && row<=4)
//       // if(col==0||row==4 || col==8)
//       {
//         printf("*");
//       }
//       printf(" ");
      

//     }
//     printf("\n");
//   }

// }

// /*        *
//         *   *
//        *     * 
//       *       *
//     *           *
//      *         *
//        *     *
//         *   *
//           *
          
//              */
//   #include<stdio.h>
//   void main()
  
// {
//   int i,j,k, n=8;
//   for(int i=1; i<=n; i++)
//   {
//     for(int j=i; j<=n; j++)
//     printf(" ");
//     for(int k=1; k<=2*i-1; k++)
//     if(k==1 || k==2*i-1)
//     {
//       printf("*");
      
//     }
//     else
//       printf(" ");
    
//     printf("\n");
//   }
//   for(i=n-1;i>=1;i--)   
//   {
//     for(j=n ;j>=i;j--)    
//     printf(" ");
//     for(k=1; k<=2*i-1;k++) 
//     if(k==1 || k==2*i-1)
//     {
//       printf("*");
     
//      }
//       else
//       printf(" "); 
    
//     printf("\n");
//   }
  
// }

// /*        *
//         * * *
//        * * * * 
//       * * * * *
//     * * * * * * *
//      * * * * * *
//        * * * *
//         * * *
//           *
          
//              */
//   #include<stdio.h>
//   void main()
  
// {
//   int i,j,k, n=8;
//   for(int i=1; i<=n; i++)
//   {
//     for(int j=i; j<=n; j++)
//     printf(" ");
//     for(int k=1; k<=2*i-1; k++)
    
//       printf("*");
    
//     printf("\n");
//   }
//   for(i=n-1;i>=1;i--)   
//   {
//     for(j=n ;j>=i;j--)    
//     printf(" ");
//     for(k=1; k<=2*i-1;k++) 
    
//       printf("*");
     
//       printf(" "); 
    
//     printf("\n");
//   }
// }

// /*   *       * * * * * 
//      *       *
//      *       *
//      *       *
//      * * * * * * * * * 
//              *       *        
//              *       *
//              *       *
//      * * * * *       *  */

// #include<stdio.h>
// void main()
// {
//   int i,j,k;
//   for(i=1;i<=10;i++)
//   {
//     for(j=1;j<=10;j++)
//     {
//     if(i==5 || i==1 && j>=5 ||j==5 )
//     printf("*");
//     else
//     printf(" ");
//     }
//     printf("\n");
// }


// }

// // prime number up to 1000
// #include<stdio.h>
// void main()
// {
//   int i,j,temp;
//   int n = 1000;
//   for(i=0;i<=n;i++)
//   {
//     for(j=2;j<=n;j++)
//     {
//       if(i%j==0)
//       break;
      
//     }
//     if(i==j)
//     printf("%d\n",i);
//   }
// }


//  i1 i2 i3 i4 i5
/*   * * * * * * (1,1)
     *         * (2,1)
     *         * (3,1)
     * * * * * * (4,1)
     *         * (5,1)
     *         * (6,1)
     * * * * * * (7,1)
*/

#include<stdio.h>
void main()
{
  int i,j ,k;
  int n = 7;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-1;j++)
    {
      if((i==1 ||j==1) || (i==4)|| (i==7))
      {
        printf(" *");
      }
    }
    printf("\n");
  }
}