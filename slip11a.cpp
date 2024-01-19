#include<iostream>
#include<conio.h>
using namespace std;
class date
{
    int dd,mm,yy;
    public:
    // date()
    // {
    //     yy=2023;
    // }
    date(int m,int n)
    {
        dd=m;
        mm=n;
        yy=2024;
    }
    void display()
    {
        switch (mm)
        {
        case 1:
            cout<<dd<<":"<<"jan"<<":"<<yy;
            break;
        case 2:
            cout<<dd<<":"<<"feb"<<":"<<yy;
            break;
        case 3:
            cout<<dd<<":"<<"Mar"<<":"<<yy;
            break;
        case 4:
            cout<<dd<<":"<<"Apr"<<":"<<yy;
            break;
        case 5:
            cout<<dd<<":"<<"May"<<":"<<yy;
            break;
        case 6:
            cout<<dd<<":"<<"jun"<<":"<<yy;
            break;
        case 7:
            cout<<dd<<":"<<"jul"<<":"<<yy;
            break;
        case 8:
            cout<<dd<<":"<<"aug"<<":"<<yy;
            break;
        case 9:
            cout<<dd<<":"<<"sep"<<":"<<yy;
            break;
        case 10:
            cout<<dd<<":"<<"oct"<<":"<<yy;
            break;
        case 11:
            cout<<dd<<":"<<"nov"<<":"<<yy;
            break;
        case 12:
            cout<<dd<<":"<<"dec"<<":"<<yy;
            break;
        
        default:
        cout<<"enter worng month ";
            break;
        }
    }
};

int main()
{
    int day,mon;
    cout<<"enter the date and month---";
    cin>>day>>mon;
    date d1(day,mon);
    d1.display();
}