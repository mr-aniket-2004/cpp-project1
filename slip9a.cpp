#include<iostream>
#include<conio.h>
using namespace std;
class myarr
{
    int *a;
    int i,sum=0,m;
    public:
    myarr(int n)
    {
        m=n;
        a=new int[m];
        cout<<"enter the elements-----";
        for ( i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        
    }
    void display()
    {
        for ( i = 0; i < m; i++)
        {
            cout<<a[i]<<"----";
        }
        
    }
    void cal()
    {
        for ( i = 0; i < m; i++)
        {
            sum=sum+a[i];
        }
        cout<<"the sum of array elements---"<<sum;
        
    }
};


int main()
{
    int n;
    cout<<"enter the size of array---";
    cin>>n;
    myarr m1(n);
    m1.display();
    m1.cal();
}