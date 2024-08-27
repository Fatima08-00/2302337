#include<iostream>
using namespace std;
class employee{
    public:
   
    int s;
    employee add(employee a,employee b){
        employee c;
        c.s=a.s+b.s;
        return c;
    }
};

int main(){
    employee s1,s2,s3;
    s1.s=100;
    s2.s=200;
    s3.s=0;
     cout<<"initial values:"<<endl;
    cout<<"obj1="<<s1.s<<endl;
    cout<<"obj2="<<s2.s<<endl;
    cout<<"obj3="<<s3.s<<endl;

    s3=s3.add(s1,s2);
    cout<<"changed values:"<<endl;
   cout<<"obj1="<<s1.s<<endl;
    cout<<"obj2="<<s2.s<<endl;
    cout<<"obj3="<<s3.s<<endl;


    s1=s1.add(s2,s3);
     cout<<"changed values:"<<endl;
   cout<<"obj1="<<s1.s<<endl;
    cout<<"obj2="<<s2.s<<endl;
    cout<<"obj3="<<s3.s<<endl;

    return 0;
}