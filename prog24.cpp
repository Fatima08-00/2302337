#include<iostream>
using namespace std;

    class count{
        public:
        static int countobj;
        count(){
            countobj++;
        }
        void display(){
            cout<<"Number of objects="<<countobj;
        }

    };
 
   int count::countobj;


int main(){
    count a,b,c;
    a.display();
    return 0;
}