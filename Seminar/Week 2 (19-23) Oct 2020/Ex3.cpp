/* 1) N числа, изведи най-голямото
2) сумата и произведението им
3)  ver 3  */

#include <iostream>

int main(){
    int maxNum;
    int m, tmp;

    std::cin>> m;
    //std::cin >> tmp;
    //maxNum = tmp;
    std::cin >> maxNum;
    
    for (int i=0; i<m; ++i) {

        std::cin>> tmp;
        if (maxNum < tmp) {
            maxNum = tmp;
        }
        
    }

    std::cout<< maxNum << std::endl;

   return 0;
}
