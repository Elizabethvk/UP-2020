/* 1) N числа, изведи най-голямото
2) сумата и произведението им
3)  ver 1  */

#include <iostream>

int main(){
    int n[10];
    int maxNum;
    //int number;
    for (int i=0; i<10; ++i) {
        std::cin>> n[i];
    }

    //std::cin >> number;
    maxNum = n[0];

    for (int i=0; i<10; ++i) {
       if (maxNum < n[i])
       {
           maxNum = n[i];
       }
   }
   std::cout << maxNum << std::endl;
   return 0;
}
