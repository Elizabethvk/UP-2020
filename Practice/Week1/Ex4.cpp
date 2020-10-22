#include <iostream>

int main() {
    int n;
    char input;
    std::cin >> input >> n;
    
    if ( (input >='a' && input<='z') || (input >= 'A' && input <= 'Z') ) {
        n%=26;
        if (input >='a') {
            input = 'a' + (int(input)-'a'+n)%26;  //int(input) или може и само input - ???
        }
        else {
            input = 'A' + (int(input)-'A'+n)%26;
        }
        std::cout<<input;
    }
    else {
        std::cout<<"Error\n";
    }
    return 0;
}
