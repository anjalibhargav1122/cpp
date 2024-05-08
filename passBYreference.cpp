#include <iostream>

using namespace std;

void fun(int& a){
    cout<<a;
}

int main(){
    int a = 10;
    
    
    a = 20;
    cout<<a<<endl;
    fun(a);
}
