#include<stdio.h>
void swap(int * , int * );
void main()
{
    int x,y;
    printf("value of x and y is :\n");
    scanf("%d %d",&x, &y);
    printf("befor swaping x  %d\n",x);
    printf("befor swaping y  %d\n",y);
   
    swap(&x ,&y);
   
    printf("After the swaping x is %d\n",x);
    printf("After the swaping y is %d\n",y);
}
void swap(int *p ,int *q)
{
    int z ;
    z = *p;
    *p = *q;
    *q = z; 
}