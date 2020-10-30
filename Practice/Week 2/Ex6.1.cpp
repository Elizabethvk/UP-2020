#include <iostream>

using namespace std;

int main(){
    int rows;
    cin >> rows;
    int i, j, k;
    i = 1;
    //for (int i = 1; i<=rows; i++) {}
    while (i<=rows){
        for(j=1; j<= rows-i; j++) {
            cout << " ";
        }
        k=1;
        while (k<=i) {
            cout << k;
            cout<< " ";
            k++;
        }
        cout << "\n";
        i++;
    }
    i = 1;
    while(i<=rows-1){
        j=1;
        while(j<=i){
            cout<<" ";
            j++;
        }
        k=1;
        while(k<=rows-i){
            cout << k;
            cout << " ";
            k++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}
