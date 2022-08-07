#include<stdio.h>
void main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int i,j,temp=0;
    printf("enter the arry element :\n");
    // for(i=0;i<10;i++)
    // {
    //     scanf("%d\t",&arr[i]);
    // }
    printf("arry element is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n dessending order arry element is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }  printf("\n");
}
