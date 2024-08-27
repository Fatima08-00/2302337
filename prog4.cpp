#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    cout<<"before swapping \n"<<"a="<<a<<"\n"<<"b="<<b<<"\n";
    c=a;
    a=b;
    b=c;
    cout<<"after swapping \n"<<"a="<<a<<"\n"<<"b="<<b;

    return 0;
}