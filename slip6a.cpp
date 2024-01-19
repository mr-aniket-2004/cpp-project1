#include <iostream>
#include <conio.h>
using namespace std;
class rectangle;
class squre
{
    int l, a;

public:
    void getdata()
    {
        cout << "enter the length of squre---";
        cin >> l;
    }
    void area()
    {
        a = l * l;
        cout << "the area of squre---" << a << endl;
    }
    friend void comp(squre, rectangle);
};
class rectangle
{
    int l, ar,b;

public:
    void input()
    {
        cout << "enter the length and breadth of rectangle----";
        cin >> l>>b;
    }
    void area1()
    {
        ar = l * b;
        cout << "the area of squre---" << ar << endl;
    }
    friend void comp(squre, rectangle);
};

void comp(squre s1, rectangle r1)
{
    if (s1.a>r1.ar)
    {
        cout<<"the area of squre is max";
    }
    else
    {
        cout<<"the area of rectangle is max";
    }
}

int main()
{
    squre s1;
    rectangle r1;
    s1.getdata();
    s1.area();
    r1.input();
    r1.area1();
    comp(s1,r1);

}