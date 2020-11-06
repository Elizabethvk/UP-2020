/* Имаме число -> колко на брой цифри има;
    12335 -> 5 */
    
#include <iostream>

int main(){
    int num, newNum, counter=0;
    std::cin >> num;

    if (num == 0) {
        counter = 1;
    }
    
    while (num!=0) {
        counter++;
        newNum = newNum/10;
        
    }
    std::cout<< counter;
}
