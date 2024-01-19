#include<iostream>
#include<conio.h>
using namespace std;
class number
{
    static int x;
    public:
    void create()
    {
        x++;
    }
    void display()
    {
        cout<<"the value of statis number---"<<x;
    }
};
int number::x;
int main()
{
    number a,b,c;
    a.create();
    a.display();
    b.create();
    b.display();
    c.create();
    c.display();
    return 0;
}