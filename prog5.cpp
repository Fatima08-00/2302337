#include<iostream>
using namespace std;
int main()
{
    float fnt,cel;
    cout<<"enter the temperature in fahrenheit:";
    cin>>fnt;
    cel=(fnt-32)*(5/9.0);
    cout<<"temperature in celsius is:"<<cel;
    return 0;
}