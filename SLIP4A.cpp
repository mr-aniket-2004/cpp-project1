#include<iostream>
#include<conio.h>
using namespace std;
int work(char wname[], int whour, int wpay=700)
{
    int salary;
    salary=whour*wpay;
    return salary;
}
int main(){
    int h;
    char name[50];
    int sal;
    cout<<"enter the worker name--";
    cin>>name;
    cout<<"enter the workering hour--";
    cin>>h;
    sal=work(name,h);
    cout<<"the salary of worker---"<<sal;
    return 0;
}