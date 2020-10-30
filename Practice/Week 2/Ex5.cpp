/* Зад. 5 (зад 4 е въвеждаме число и да/не ако е просто)
Въвеждаме 2 числа и извеждаме всички прости в този интервал*/
#include <iostream>

int main(){
    int n1, n2;
    bool prime = true;

    std::cin >> n1 >> n2;

    while (n1 <= n2) {
        prime = true;
        if (n1 == 0 || n1 == 1) {
            prime = false;
        }
        else {
            for (int i = 2; i <= n1 / 2; ++i) {
                if (n1 % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        
        if (prime){
            std::cout << n1 << " ";
        }
        ++n1;
    }
    return 0;
}
