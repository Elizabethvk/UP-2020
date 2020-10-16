#include <iostream>
using namespace std;

int main() {
    char input;
    std::cin>>input;
    
    if (input=='Z' || input == 'z')
    {
        input -= int('z') - int('a');
    }
    else {
        input++;
    }

    std::cout<<input;
    return 0;
}

