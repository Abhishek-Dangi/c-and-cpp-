// #include<iostream>
// using namespace std;

// class fact
// {
//     private:
//     int fact,i,n;
//     public:
//     void getData()
//     {
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         fact = fact*i;
//     cout<<"factorial of "<<n <<"is"<<fact;
//     }
//     }
//     void operData()
//     {   
//     }
//     void showData()
//     {
        
//     }
// };
// int main()
// {
//     fact f;
//     f.getData();
//     f.operData();
//     f.showData();
// }

// #include <iostream>
// using namespace std;
// int main() {
//    int n , fact = 1, i;
//    cout<<"enter the number"<<endl;
//    cin>>n;
//    for(i=1; i<=n; i++)
//    fact = fact * i;
//    cout<<fact;
//    return 0;
// }

#include<iostream>
using namespace std;
class palin
{
    private:
    int n,temp,r,result;
    public:
    void getData()
    {
         cout<<"enter the number"<<endl;
         cin>>n;     
    }
    void meth()
    {
        temp=n;
        while (n>0)
    {
        r = n%10;
        result = (result*10)+r;
        n = n/10;
    }        
    }
    void con()
    {
        if(temp == result)
    {
        cout<<"palindome";
    }
    else{
        cout<<"not palindome";
    }    
    }
};
int main()
{
    palin p;
    p.getData();
    p.meth();
    p.con();
}