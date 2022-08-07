// #include<stdio.h>

// int main()
// {
//     int p , r , t;
//     printf("entet the principle amt.");
//     scanf("%d",&p);
//     printf("entet the rate ");
//     scanf("%d",&r);
//     printf("entet the time");
//     scanf("%d",&t);
//     int total;
//     total = p*r*t/100;
//     printf("total amt. is %d", total);
// }


#include<stdio.h>
void main()
{
    int p , r , t, total;
    printf("enter the amo. principle:");
    scanf("%d",&p);
    printf("enter the amo. rate:");
    scanf("%d",&r);
    printf("enter the amo. time:");
    scanf("%d",&t);
    total = p*r*t/100;
    printf("total amount is: %d", total);
    
}