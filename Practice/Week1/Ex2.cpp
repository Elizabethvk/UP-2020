#include <iostream>
using namespace std;

int main() {
    int n;
    char output;
    cout << "Enter a num between 1 and 26\n";
    cin >> n;
    if (n>=1 && n<=26) 
    {
        output = int('A') + (n-1);
        cout << "Number " << n << " is the letter: " << output;
    }
    else 
    {
        cout << "Try again with a num between 1 and 26!";
    }
    return 0;
}
