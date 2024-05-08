#include <iostream>

using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b , int c){
    return a+b+c;
}


int main(){
    
    int d = sum(20,39);
    // int d = sum(20,39,35);
    cout<<d;
}