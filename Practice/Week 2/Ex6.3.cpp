#include <iostream>

using namespace std;

int main(){
    int rows;
    cin >> rows;
    for (int i = 1; i<=rows; i++) {
        for (int j=1; j<= rows-i; j++) {
            cout << " ";
        }
        for (int k=1; k<=i; k++) {
            cout << k;
            cout<< " ";
        }
        cout << "\n";
    }
    for (int i=1; i<= rows-1; i++) {
        for (int j=1; j<=i; j++){
            cout<<" ";
        }
        for (int k=1; k<=rows-i; k++){
            cout << k;
            cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
