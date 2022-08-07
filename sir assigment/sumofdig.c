#include<stdio.h>
void main()
{
     int n ,sum,rem;
     printf("enter the number :\n");
     scanf("%d",&n);
    
     while (n!=0)
     {
         rem = n%10;
         sum = rem+sum;
         n= n/10;
         
     }
     printf("sum of no is :%d\n",sum);
     
     }