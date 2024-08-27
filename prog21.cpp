#include<iostream>
using namespace std;
class myclass{
    public:
    void func1(){
        cout<<"function declared inside class"<<endl;
    }
    void func2();

};

void myclass::func2(){
    cout<<"function declared outside class";
}

int main(){
    myclass student;
    student.func1();
    student.func2();

    return 0;
}