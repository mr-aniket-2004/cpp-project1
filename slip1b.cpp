#include <iostream>
#include <conio.h>
using namespace std;
class account
{
protected:
    char a_name[50];
    int mobi_no;

public:
    void getdata()
    {
        cout << "enter the account holder name---";
        cin >> a_name;
        cout << "enter the mobile no---";
        cin >> mobi_no;
    }
    void display()
    {
        cout << "\n the account holder name---" << a_name;
        cout << "\n the mobile no---" << mobi_no;
    }
};

class saving_account : public account
{
protected:
    int s_acc_no, bal, avg,total;

public:
    void getdata1()
    {
        cout << "enter the  saving account no----";
        cin >> s_acc_no;
        cout << "enter the balance ---";
        cin >> bal;
    }
    void display1()
    {
        cout << "\n the saving account no---" << s_acc_no;
        cout << "\n the balance ----" << bal;
    }
    void cal()
    {
        avg = bal * 1 * 5 / 100;
        cout << "\nthe interest received ----" << avg;
        total=bal+avg;
        cout<<"the total balance with adding interest---"<<total;
    }
};

class current_account : public account
{
protected:
    int c_acc_no, bal1, avg1,total1;

public:
    void getdata2()
    {
        cout << "enter the  current  account no----";
        cin >> c_acc_no;
        cout << "enter the balance ---";
        cin >> bal1;
    }
    void display2()
    {
        cout << "\n the current  account no---" << c_acc_no;
        cout << "\n the balance ----" << bal1;
    }
    void cal1()
    {
        avg1 = bal1 * 1 * 1.5 / 100;
        cout << "\nthe interest received -------" << avg1;
        total1=bal1+avg1;
        cout<<"the total balance with adding interest---"<<total1;
    }
};

int main()
{
    int ch, n, i;
    saving_account s1[10];
    current_account c1[10];
    cout << "1. enter the deatils of account holder \n 2. display the details of account holder\n";
    do
    {
        cout << "\nenter the choice---";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nenter the number of account holder---";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                s1[i].getdata();
                s1[i].getdata1();
                c1[i].getdata2();
            }
            cout << "-----------------------------------------------------------------------------";
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                s1[i].display();
                s1[i].display1();
                s1[i].cal();
                c1[i].display2();
                c1[i].cal1();
                cout << "\n----------------------------------------------------------------------------------";
            }
            break;

        case 3:
            exit(0);
            break;
        default:
            cout << "\n enterd wrong choice";
            break;
        }

    } while (ch != 3);
}