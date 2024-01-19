#include <iostream>
#include <conio.h>
using namespace std;
class clock
{
    int h,m;
    static int s;
    public:
    void getdata()
    {
        cout<<"enter the hours , minutes, second----";
        cin>>h>>m>>s;
    }
    void display()
    {
        cout<<h<<":"<<m<<":"<<s;
        s++;
    }
};
int class::s;
int main()
{
    clock c1,c2,c3;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c3.getdata();
    c3.display();
}