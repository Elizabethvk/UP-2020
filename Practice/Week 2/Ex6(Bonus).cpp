/* 1
  121
 12321 
 12321
  121
   1  */
#include <iostream>

int main() {
    std::cout<<("Въведи най-голямото число за ромба: ");
    
    int rows;
    std::cin >> rows;
    
    for (int i=1; i<=rows; i++){ //1. Външен цикъл за редовете
        
        for (int j = rows - i; j >=1; j--){ //1-ви вътрешен цикъл за space-овете
            std::cout << " ";
        }
        for (int k=1; k <= i; k++){ //2-ри вътрешен цикъл за числата, възходяща посока
            std::cout << k ;
        }
        for (int k=i-1; k>=1; k--){ //3-ти вътрешен цикъл за низходящия ред
            std::cout << k;
        }
        
        std::cout << std::endl;
    }                   //край на горния тригълник

    for (int i=1; i<= rows; i++){ //2. Външен цикъл за обърнатия триъгълник
        
        for (int j=i; j >= 1; j--){ //1-ви вътрешен цикъл за space-овете
            std::cout << " ";
        }
        for (int k=1; k <= (rows-i); k++){ //2-ри вътрешен цикъл за числата, възходяща посока
            std::cout<< k;
        }
        for (int k=rows-i-1; k>=1; k--){ //3-ти вътрешен цикъл за низходящия ред
            std::cout<< k;
        }
        
        std::cout<<std::endl;
    }
    return 0;
}
