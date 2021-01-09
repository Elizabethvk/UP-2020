#include <iostream>
#include <math.h>

void toBase(unsigned int n, unsigned int m, unsigned int& cnt, unsigned int& converted);

int main(){
    unsigned int n = 0, m = 0, cntN =0, cntM = 0;
    unsigned int converted = 0;
    std::cin >> n >> m;

    toBase(n,m,cntN,converted);
    std::cout << converted;

    return 0;
}

void toBase(unsigned int n, unsigned int m, unsigned int& cnt, unsigned int& converted){
    if(n == 0) return;
    else {
        converted = (10*converted)+(n % m);
        //converted += pow(10, cnt) * (n % m);
        n /= m;
        cnt++;
        toBase(n, m, cnt, converted);
    }
}
