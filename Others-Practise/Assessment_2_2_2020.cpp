#include <iostream>
void nz(unsigned int n, unsigned int m, unsigned int cntN, unsigned int cntM);
void cntr(unsigned int n, unsigned int& cnt);

int main(){
    unsigned int n = 0, m = 0, cntN =0, cntM = 0;
    std::cin >> n >> m;
    //nz(n, m);
    cntr(n, cntN);
    cntr(m, cntM);
    std::cout << cntN;
}

void nz(unsigned int n, unsigned int m, unsigned int cntN, unsigned int cntM){
    bool isIn = true;
    unsigned int current = 0, another = 0;
    if(cntN == cntM){       //123  234
        current = n%10;
        n/=10;
        another = m % 10;
        
    }
    if (n == 0) return;
    else {
        std::cout << n % 10 << " ";
        nz(n/10);
    }

}

void cntr(unsigned int n, unsigned int& cnt){
    if(n == 0) return;
    else {
        n /= 10;
        cnt++;
        cntr(n, cnt);
    }
}
