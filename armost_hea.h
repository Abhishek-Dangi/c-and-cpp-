
void display()
{
    printf("Display called...\n");
}
void show(int num)
{
    printf("Value of num is :%d\n",num);
}
int power(int x , int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p = p*x;
    }
    return p;
}
int armstrong()
{
    int num , res , n ,sum=0;
    printf("Enter any number..\n");
    scanf("%d",&sum);
    
    n= num;
    while(n!=0)
    {
        res= n%10;
        sum = (res*res*res)+sum;
        n = n/10;
    }
    if(num==sum)
    {
        return 1;
    }
    else{
        return 0;
    }
}