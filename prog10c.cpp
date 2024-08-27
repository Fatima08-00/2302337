 #include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter a number:";
    cin>>n;
     i = 1;
     do
     {
        fact=fact*i;
         i++;
     } while(i<=n);
   
    cout<<"factorial of"<<""<<n<<"is:"<<fact;
    return 0;
}