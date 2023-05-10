#include<iostream>
using namespace std;
class invent1
{
    int a,b;
public:
    invent1()
    {
        cout<<"invent 1 Default constructor called"<<endl<<endl;
    }
    invent1(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"invent 1 values"<<endl<<a<<endl<<b<<endl<<endl;
    }
    operator float()
    {
        return a+b;
    }
    int usea()
    {
        return a;
    }
    int useb()
    {
        return b;
    }
};
class invent2
{
    int i,j;
public:
    invent2()
    {
        cout<<"invent 2 Default constructor called"<<endl<<endl;
    }
    void display()
    {
        cout<<"invent 2 values"<<endl<<i<<endl<<j<<endl<<endl;
    }
    invent2(invent1 s)
    {
        i=s.usea();
        j=s.useb();
    }

};
int main()
{
 invent1 s1(4,5);
 invent2 d1;
 float tv;
 tv=s1;
 cout<<"tv ="<<tv<<endl<<endl;
 d1=s1;
 d1.display();
 return 0;
}
