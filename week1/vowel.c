#include<stdio.h>
void main()
{
    char ch;
    printf("enter the char :\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
    {
        printf("that number are vowel %c\n",ch);
    }
    else{
        printf("that number is not vowel %c \n",ch);

    }
}