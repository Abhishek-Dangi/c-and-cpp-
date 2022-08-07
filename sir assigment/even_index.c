#include<stdio.h>
void main()
{
    int arr[100];
    int i,sum;
    for(i=0;i<10;i++)
      scanf("%d",&arr[i]);
    printf("\n\n values stored at even position \n");
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    for ( i = 0; i <10; i++)
    
    {
        if(i%2==0)
        sum = sum+arr[i];

    }
    printf("sum of arry element is : %d",sum);
}