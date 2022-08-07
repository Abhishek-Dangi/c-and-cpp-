// #include<stdio.h>
// void  main()
// {
//     int i, num,sum=0;
//     printf("enter the number is:\n"); 
//     scanf("%d",&num);
//     printf("1 + ");
//     for(i=2;i<=num-1;i++)
//     printf("1/%d+",i);
//     for(i=1;i<=num;i++)
//     sum =sum+1;
//     printf("1/%d",num);
//     printf("\nsum = 1/%d",sum+1/num);
  
// }


#include<stdio.h>
void main()
{
    int i,num,sum=0;
    printf("enter the number is:\n");
    scanf("%d",&sum);
    printf("1 + ");
    for(i=2;i<=num-1;i++)
    printf("1/%d+",i);
    for(i=1;i<=num;i++)
    sum = sum+1;
    printf("1/%d",num);
    printf("\n sum = 1/%d",sum+1/num);
}
