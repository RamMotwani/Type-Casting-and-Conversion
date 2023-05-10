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
    Complex(int x)
    {
        cout<<"Parameterized constructor called"<<endl<<endl;
        real=x;
        imag=x;
    }
    void display()
    {
        cout<<"Real = "<<real<<" imaginary = "<<imag<<endl<<endl;
    }
};
int main()
{
    Complex c1;
    int a=5;
    c1=a;
    c1.display();
    return 0;

}
