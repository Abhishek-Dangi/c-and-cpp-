#include<stdio.h>
void main()
{
    int marks[2][4]= {{23,43,23,11},
                         {1,2,3,4}}; 
    int i,j;
    // for(i=0;i<4;i++) //for user input in arry
    // {
    // printf("enter the value of %d element of the arry\n",i);
    // scanf("%d",&marks[i]);

    // }
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        printf("the value of %d %d element of the arry is %d \n",i ,j,marks[i][j]);
    }
    printf("\n");
    // marks[0]=34;  // give value one by one
    // marks[1]= 23;
    // marks[2]=43;
    // marks[3]=46;
    // printf("marks of student 1 is %d",marks[0]);
    // printf("marks of student 1 is %d",marks[1]);


}



