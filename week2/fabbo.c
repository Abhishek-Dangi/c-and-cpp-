// // fibbonacci series
// #include<stdio.h>
// void main()
// {
//     int n,a=0,b=1,c,i;
//     printf("enter the no.:\n");
//     scanf("%d",&n);
//     printf("%d %d",a,b);
//     for(i=2; i<n; i++)
//     {
//         c = a+b;
//         printf(" %d ",c);
//         a=b;
//         b=c;
        
//     }
// }




#include<stdio.h>
void main()
{
    int n , a=0,b=1,c,i;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<n;i++)
    {
        c = a+b;
        printf(" %d",c);
        a = b;
        b = c;
    }
}