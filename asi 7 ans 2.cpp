#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
    Complex()
    {
        cout<<"Default constructor called"<<endl<<endl;
    }

    operator int()
    {
        cout<<"int() called"<<endl<<endl;
        return real+imag;
    }
    void setdata(int x,int y)
    {
        real=x;
        imag=y;
    }
    void display()
    {
        cout<<"Real = "<<real<<" imaginary = "<<imag<<endl<<endl;
    }

};
int main()
{
    Complex c1;
    c1.setdata(5,4);
    c1.display();
    int x;
    x=(int)c1;
    cout<<x<<endl<<endl;
    return 0;

}
