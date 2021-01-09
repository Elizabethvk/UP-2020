#include <iostream>
void nz(unsigned int n, unsigned int m, unsigned int cntN, unsigned int cntM);
void cntr(unsigned int n, unsigned int& cnt);
void toBase(unsigned int n, unsigned int m, unsigned int& cnt);
bool isContained(unsigned int n, unsigned int m);

int main(){
    unsigned int n = 0 , m = 0;//, cntN =0, cntM = 0;
    std::cin >> n >> m;
    bool isIn = isContained(n, m);
    //nz(n, m);
    //cntr(n, cntN);
    //cntr(m, cntM);
    //toBase(n,  m, cntN);
    if (isIn){
        std::cout << "Yep";
    }
    else std::cout << "Nope";
}

bool isContained(unsigned int n, unsigned int m){//, bool& isIn){
    if(n == 0) return false;
    return (n%10 == m) || (isContained(n/10, m)); 
}
