#include<stdio.h>
void main()
{
    int password,repass;
    printf("enter the first password\n");
    scanf("%d",&password);
    printf("enter re-password\n");
    scanf("%d",&repass);
    if(password == repass)
    {
        printf("your password is match \n");
    }
    else{
        printf("enter password again . password does not match\n");
    }

}