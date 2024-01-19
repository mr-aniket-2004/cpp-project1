#include <iostream>
#include <conio.h>
using namespace std;
class sumdata
{
    int a, b, c, sum,s=0, i, n;
    int arr[40];

public:
    void intsum()
    {
        cout << "enter the two number---";
        cin >> a >> b;
    }
    void display1()
    {
        sum = a + b;
        cout << "the addition---" << sum;
    }
    void floatsum()
    {
        cout << "enter the three number---";
        cin >> a >> b >> c;
    }
    void display2()
    {
        sum = a + b + c;
        cout << "the addition---" << sum;
    }
    void array()
    {
        cout << "enter the size of array---";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void display3()
    {
        for (i = 0; i < n; i++)
        {
            s= s + arr[i];
        }
        cout << "the addition of array element---" << s;
    }
};

int main()
{
    int ch;
    sumdata s1;
    cout << "1. addition of two integer\n 2. addition of three integer\n 3. addition of array element";
    do
    {
        cout << "\nenter the choice----";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.intsum();
            s1.display1();
            break;
        case 2:
            s1.floatsum();
            s1.display2();
            break;
        case 3:
            s1.array();
            s1.display3();
            break;
        default:
            break;
        }
    } while (ch != 4);
}