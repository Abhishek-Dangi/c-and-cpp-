// print any value without return type with argument

#include<stdio.h>
void display(int);
void main()
{
    display(10);  // call by x=10

    int num;      // assign variable num
    num = 20;     // give value of num is 20
    display(num); // call display 


    printf("enter the value\n");
    scanf("%d",&num);       // user input type  
    display(num);           //call display
}
    void display(int x) // massage of displya is print on this line ever time call display write this line on output.. 
    {
        printf("vale of x is %d\n",x);
    }
