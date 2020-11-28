#include <iostream>
#include <cmath>

int main(){
    for(int i=1000; i<= 9999; i++){
        int a, b, c, d;
        d=i%10;
        c=(i/10)%10;
        b=(i/100)%10;
        a=(i/1000)%10;
        if ( a+b == c+d){
            std::cout<<i << std::endl;
        }
    }
    return 0;
}
