/* Имаме число -> колко на брой различни цифри има;
    12335 -> 4 
    Имаме две числа -> колко на брой цифри им съвпадат
    -> кои ?
    1223450
    133892
 -> 3; 1,2,3
 "Бикове и крави"
    Имам две числа, първото е "основно", колко бика и колко крави при дадено второ
    1223450
    133892*/
#include <iostream>

int main(){
    int num, counter=0;
    std::cin >> num;

    while (num!=0) {
        int digits = n%10;
        std::cout << digits << '\n';
        counter++;
        num = num/10;
        
    }

    std::cout<< counter;
}

}
