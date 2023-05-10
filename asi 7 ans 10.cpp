#include<iostream>
using namespace std;
class Rupee
{
    float rs;
public:
    Rupee()
    {
        cout<<"Default rupee constructor called"<<endl<<endl;
    }
    float userup()
    {
        return rs;
    }
    Rupee(int x)
    {
        rs=x;
    }
    void display()
    {
        cout<<"rupee = "<<rs<<endl<<endl;
    }
};

class Dollar
{
    float dr;
public:
    Dollar()
    {
        cout<<"default dollar constructor called"<<endl<<endl;
    }
    void display()
    {
        cout<<"dollar = "<<dr<<endl<<endl;
    }
    Dollar(Rupee x)
    {
        dr=(x.userup())/100;
    }
    operator Rupee()
    {
        return dr*100;
    }
};

int main()
{
  Rupee r = 23;
  Dollar d = r; // Rupee to Dollar conversion
  d.display();
  r.display();
  r =(Rupee)d; // Dollar to Rupee Conversion
  d.display();
  r.display();
 return 0;
}
