#include<iostream>
using namespace std;

    class employee{
        public:
        int employee_id;
        string employee_name,employee_add;
        void display(){
            cout<<"employee info"<<endl;
            cout<<"Employee id:"<<employee_id<<"\n"<<"Employee name:"<<employee_name<<"\n"<<"Employee Address:"<<employee_add<<endl<<endl;
        }
    };

    class permanentemployee:public employee{
        public:
        float basic_pay,da,hra,ta;
        void salary(){
            float salary=0;
            salary=basic_pay+da+hra+ta;
            cout<<"Salary:"<<salary;
        }
    };

int main(){
    permanentemployee a;
    a.employee_id=120032;
    a.employee_name="Siya";
    a.employee_add="revora,goa";
    a.display();

    a.basic_pay=30000.0;
    a.da=5000;
    a.hra=7000;
    a.ta=2000;
    a.salary();

    return 0;
}