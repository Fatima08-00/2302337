#include<iostream>
#include<string>
using namespace std;

 struct 
    {
     int myNum;
     string myString;
    }mystructure;

 struct car{

    string model,colour;
    int year;
 };


int main(){
    car mycar;
   mystructure.myNum=19;
    mystructure.myString="Hello World!";

    cout<<mystructure.myNum<<endl;
    cout<<mystructure.myString<<endl;

    mycar.year=2011;
    mycar.model="ford";
    mycar.colour="white";
    cout<<mycar.year<<"\t"<<mycar.model<<"\t"<<mycar.colour;




    return 0;
}