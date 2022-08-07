#include<stdio.h>
void fact();


void fact()
{
    int f=1,num;
    printf("enter the number \n");
    scanf("%d",&num);
    for(int i=1; i<=num;i++)
    {
        f = f*i;
    }
        printf("sum is %d",f);
}

void main()
{
    
    fact();
}



// #include<stdio.h>
// void rect()
// {
//     int len,bre,area;
//     printf("enter len and bre of rectangle");
//     scanf("%d %d",&len,&bre);
//     area = len*bre;
//     printf("%d",area);
// }

// void fabbo()
// {
//     int n,a=0,b=1,c,i;
//     printf("enter number");
//     scanf(" %d",&n);
//     printf("%d %d",a,b);
//     for(i=2;i<n;i++)
//     {
//         c = a+b;
//         printf(" %d",c);
//         a = b;
//         b = c;
//     }
// }

// void main()
// {
//     printf("area of rectangle is:\n");
//     rect();
//     printf("\nfabbonaci seies is :\n");
//     fabbo();
// }