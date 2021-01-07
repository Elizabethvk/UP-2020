/*
давам ти някакво число
ънсайнд
принтни го наобратно
рекурсивно
*/


#include <iostream>
void nz(unsigned int n);

int main(){
    unsigned int n = 0;
    std::cin >> n;
    nz(n);
}

void nz(unsigned int n){
    if (n == 0) return;
    else {
        std::cout << n % 10 << " ";
        nz(n/10);
    }
}
