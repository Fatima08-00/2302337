#include<iostream>
#include<string>
using namespace std;
class myclass{
    public:
    int mynum;
    string myname;
   inline void func1(int mynum, string myname){
        cout<<"function declared inside class"<<endl;
        cout<<mynum<<"\t"<<myname;
    }
    

};



int main(){
    myclass student;
    student.mynum=37;
    student.myname="Fatima";
    student.func1(student.mynum, student.myname);
    
    return 0;
}