#include<iostream>
using namespace std;
class time
{
    int second;
public:
    time()
    {
        cout<<"default constructor called"<<endl<<endl;
    }
    void display()
    {
        cout<<"You have "<<second<<" seconds"<<endl<<endl;
    }
    time(int x)
    {
        cout<<"parameterized constructor called"<<endl<<endl;
        second=x*60;

    }

};
int main()
{
    int duration;
    cout<<"Enter duration in minutes"<<endl<<endl;
    cin>>duration;
    time t1=duration;
    t1.display();
    return 0;
}
