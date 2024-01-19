#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &p, int &q)
{
    int c;
    c=p;
    p=q;
    q=c;
}
int main()
{
    int a,b;
    cout<<"enter the two number--";
    cin>>a>>b;
    swap(a,b);
    cout<<"value of a---"<<a<<endl<<"the value of b---"<<b;
    return 0;
}