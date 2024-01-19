#include<iostream>
#include<stdio.h>
using namespace std;
class number
{
    int *a;
    int i;
    public:
    number()
    {
        a=new int[5];
        cout<<"enter the element---";0000000000
        for ( i = 0; i < 5; i++)
        {
            cin>>a[i];
        }
        
    }
    void display()
    {
        for ( i = 0; i < 5; i++)
        {
            cout<<a[i]<<"---";
        }
        
    }

    void even()
    {
        cout<<"\nthe even number---";
        for ( i = 0; i < 5; i++)
        {
            if (a[i]%2==0)
            {
                cout<<a[i]<<"\t";
            }           
        }
        
    }
    void odd()
    {
        cout<<"\nthe odd number---";
        for ( i = 0; i < 5; i++)
        {
            if (a[i]%2!=0)
            {
                cout<<a[i]<<"\t";
            }           
        }
        
    }
};

int main()
{
    number n1;
    n1.display();
    n1.even();
    n1.odd();

}