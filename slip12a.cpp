#include <iostream>
#include <conio.h>
using namespace std;
class product
{
    int product_id, qty, price;
    char product_name[50];
    static int x;

public:
    void getdata()
    {
        cout << "enter the product id--";
        cin >> product_id;
        cout << "enter the product_name--";
        cin >> product_name;
        cout << "enter the product Qantity--";
        cin >> qty;
        cout << "enter the product price--";
        cin >> price;
        x++;
    }
    void display()
    {
        cout << "product id--" << product_id;
        cout << "\nprodct name---" << product_name;
        cout << "\n product quantity---" << qty;
        cout << "\n product price--" << price<<endl;
    }
    static void putdata()
    {
        cout << "the number of total product----" << x;
    }
};
int product::x;
int main()
{
    int ch, n, i;
    product p[30];
    cout << "enter the product range---";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        p[i].getdata();
    }
    for ( i = 0; i < n; i++)
    {   
        cout<<"-------------------------------------------------------------------\n";
        p[i].display();
        cout<<"-------------------------------------------------------------------\n";
    }
    product::putdata();
  
    
}