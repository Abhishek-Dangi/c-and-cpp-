#include<stdio.h>

int main()
{
    float cel , fah;
    printf("enter Celsius");
    scanf("%f" , &cel );
    fah = (cel*9/5)+32;
    printf("%f",fah);

}