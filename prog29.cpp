#include<iostream>
using namespace std;

class employee{
    private:
    string name;
    int salary;
    public:
    void getdata();
    void putdata();

};

void employee::getdata(){
    cout<<"Name of the Employee:"<<"";
    cin>>name;
    cout<<"Salary of the Employee:"<<"";
    cin>>salary;
}

void employee::putdata(){
    cout<<"Name:"<<""<<name;
    cout<<"Salary:"<<""<<salary;
}

int main(){
    employee engineers[3],doctors[3];
    cout<<"entering details of engineers"<<endl;
    for(int i=0;i<3;i++){
        engineers[i].getdata();
    }
    cout<<endl;
    cout<<"displaying details of engineers"<<endl;
    for(int i=0;i<3;i++){
        engineers[i].putdata();
    }
    cout<<endl<<endl;
    cout<<"entering details of doctors"<<endl;
    for(int i=0;i<3;i++){
        doctors[i].getdata();
    }
    cout<<endl;
    cout<<"displaying details of doctors"<<endl;
    for(int i=0;i<3;i++){
        doctors[i].putdata();
    }

    return 0;
}