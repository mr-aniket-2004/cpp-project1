#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter the value of a and b--";
        cin >> a >> b;
    }
    void display()
    {
        cout << "the values ---" << a << "------" << b;
    }
    friend int sum(demo d1)
{
    return(d1.a+d1.b);
}
};
class demo2
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter the value of a and b--";
        cin >> a >> b;
    }
    void display()
    {
        cout << "the values ---" << a << "------" << b;
    }
    friend int sum(demo2 s1)
    {
            return (s1.a + s1.b);
    }
};

int main()
{
    int x,y;
    demo d1;
    demo2 s1;
    d1.getdata();
    d1.display();
    y= sum(d1);
    cout<<"\n the value of second----"<<y<<endl;
    s1.getdata();
    s1.display();
    x= sum(s1);
    cout<<"\n the value of second----"<<x<<endl;
    if (x==y)
    {
        cout<<"\both are equal";
    }
    else if (x>y)
    {
        cout<<"\n second is high";
    }
    else
    {
        cout<<"\n frist is right";
    }
    
    
    return 0;
}