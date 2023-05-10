#include<iostream>
using namespace std;
class Rupee
{
    int rs;
public:
    Rupee()
    {
        cout<<"Default constructor called"<<endl<<endl;
    }
    Rupee(int x)
    {
        cout<<"Parameterized constructor called"<<endl<<endl;
        rs=x;
    }
    void display()
    {
        cout<<"Rupee = "<<rs<<endl<<endl;
    }
    operator int()
    {
        return rs;
    }
};
int main()
{
    Rupee r=10;
    int x=(int)r;
    cout<<x<<endl<<endl;
    return 0;
}
