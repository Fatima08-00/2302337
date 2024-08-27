#include<iostream>
using namespace std;

class diff{
   
   public:
   int a;

   diff(int n1){
    a=n1;
    
   }

   diff operator-(diff &c){
    return diff(a-c.a);
   }

};





int main(){
    diff d(4),d1(6);
    diff d3=d-d1;
    cout<<"Difference:"<<d3.a;
    return 0;
}