#include<iostream>
#include<conio.h>
using namespace std;
inline int diameter(int x)
{
    return(2*x);
}
inline float circum(int p)
{
    return(2*3.14*p);
}
inline float area(int m)
{
    return(3.14*m*m);
}
int main()
{
    int r,d;
    float a,c;
    cout<<"enter the radius of circle-----";
    cin>>r;
    d=diameter(r);
    c=circum(r);
    a=area(r);
    cout<<"the diameter of circle---"<<d;
    cout<<"\nthe circumfrance of circle---"<<c;
    cout<<"\n the area of circle---"<<a;

}