/* 1) N числа, изведи най-голямото
 сумата и произведението им
  ver 4  */

#include <iostream>

int main(){
    int maxNum, sum, product;
    int m, tmp;

    std::cin>> m;
    std::cin >> tmp;
    maxNum = product = sum = tmp;

    for (int i=0; i<(m-1); ++i) {
         std::cin>> tmp;
        product = product * tmp;
        sum = sum + tmp;
       
        if (maxNum < tmp) {
            maxNum = tmp;
        }
        
    }

    std::cout<< maxNum << std::endl;
    std::cout<< product << std::endl;
    std::cout<< sum << std::endl;

   return 0;
}
