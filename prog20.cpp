#include<iostream>
#include<string>
using namespace std;

class myclass{
    public:
    int mynum;
    string myname;

};

int main(){
    myclass student;
    student.mynum=37;
    student.myname="Fatima";
    cout<<student.mynum<<"\t"<<student.myname;

    return 0;
}