#include<stdio.h>
void  main()
{
    int arr[10];
    int i,sum=0;
     for(i=0;i<10;i++)
    scanf("%d ",&arr[i]);
    printf("value stored on odd position \n");
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
        printf("");
        }
        else
        {
        sum = sum+arr[i];
        
        }
        
    }  
    printf(" sum of arry is %d ",sum);

}