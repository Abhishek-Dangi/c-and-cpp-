// #include<stdio.h>
// void main()
// {
//      int n , sum=0 ,r, temp;
//      printf("enter the number :\n");
//      scanf("%d",&n);
//      temp =n;
//      while(temp != 0)
//      {
//          r = temp % 10;
//          sum += r*r*r;
//          temp/=10;

//      }
//      if(sum == n)
//      {
//          printf("arm number");
//      }
//      else
//      {
//          printf("not");
//      }

// }


#include<stdio.h>
void main()
{
     int n , sum=0 ,r, temp;
     printf("enter the number :\n");
     scanf("%d",&n);
     temp =n;
     while(n<0)
     {
        r = n%10;
            sum = (sum*10)+r;
        n /=10;
     }
if(temp == n)
     {
         printf("arm number");
     }
     else
     {
         printf("not");
     }

}



