#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
    
        for (int k = 1; k <= r - i; k++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == r) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}

