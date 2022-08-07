#include<stdio.h>
void main()
{
    int phy, chem, math,per, total;
    printf("enter the marks of math\n");
    scanf("%d",&math);
    printf("enter the marks of phy\n");
    scanf("%d",&phy);
    printf("enter the marks of chem\n");
    scanf("%d",&chem);
    
    if (phy<33)
    {
        if(chem<33)
        {
            if(math<33)
           {
             printf("fail in all subject\n");
            
            }
         
            else
                {
                    printf("fail in phy and chem\n");
                }
                    
        }
     else if(math<33)
             {
                 printf("fail in phy and maths\n");
             }
         else
         {
                 printf("supply in phy\n");
         }
    }
    else if(chem<33)
    if(math<33)
        {
            printf("fail in chem and phy\n");
        }
        else
        {
            printf("supply in chem\n");
        }
        else if(math<33)
        {
            printf("supply in maths\n");
        }
    else
    {
        printf("pass in all\n");
    }
    total = phy+chem+math;
    per = total/3;
    if(per>=65)
    {
    printf("Pass in 1st division %d\n",per);
    }
    else if(per>=55)
    {
        printf("Pass in 2st division%d\n",per);
    }
    else if(per>=45)
    {
        printf("Pass in 3st division%d\n",per);
    }  
    else
    {
        printf("\n");
    }

}