// #include<stdio.h>
// #define MIN(a,b)    (((a)<(b))?a:b)
// #define MIX(a,b)     (((a)>(b))?a:b) 
// void main()
// {
//     int x, y;
//     printf("enter the value of the x and y : \n");
//     scanf("%d%d",&x,&y);
     
//     printf("The Maximum is = %d ", MIN(x,y));
//     printf("The Minimum is = %d ", MIX(x,y))v;

// }

// #include<stdio.h>
// void main()
// {
//     char ch;
//     printf("enter the vowel are");
//     scanf("%c",&ch);
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//     {
//         printf("that is vowel %c",ch);
//     }
//     else{
//         printf("that is not vowel %c",ch);
//     }
// }


// #include<stdio.h>
// void main()
// {
//     int n = 5;
//     int i,j;
//     for(i=1; i<=n;i++)
//     {
//         for(j=1; j<=n; j++)
//         {
//             printf("%2d",(i*j)%2);
//         }
//         printf("\n");
//     }
// }





// #include<stdio.h>
// void main()
// {
//     int n , i , sum;
//     printf("Enter the number of table\n");
//     scanf("%d",&n);
//     for(i=1; i<=10; i++)
//     {
//         sum = i*n;
        
//         printf("%d * %d= %d\n",n,i,sum);
//     }
    
// }


// #include<stdio.h>
// void main()
// {
//     int maths, physics, chemi, sum, marks, pm;
//     printf("enter the marks of maths");
//     scanf("%d",&maths);
//     printf("enter the marks of physics");
//     scanf("%d",&physics);
//     printf("enter the marks of chemistry");
//     scanf("%d",&chemi);

//     marks = (maths+physics+chemi)/3;
//     printf("%d",marks);

//     if((maths<=34) && (physics<=34) && (chemi<=34))
//     {
//         printf("fail in all subjects\n");
//     }
//     if((maths>=34) && (physics>=34) && (chemi>=34))
//     {
//         printf("pass in all\n");
//     }

    
//     if(marks>=85)
//     {
//         printf("gread A\n");
//     }
//     else if (marks>=65)
//     {
//         printf("grad b\n");
//     }
//     else if (marks>=45)
//     {
//         printf("grad C\n");
//     }
//     else if (marks<=34)
//     {
//         printf("grad D\n");
//    }

//     else if((maths<=34) && (physics<=34))
//     {
//        printf("fail in maths and physics\n");
//     }
    
//     else if ((physics<=34) && (chemi<=34))
//     {
//         printf("fail in  physics and chemi\n");
//     }
//     else if ((chemi<=34) && (maths<=34))
//     {
//         printf("fail in chemi and maths\n");
//     }


//     if(maths<=34)
//     {
//         printf("saplimentry in maths:\n",maths);
//     }
//     if (physics<=34)
//     {
//         printf("saplimentry in physics\n",physics);
//     }
//     if (chemi<=34)
//     {
//          printf("saplimentry in chemi\n",chemi);
//     }
    
    
    
    
    
    
    // {
    
    //     // printf("fail in maths\n",maths);
    //     // printf("fail in physics\n",physics);
         
    // }
    
    
    

// }


// #include<stdio.h>
// void main()
// {
//     int phy, chem, math,per, total;
//     printf("enter the marks of math\n");
//     scanf("%d",&math);
//     printf("enter the marks of phy\n");
//     scanf("%d",&phy);
//     printf("enter the marks of chem\n");
//     scanf("%d",&chem);

//     if (phy<33)
//     {
//         if(chem<33)
//         {  
            
        
//             if(math<33)
//             {
//             printf("fail in all subject\n");
//             }
//         // else if (math<33)
//         //     {
//         //         printf("fail in p and m");
//         //     }
          
//             else
//         {
//             printf("fail in phy and maths");
//         } 

//         }
//     }
// }
    



// #include<stdio.h>
// void main()
// {
//     int phy, chem, math,per, total;
//     printf("enter the marks of math\n");
//     scanf("%d",&math);
//     printf("enter the marks of phy\n");
//     scanf("%d",&phy);
//     printf("enter the marks of chem\n");
//     scanf("%d",&chem);
    
//     if (phy<33)
//     {
//         if(chem<33)
//         {
//             if(math<33)
//            {
//              printf("fail in all subject\n");
            
//             }
         
//             else
//                 {
//                     printf("fail in phy and chem\n");
//                 }
                    
//         }
//      else if(math<33)
//              {
//                  printf("fail in phy and maths\n");
//              }
//          else
//          {
//                  printf("supply in phy\n");
//          }
//     }
//     else if(chem<33)
//     if(math<33)
//         {
//             printf("fail in chem and phy\n");
//         }
//         else
//         {
//             printf("supply in chem\n");
//         }
//         else if(math<33)
//         {
//             printf("supply in maths");
//         }
//     else
//     {
//         printf("pass in all\n");
//     }
//     total = phy+chem+math;
//     per = total/3;
//     if(per>=65)
//     {
//     printf("A grad %d\n",per);
//     }
//     else if(per>=55)
//     {
//         printf("B grad%d\n",per);
//     }
//     else if(per>=45)
//     {
//         printf("C grad %d\n",per);
//     }  
//     else
//     {
//         printf("only pass in all subject\n");
//     }

// }



// /*factorial of given number*/
// #include<stdio.h>
// void main()
// {
//      int i, n , f=1;
//      printf("enter the number :\n");
//      scanf("%d",&n);
//      i = 1;
//      while (i<=n)
//      {
//          f = f*i;
//          i++;
//      }
 
//       printf("factorial of number is %d:\n",f);
     

//      }

//check number is palindrom number with do while loop 

// #include<stdio.h>
// void main()
// {
//     int i,n,sum;
//     printf("enter the number for check \n");
//     scanf("%d",&n);
//     i=0;
//     do
//     {
//           sum = i*n;
//            printf("%d * %d = %d\n",n,i,sum);                            

//           i++;
         
//     } while (i<=10);
    
        
    
    
//     }


//


// #include<stdio.h>
// void main()
// {
//     int x,z;
//     x=10;
//     printf("value of x is %d\n",x);
//     //z = ++x + x++;   //z = 11+11+1= 23
//     //z = x++ + ++x;   //z = 10+1+11= 22
//     //z = ++x + ++x;   //z = 11+1+11= 23:----24
//     //z = ++x + --x;   //z = 11+1-11= 21
//     //z = --x + --x;   //z =9+1-9= 17:------16
//     //z= --x + ++x;
//     //z = x-- + ++x;
//     //z = x-- + --x;
//     //z = --x - --x;
//     z = x-- - --x;


    
//     printf(" %d\n",z);
//     printf(" %d\n",x);
//     }




