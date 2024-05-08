#include <iostream>

using namespace std;

class a{
    public:
    
    int a = 20; 
};

class b{
    public:
    
    int b = 30;
};

class c : public a, public b{
    public:
    
    void fun(){
        cout<<a+b;
    }
};

int main(){
    c obj;
    obj.fun();
}

