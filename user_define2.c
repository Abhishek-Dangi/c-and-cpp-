// //without return type without argument
// #include<stdio.h>
// void fact();
// void main()
// {
//     fact();
// }
// void fact()
// {
//     int f=1,num;
//     printf("enter the number \n");
//     scanf("%d",&num);
//     for(int i=1; i<=num;i++)
//     {
//         f = f*i;
//     }
//         printf("factorial is %d\n",f);
//     }


// // with return type with argument factorial
// #include<stdio.h>
// int fact(int x);
// void main()
// {
//     int num,z;
//     printf("enter the number:\n");
//     scanf("%d",&num);
//     z = fact(num);
//     printf("the factorial of %d is %d",num,z);
// }
// int fact(int x)
// {
//     int i,a=1;
//     for ( i = 1; i <=x; i++)
//     {
//         a = a*i;
//     }
//     return(a);
    
// }

// program to print prime number

#include<stdio.h>
int check_prime(int  a );
 
void main()
{
   int n, result;
 
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);
 
   result = check_prime();
   printf("%d",result);
 

}
 
int check_prime(int a)
{
   int i,j,c;
 
   for ( i=0; i<=a; i++ )
   { 
       for (j=2; j<a; j++)
       {
      if ( i%j == 0 )
      break;
     return (0) ;
   }
   if(i==j)
   return a;
}
} // wrong logic


