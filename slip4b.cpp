#include <iostream>
#include <conio.h>
using namespace std;
class emp
{
protected:
    int emp_code;
    float salary;
    char name[50];

public:
    void input()
    {
        cout << "enter the emp code--";
        cin >> emp_code;
        cout << "enter the emp name--";
        cin >> name;
    }
    void display()
    {
        cout << "\nthe emp code---" << emp_code;
        cout << "\n the emp name---" << name;
    }
};

class full_time : public emp
{
    int daily_wages, days;

public:
    void input1()
    {
        cout << "enter the daily wages----";
        cin >> daily_wages;
        cout << "enter the no of days---";
        cin >> days;
    }
    void display1()
    {
        cout << "\n daily wages---" << daily_wages;
        cout << "\n no of days----" << days;
        salary = daily_wages * days;
        cout << "\n total salary ---" << salary;
    }
};
class part_time : public emp
{
    int hourly_wages, no_of_hours;

public:
    void input2()
    {
        cout << "enter the hourly wages----";
        cin >> hourly_wages;
        cout << "enter the no of hour---";
        cin >> no_of_hours;
    }
    void display2()
    {
        cout << "\n daily wages---" << hourly_wages;
        cout << "\n no of days----" << no_of_hours;
        salary = hourly_wages * no_of_hours;
        cout << "\n total salary ---" << salary;
    }
};

int main()
{
    int ch, ch2, i, n;
    part_time p1[10];
    full_time f1[10];
    cout << "\n1. enter the emp details\n 2. display the emp details\n ";
    do
    {
        cout << "\n enter the choice--";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n enter the number of emp---";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                f1[i].input();
                cout << "\n choice-----1.for full time\n 2. part time\n";
                cin >> ch2;
                if (ch2 == 1)
                {
                    f1[i].input1();
                }
                else
                {
                    p1[i].input2();
                }
            }
            cout << "----------------------------------------------------------------------------------------------------";
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                f1[i].display();
                f1[i].display1();
                cout << "\n---------------------------------------------------------------------------------------------------";
                p1[i].display();
                p1[i].display2();
            }

        default:
            cout << "entered wrong choice";
            break;
        }
    } while (ch != 3);
}