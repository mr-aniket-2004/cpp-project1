#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class city
{
    int city_code;
    char city_name[50];
    int population;

public:
    void getdata()
    {
        cout << "enter the code of city---";
        cin >> city_code;
        cout << "enter the name of city---";
        cin >> city_name;
        cout << "enter the population of city---";
        cin >> population;
    }
    void display()
    {
        cout << "the code of city---" << city_code << endl;
        cout << "the name of city---" << city_name << endl;
        cout << "the population of city---" << population << endl;
    }
};
int main()
{
    int pin, p, ch,n;
    char name[50];
    city c1[10];
    cout << "1.accpet the deatils \n 2. display by order\n 3.specific city\n";
    do
    {
        cout << "enter the choice---";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int i;
            cout << "enter the number of city--";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                c1[i].getdata();
            }

            break;
        case 2:
            for ( i = 0; i < n; i++)
            {
                    c1[i].display();
            }
            

        case 3:
            char cname[30];
            int i;
            cout<<"enter the city name for searching---";
            cin>>cname;
            for ( i = 0; i < n; i++)
            {
                   if (strcmp(c1[i].city_name,cname)==0)
                   {
                        c1[i].display();
                   }
                    
            }
            
        default:
            break;
        }
    } while (ch != 4);

    return 0;
}