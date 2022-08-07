#include<iostream>
using namespace std;
class fah
{
    private:
    int cel,fah;
    public:
    void getData()
    {
        cout<<"enter the fahrenheit"<<endl;
        cin>>fah;
    }
    void formula()
    {
        cel = (fah-32)*5/9;
    }
    void showData()
    {
        cout<<cel;
    }
};
int main()
{
    fah f;
    f.getData();
    f.formula();
    f.showData();
}