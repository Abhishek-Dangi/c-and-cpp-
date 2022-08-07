#include<iostream>
using namespace std;
class Demo
{
    private:
    int x,y,z;
    public:
    void getData()
    {
        cout<<"enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    void showData()
    {
        cout<<"value of x ="<<x<<endl;
        cout<<"value of y ="<<y<<endl;
    }
    void add()
    {
        z = x+y;
        cout<<"addition  of x and y" << z<<endl;
    }
    void mult()
    {
        z = x*y;
        cout<<"multipication of x and y" << z<<endl;
    }
    void divid()
    {
        z = x/y;
        cout<<"divid of x and y" << z<<endl;
    }
};
int main()
{
    Demo d;
    d.getData();
    d.showData();
    d.add();
    d.mult();
    d.divid();
}
