#include <iostream>
#include <cmath>

int main(){
    int n=0;
    std::cin>>n;
    for(int i=1; i<=n; i++){
        std::cout << "a" << i << "=" << pow(i,2) + 3*i << std::endl;
    }
    return 0;
}
//аi = i^2 + 3*i
