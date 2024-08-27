#include<iostream>
using namespace std;

void circlearea(int r,const float pi=3.14)
{
    float area;
    area=pi*r*r;
    cout<<"area of circle="<<area;
   
}

int main()
{
    
    circlearea(3);
    return 0;
}