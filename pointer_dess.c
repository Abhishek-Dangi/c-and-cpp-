// dessending order is print by pointer
#include<stdio.h>
void show(int *);
void main()
{
    int array[10]={12,2,34,53,65,23,64,75,23,64};
    show(array);
}
void show(int *ar)
{
    int i,j,temp=1;
    i= *ar;
    j= *ar;
    printf("array element is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",*ar);
        ar++;
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*ar>*ar)
            {   
            temp = i;
            i = j;
            j= temp;
            }
            ar++;
        }
    }
    printf("\nassending order is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",ar[i]);

    }printf("\n");
}