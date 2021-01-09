#include <iostream>

void toBase(unsigned int n, unsigned int m, unsigned int& cnt);

int main(){
    unsigned int n = 0, m = 0, cntN =0;
    std::cin >> n >> m;
    toBase(n,  m, cntN);
    std::cout << cntN;
}

void toBase(unsigned int n, unsigned int m, unsigned int& cnt){
    if(n == 0) return;
    else {
        //n % m =
        n /= m;
        cnt++;
        toBase(n, m, cnt);
    }
}
