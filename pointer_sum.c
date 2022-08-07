#include<stdio.h>
void show(int *);
void main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    show(arr);
}
void show(int *ar)
{
    int i,sum=0 ;
    printf("array element is :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n", *ar);
        sum = sum + *ar;
        ar++;
        
    }
    printf("sum of arry of element is %d:\n",sum);
}




