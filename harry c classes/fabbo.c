#include<stdio.h>
int fabbo(int num)
{
    static int n1=0,n2=1,n3;
    if (num>0)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf(" %d",n3);
        fabbo(num-1);
    }
    
}
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("fabbonachi sequence is");
    printf("%d %d",0,1);
    fabbo(num);
    return 0;
}