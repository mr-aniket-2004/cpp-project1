#include<iostream>
#include<conio.h>
using namespace std;
class learning_ifo
{
    protected:
    int roll_no;
    char stud_name[50],s_class[50];
    float percentage;
    public:
    void input()
    {
        cout<<"enter the roll no----";
        cin>>roll_no;
        cout<<"enter the student_name----";
        cin>>stud_name;
        cout<<"enter the class----";
        cin>>s_class;
        cout<<"enter the percentage----";
        cin>>percentage;
    }
};
class earning_info
{
    protected:
    int hour,charge;
    public:
    void getdata()
    {
        cout<<"enter the working hours---";
        cin>>hour;
        cout<<"enter the chargers---";
        cin>>charge;
    }
};

class earn_info:public learning_ifo,public earning_info
{
    int total;
    public:
    earn_info()
    {
        total=0;
    }
    void display()
    {
        cout<<"\nthe roll no---"<<roll_no;
        cout<<"\nthe student name---"<<stud_name;
        cout<<"\nthe class---"<<s_class;
        cout<<"\nthe percentage---"<<percentage;
        cout<<"\nthe working hours---"<<hour;
        cout<<"\nthe charges per hours---"<<charge;
    }
    void cal()
    {
        total=hour*charge;
        cout<<"\nthe total salary ----"<<total;
    }
};


int main()
{
    earn_info aa;
    aa.input();
    aa.getdata();
    aa.display();
    aa.cal();

}