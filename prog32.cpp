#include<iostream>
using namespace std;
class Animal{
  string name;
  public:
  void show(){
    cout<<"This is Animal Class.";

  }
};

class Cat : public Animal{
    public:
    void display(){
    cout<<"This is Cat Class.";

  }
};

int main(){
    Cat c;
    c.show();
    c.display();
    return 0;
}