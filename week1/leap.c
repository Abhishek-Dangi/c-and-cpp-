// #include<stdio.h>
// void main()
// {
//    int year;
//    printf("enter the year");
//    scanf("%d",&year);
//    if((year%4==0) && ((year%400==0) || (year%100!=0)))
//    {
//        printf("This year is leap year:\n",&year);
//    }
//    else{
//        printf("This year is not leap year:\n",&year);

//    }

// }



#include<stdio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if((year%4==0) && ((year%400==0) || (year%100)))
    {
        printf("This year is leap year\n",&year);
    }
    else{

        printf("This year is NOT leap year\n",&year);
}
}