#include<iostream>
using namespace std;
//call by reference
void swap(int* a,int* b )
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
   
}


int main()
{ 
    int x,y;
    cout<<"enter the values of x and y:";
    cin>>x>>y;
    cout<<"before swap x="<<x<<"  and y="<<y<<endl;
    swap(&x,&y);
    cout<<"after swap x="<<x<<" and y="<<y;
     
    return 0;
}