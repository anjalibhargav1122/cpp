
#include <iostream>
using namespace std;

int main(){
    int r ;
    cout<< "Please enter rows: ";
    cin>>r;
    
    for(int i = 1; i <=r; i++){
        
        for(int k = 1; k<=r-i; k++){
 cout<< " ";
        }
        
        for(int j = 1; j <=i; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
     for(int i = r; i >=1; i--){
        
        for(int k = 1; k<=r-i; k++){
 cout<< " ";
        }
        
        for(int j = 1; j <=i; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}





