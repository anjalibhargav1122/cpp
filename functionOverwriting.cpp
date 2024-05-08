#include <iostream>

using namespace std;

class function {
    
    public:
    
    void sum (){
        
        cout<<"i am a function."<<endl;
        
    }
    
};

class doubleFunction: public function {
    
    public:
    
    void sum (){
        
       cout<<" I AM A FUNCTION.";
        
    }
    
};

int main(){
    
    doubleFunction obj;
    obj.function::sum();
    obj.doubleFunction::sum();
    
}
