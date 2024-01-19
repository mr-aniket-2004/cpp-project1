#include<iostream>
#include<conio.h>
using namespace std;
inline int perimeter(int l,int b)
{
    return((l+b)*2);
}
inline int area(int l, int b)
{
    return(l*b);
}
int main()
{
    int l,b;
    cout<<"enter the length and breadth of rectangle---";
    cin>>l>>b;
    cout<<"\n the perimeter of rectangle ----"<<perimeter(l,b);
    cout<<"\n the perimeter of rectangle ----"<<area(l,b);
    return 0;
}