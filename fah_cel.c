#include<stdio.h>

int main()
{
    float cel , fah;
    printf("enter Fahrenheit");
    scanf("%f", &fah);
    cel = (fah-32)*5/9;
    printf("%f",cel);

}