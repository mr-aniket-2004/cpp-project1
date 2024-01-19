#include<iostream>
#include<conio.h>
using namespace std;
class cuboid
{
    float len, hei, bre;
    public:
    void setvalues(float x, float y, float z)
    {
        len=x;
        hei=y;
        bre=z;
    }
    void getvalue()
    {
        cout<<"the length of cuboid---"<<len;
        cout<<"\n the heigth of cuboid---"<<hei;
        cout<<"\n the breadth of cuboid---"<<bre;
    }
    inline float volume(float x, float y, float z)
    {
        return(x*y*z);
    }
    inline float sruface(float x, float y, float z)
    {
        return(2*(x*y+x*z+y*z));
    }
};
int main()
{
    int l,h,b;
    float v,s;
    cout<<"enter the length----";
    cin>>l;
    cout<<"enter the heigth----";
    cin>>h;
    cout<<"enter the breadth----";
    cin>>b;
    cuboid c;
    c.setvalues(l,h,b);
    c.getvalue();
    v=c.volume(l,h,b);
    s=c.sruface(l,h,b);
    cout<<"\nthe voulme of cuboid---"<<v;
    cout<<"\n the surface area of cuboid ----"<<s;
}