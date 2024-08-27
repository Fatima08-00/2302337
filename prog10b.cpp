#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter a number:";
    cin>>n;
     i = 1;
    while(i<=n)
    {
        fact=fact*i;
    }
    i++;
    cout<<"factorial of"<<""<<n<<"is:"<<fact;
    return 0;
}