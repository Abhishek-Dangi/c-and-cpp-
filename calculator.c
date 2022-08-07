#include<stdio.h>
void main()
{ 
  int a,b,c;
  char oper;
  printf("enter operator");
  scanf("%c",&oper);
  printf ("number a b ");
  scanf("%d %d",&a,&b);
  
  switch(oper)
  {
  case 'a' :
  {
  
    c= a+b;
    printf("%d*%d=%d",a,b,c);
    break;
  }
    case '-' :
    {
    c= a-b;
    printf("%d-%d=%d",a,b,c);
    break;
    }
  
  default:
  printf("wrong oper");
    break;
  }
}