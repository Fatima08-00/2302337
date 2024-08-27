#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int roll_no,age;
    string name;
    string add;
    cout<<"Enter the following are the details of the student:\n";
    cout<<"NAME:";
    cin>>name;
    cout<<"ROLL NO:";
    cin>>roll_no;
    cout<<"AGE:";
    cin>>age;
    cout<<"ADDRESS:";
    cin>>add;
     cout<<"\n The following are the details of the student:\n";
    cout<<"NAME:"<<name<<"\n"<<"ROLL NO:"<<roll_no<<"\n"<<"AGE:"<<age<<"\n"<<"ADDRESS:"<<add;

    return 0;
}