#include<iostream>
#include<string>
using namespace std;

class myclass{
    public:
    int mynum;
    string myname;
    private:
    int roll_no;
    string name;
    public:
     void display(int mynum, string myname){
       int roll_no=mynum;
       string name=myname;
       cout<<roll_no<<"\t"<<myname;
     }

};

int main(){
    myclass student;
    student.mynum=37;
    student.myname="Fatima";
    
    cout<<student.mynum<<"\t"<<student.myname;
    student.display(student.mynum,student.myname);

    return 0;
}