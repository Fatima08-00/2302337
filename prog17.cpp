#include<iostream>
using namespace std;
void area(int r)
{
   float a;
   const float pi=3.14;
   a=pi*r*r;
   cout<<"area of circle is "<<a<<endl;
}

void area(int l, int w)
{
    int a;
    a=l*w;
    cout<<"area of rectangle is "<<a<<endl;
}

void area(int b, int h, bool isTriangle)
{
    float a;
    if(isTriangle)
    {
        a=(0.5)*b*h;
        cout<<"area of triangle is "<<a<<endl;

    }

}

void area(int s,bool isSquare)
{
    int a;
    if(isSquare)
    {
        a=s*s;
        cout<<"area of aquare is "<<a<<endl;

    }

}

int main()
{
    int r,l,w,b,h,s;
    cout<<"enter the value of radius:";
    cin>>r;
    area(r);

    cout<<"enter the value of length and breadth:";
    cin>>l>>w;
    area(l,w);

    cout<<"enter the value of base and height:";
    cin>>b>>h;
    area(b,h,true);

    cout<<"enter the value of length of square:";
    cin>>s;
    area(s,true);

    return 0;
}