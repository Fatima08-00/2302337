#include<iostream>
using namespace std;

    class count{
       private:
        static int countobj;

         public:
         count(){
             countobj++;

         }  
        static void reset(){
            countobj=0;
        }
        static void display(){
             cout<<"Number of objects="<<countobj;
        }

    };
 
   int count::countobj=0;


int main(){
   
    count a;
    count b;
    count::display();
    count::reset();
    cout<<endl;
    count c,d,e,f;
    count::display();
    count::reset();

    
    return 0;
}