#include<iostream>
using namespace std;
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
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }

};

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
    void display()
    {
        cout<<"product value"<<endl<<x<<endl<<y<<endl<<endl;
    }
    operator item()
    {
        item i2;
        i2.setdata(x,y);
        return i2;
    }
};

int main()
{
 item i1;
 Product p1;
 p1.setdata(3,4);
 i1=(item)p1;
 i1.display();
 return 0;
}



