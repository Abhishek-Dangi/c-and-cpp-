#include<stdio.h>
#include"armost_hea.h"
void main()

{
    display();
    show(20);
    int res = power(5,4);
    printf("power is %d\n",res);
    
    int result = armstrong();
    if(result)
    {
        printf("Given num is armstrong..\n");
    }
    else
    {
        printf("given num is not armstrong..\n");
    }
}