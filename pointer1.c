// print arry elemet using function with pointer 

#include<stdio.h>
void show(int *);
void main()
{
    int i;
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    show(arr);
}
void show(int *ar)
{
    printf("array element is:\n");
    for(int i=0;i<10;i++);
    {
        printf("%p : %d\n",ar,*ar);
        ar++;
    }
}