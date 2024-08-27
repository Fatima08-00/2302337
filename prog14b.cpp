#include<iostream>
using namespace std;
//call by value
void swap(int x,int y )
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"after swap x="<<x<<" and y="<<y;
   
}


int main()
{ 
    int x,y;
    cout<<"enter the values of x and y:";
    cin>>x>>y;
    cout<<"before swap x="<<x<<"  and y="<<y<<endl;
    swap(x,y);
   
     
    return 0;
}