// #include <stdio.h>

// int main()
// {
// printf("hello");
// return 0;
// }

/* print hello world without parameters*/
#include<stdio.h>
void hello();
void main(){
    printf("main called .\n");
    hello();
    hello();
    printf("main ended..\n");

}
void hello()
{
    printf("hello word \n");
}
