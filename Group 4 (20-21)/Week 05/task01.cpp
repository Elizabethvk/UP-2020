#include <iostream>

int main(){
    for(int i=100; i<999; i++){
        int a= i%10;
        int b=(i/10)%10;
        int c=i/100;
        if(a!=b && b!=c && a!=c){
            std::cout << '\t' << i << std::endl;
            
        }
    }
    return 0;
}
