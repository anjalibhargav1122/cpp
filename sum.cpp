#include <iostream>
using namespace std;

int main(){
    
    int sum = 0;
    
    for(int i = 1; i<=100; i++){
        int j = sum + i;
        sum = j;
    }
    
        cout<<endl<<sum;
    
    
}
