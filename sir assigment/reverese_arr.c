// #include<stdio.h>
// void main()
// {
//     int arr[10]={20,10,30,40,50,60,70,80,90,100};
//     int i,temp;
//     printf("arry is \n");
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     for(i=0;i<10/2;i++)
//     {
//      temp = arr[i];
//      arr[i]=arr[10-i-1];
//      arr[10-i-1] = temp;
//     }
//     printf("\nreverse of arry is \n");
//     for(i=0;i<10;i++)
//     printf("%d ",arr[i]);
// }



#include<stdio.h>
void main()
{
    int arr[10] ={23,43,23,43,23,5,45,5,34,4,};
    int i,temp;
    printf("array element is \n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if (arr[i]==arr[i-1])
        {
            printf("%d",arr[i]);
        }
        
    }
    

}