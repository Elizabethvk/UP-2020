//https://www.hackerrank.com/challenges/kangaroo/problem
#include <iostream>
#include <cmath>

//void writeArray(int a[], size_t size);

int main() {
    unsigned p1, p2, s1, s2;
    std::cin >> p1 >> s1 >> p2 >> s2;
    int d = 1;
    bool possibru = false;
    while (d<1000) {
        
        if (p1 + d * s1 == p2 + d * s2) {
            possibru = true;
            break;
        }
        d++;
    }
    if (possibru == true) {
        std::cout << "Yeet";
    }
    else std::cout << "Nah";
    return 0;
}
