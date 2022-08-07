#include<stdio.h>
void main()
{
  int num, temp , rem,result = 0;
  printf("enter the number:");
  scanf("%d",&num);
   temp = num;
   while(temp != 0)
{
      rem = temp % 10;
       result +=rem * rem *rem;
      temp /= 10;
}
  if(result == num)
  printf("%d is an armtrong number", num);
  else
printf("%d is not an armtrong number",num);
}