/* 1) N числа, изведи най-голямото
2) сумата и произведението им
3)  ver 2  */

#include <iostream>

int main(){
    int maxNum;
    int m;
    int num;

    std::cin >> num;
    std::cin>> m;

    maxNum = m;

    for (int i=0; i<(num-1); ++i) {

        std::cin>> m;
        if (maxNum < m) {
            maxNum = m;
        }
        
    }

    std::cout<< maxNum << std::endl;

   return 0;
}
