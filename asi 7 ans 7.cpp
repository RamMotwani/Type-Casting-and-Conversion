#include<iostream>
using namespace std;
class time
{
    int hour,minute;
public:
    time()
    {
        cout<<"default time constructor called"<<endl<<endl;
    }
    time(int x,int y)
    {
        hour=x;
        minute=y;
    }
    void display()
    {
        cout<<hour<<" hour "<<minute<<" minute"<<endl<<endl;
    }
    int user()
    {
        return hour;
    }
    int usem()
    {
        return minute;
    }


};

class Minute
{
    int m;
public:
    Minute()
    {
        cout<<"default minute constructor called"<<endl<<endl;
    }
    void display()
    {
        cout<<m<<" minutes"<<endl<<endl;
    }
    Minute(time t)
    {
        m=(t.user())*60+(t.usem());
    }

};
int main()
{
    time t1(2,30);
    t1.display();
    Minute min1;
    min1=t1;
    t1.display();
    min1.display();
    return 0;
}

