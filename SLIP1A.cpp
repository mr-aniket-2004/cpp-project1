#include<iostream>
#include<conio.h>
using namespace std;
inline int find(int x,int y)
{
    return((x>y)?x:y);
}
int main()
{
    int a,b,c;
   cout<<"enter the two number--";
    cin>>a>>b;
    c=find(a,b);
    cout<<"the maximum number---"<<c;
    return 0;
}