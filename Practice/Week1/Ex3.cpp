#include <iostream>

int main() {
    int n, m;
    char output;
    std::cout << "Enter a num between 1 and 26 and a random whole number:\n";
    std::cin >> n >> m;
    if (n>=1 && n<=26 && m%2==0) 
    {
        output = int('a') + (n-1);
        std::cout << "Number " << n << " is the letter: " << output;
    }
    else if (n>=1 && n<=26 && m%2!=0) 
    {
        output = int('A') + (n-1);
        std::cout << "Number " << n << " is the letter: " << output;
    }
    else 
    {
        std::cout << "Try again with a num between 1 and 26!";
    }
    return 0;
}
