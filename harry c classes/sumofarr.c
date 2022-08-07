#include<stdio.h>
void main()
{
    int i,j,k;
    int a[5],b[5], c[5];
    printf("enter the values \n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);
    for(i=0;i<5;i++)
    c[i]= a[i] +b [i];
    printf("sum o]f two arry");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",c[i]);
    }
    
    
    
    
    

}