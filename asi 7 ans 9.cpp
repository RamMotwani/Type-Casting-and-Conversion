#include<iostream>
using namespace std;
class Dollar
{
    int dr;
public:
    Dollar()
    {
        cout<<"default constructor called"<<endl<<endl;
    }
    Dollar(int x)
    {
        dr=x;
    }
    void display()
    {
        cout<<"Dollar = "<<dr<<endl<<endl;
    }


};
int main()
{
    int x=50;
    Dollar d;
    d=x;
    d.display();
    return 0;
}
