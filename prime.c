#include<stdio.h>
void main()
{
    
     int n,i,j;
     printf("enter the number\n");
     scanf("%d",&n);

     for ( i=0; i<=n; i++)
     {
         for (j=2; j<n; j++)
         {
             if(i%j==0)
             break;
            
         }
         if(i==j)
           printf("%d \n",i);
     }
     


}