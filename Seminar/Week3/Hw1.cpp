/* Имаме число -> колко на брой цифри има;
    12335 -> 5 */
#include <iostream>

int main(){
    int num, newNum, counter=0;
    std::cin >> num;

    newNum = num;

    while (newNum!=0) {
        counter++;
        newNum = newNum/10;
        
    }
    std::cout<< counter;
}
