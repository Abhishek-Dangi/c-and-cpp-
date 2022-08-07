// addition of two num using function without return with parameter
#include<stdio.h>
void add(int , int );
void main()
{
    int a, b;
    printf("Enter the value:\n ");
    scanf("%d %d",&a,&b);
    add(a,b);     // call by actual parameter

}
void add( int a, int b)   // a and b formal parameter
{
    printf("addtion %d ",(a+b));   //actual parameter and formal parameter may be same
}


// // multiplication of three number user input by without return with parameter
// #include<stdio.h>
// void addition(int, int ,int ,int);
// void main()
// {
//     int a, b, c,d;
//     printf("enter the numbers :\n");
//     scanf("%d %d %d", &a,&b,&c);
//     d = a*b*c;
//     addition(a , b, c,d);

// }
// void addition(int a, int b , int c,int d)
// {
//     printf("sum of three num is %d\n",d);
// }