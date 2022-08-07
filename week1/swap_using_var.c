// #include<stdio.h>

// int main()

// {
//     int a , b, c;
//     printf("enter the value of a b ");
//     scanf("%d %d" , &a , &b);
//     printf("swaping result is  ");
//     c = a;
//     a = b;
//     b = c;
//     printf("%d %d", a , b);
// }







#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the variable a and b");
    scanf("%d %d", &x , &y);
    z = x;
    x = y;
    y = z;
    printf("value of swaping varible is %d %d  " , x , y);
 
}