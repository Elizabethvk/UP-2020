/* Задача 1. (Грешна)
Напишете програма, която прочита битовете на две цели числа от стандартния вход и
извежда тяхната сума. Двете числа ще се въвеждат в двоично представяне и изходът също
трябва да бъде в двоично представяне.
Променливите във вашата програма може да са само от тип bool, а операциите, които може
да изпълнявате, са само логически и побитови: "!, ~, ^, |, &, ||, &&".
Входните числа ще са с дължина 4 бита, а изходът трябва да е с дължина от 5 бита (4 бита
сума и 1 бит пренос).
Пример 1:
Вход: Изход:
0010 00011
0001
Пример 2:
Вход: Изход:
1111 10000
0001
*/

#include <iostream>
#include <cmath>

bool allowed(char c) {      //checking the validity of the input
    if (c == '0' || c == '1') {
        return true;
    }
    return false;
}

int main() {
    char _a[4], _b[4]; //   cin into chars because they're like fixed together
    std::cin >> _a[3] >> _a[2] >> _a[1] >> _a[0];
    std::cin >> _b[3] >> _b[2] >> _b[1] >> _b[0];

    if (!allowed(_a[3]) || !allowed(_a[2]) || !allowed(_a[1]) || !allowed(_a[0])) {  //checking the validity of the input
        std::cout << "Bad input" << std::endl;
    }
    if (!allowed(_b[3]) || !allowed(_b[2]) || !allowed(_b[1]) || !allowed(_b[0])) {  //checking the validity of the input
        std::cout << "Bad input" << std::endl;
    }

    bool a[4] = { _a[0] - '0', _a[1] - '0', _a[2] - '0', _a[3] - '0' }; //adding them to a bool array
    bool b[4] = { _b[0] - '0', _b[1] - '0', _b[2] - '0', _b[3] - '0' };

    bool out[5] = { 0,0,0,0,0 };
    for (int bit = 0; bit < 4; bit++) {
        if (out[bit] == 0) {        //checking if the bit are 0/1 for later using when + them
            if (a[bit] == b[bit]) {
                if (a[bit] == 1) {
                    out[bit] = 0;
                    out[bit + 1] = 1;
                }
            } else { // a[bit] != b[bit]
                out[bit] = 1;
            }
        }
        else {
            if (a[bit] == b[bit]) {
                if (a[bit] == 1) {
                    out[bit] = 1;
                    out[bit + 1] = 1;
                }
            }
            else { // a[bit] != b[bit]
                out[bit] = 0;
                out[bit + 1] = 1;
            }
        }
    }

    for (int bit = 4; bit >= 0; bit--) {
        std::cout << out[bit];
    }
    std::cout << std::endl;
    
    return 0;
}
