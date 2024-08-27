#include<iostream>
using namespace std;

class player{
    public:
    string name,add;
    int age,height;
    static int countobj;
    player(){
      
        name="John";
        add="Mapusa , Goa";
        age=21;
        height=185;
        countobj++;
    }

   void display(){
    cout<<"Player Details:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<add<<endl;
    cout<<"Age: "<<age<<" cm"<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Object Count: "<<countobj;
   }
};
 
 int player::countobj;

int main(){
   player a,b,c,d;
   d.display();

    return 0;
}