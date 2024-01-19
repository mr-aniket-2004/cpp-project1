#include<iostream>
#include<conio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class fixdeposit
{
    int fd_no,fd_amt,i,month,p;
    char cus_name[50];
    public:
    fixdeposit(int x_no, char x_name, int x_amt,int x_month,int i=9/100)
    {
        fd_no=x_no;
        strcpy(cus_name,x_name);
        fd_amt=x_amt;
        month=x_month;
    }
    void display()
    {   
        month=month/12;
        p=fd_amt*(1+i*month);
        cout<<"----------------------------------------------------------------";
        cout<<"\n deposit number -----"<<fd_no;
        cout<<"\n custmer name  -----"<<cus_name;
        cout<<"\n depoite amount -----"<<fd_amt;
        cout<<"\n interest received  -----"<<i;
        cout<<"\n maturity amount -----"<<p;
        cout<<"\n number of month -----"<<month;
        cout<<"----------------------------------------------------------------";
    }
};

int main()
{
    int a,c,d;
    char b[50];
    cout<<"enter the deposit number---";
    cin>>a;
    cout<<"enter customer name---";
    cin>>b;
    cout<<"enter the deposited amout---";
    cin>>c;
    cout<<"enter the number of month----";
    cin>>d;
    fixdeposit f1(a,b,c,d);
    f1.display();

}