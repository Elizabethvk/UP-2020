/* Имаме число -> колко на брой различни цифри има;
    12335 -> 4 */
#include <iostream>

int main(){
    int num, newNum, counterNums=0, counterDiff=0, tmp=0;
    int mods[counterNums];
    //int nums[10] = {0,1,2,3,4,5,6,7,8,9};
    int number=0;
    std::cin >> num;

    newNum = num;

    while (newNum!=0) {
        counterNums++;
        newNum = newNum/10;
    }
    
    for (int i=0; i<counterNums; i++) {
        tmp = newNum % 10;
        mods[i] += tmp;
    }

    for (int j=0; j<counterNums; j++) {
        while (number < 10) {
            if (mods[j] != number) {
                counterDiff ++;
                number++;
            }
        }
    }
    std::cout<< counterDiff;

}
