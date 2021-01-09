#include <iostream>

void repetition(unsigned int n, unsigned int m, unsigned int& cnt);

int main(){
    unsigned int n = 0, m = 0, cntN =0, cntM = 0;
    std::cin >> n >> m;
    
    repetition(n, m, cntN);
    std::cout << cntN;

    return 0;
}

void repetition(unsigned int n, unsigned int m, unsigned int& cnt){
    if(n==0) return;
    else {
        if(n%10 == m) cnt++;
        repetition(n/10, m, cnt);
    }
}
