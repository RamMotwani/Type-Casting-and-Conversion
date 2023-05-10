#include<iostream>
using namespace std;
class Product
{
    int x,y;
public:
    Product()
    {
        cout<<"Default Product constructor called"<<endl<<endl;
    }
    void setdata(int i,int j)
    {
        x=i;
        y=j;
    }
    int usex()
    {
        return x;
    }
    int usey()
    {
        return y;
    }
    void display()
    {
        cout<<"product value"<<endl<<x<<endl<<y<<endl<<endl;
    }
};

class item
{
    int a,b;
public:
    item()
    {
        cout<<"Default item constructor called"<<endl<<endl;
    }
    void display()
    {
        cout<<"item value"<<endl<<a<<endl<<b<<endl<<endl;
    }
    item(Product p)
    {

        a=p.usex();
        b=p.usey();
    }
};
int main()
{
 item i1;
 Product p1;
 p1.setdata(3,4);
 i1=p1;
 i1.display();
 return 0;
}

