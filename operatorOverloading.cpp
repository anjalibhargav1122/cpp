#include <iostream>

using namespace std;

class first{
  public:
  int value;
  
  void operator+(first& para){
      cout<<this->value*para.value;
  }
};

int main(){
    first obj1, obj2;
    obj1.value = 10;
    obj2.value = 20;
    obj1 + obj2;
}
