#include <iostream>
#include <cmath>

int main(){
    int n=0;
    std::cin>>n;
    int stop=n;
    for(int i=0; i<stop; i++){
        for(int i=n; i>=1; i--){
            std::cout << i << " ";
        }
        std::cout << std::endl;
        n--;
    }
    
    return 0;
}
