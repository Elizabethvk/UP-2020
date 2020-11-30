/*
Задача 2:
Напишете програма, която прочита две цели числа a и b и намира броя на числата в
затворения интервал между a и b, за които броят на различните им делители, без едно и
самото число, е просто число.
Пример:
Вход: Изход: Обяснение:
20 30 4 Това са числата 21, 22, 26, 27
*/

#include <iostream>
#include <cmath>

int main() {    
    int num1, num2; //our limits
    std::cin >> num1 >> num2;
    if(num1 > num2) {       //checking the input validity
        std::cout << "Bad input!" << std::endl;
    }
    int answer = 0;
    for (int i = num1; i <= num2; i++) { //i is the num we check if it's good enough
        int counter = 0;
        
        int divisor = 2;
        for (; divisor * divisor < i; divisor++) { //cheking which numbers divide our starting number
            if (i % divisor == 0) {
                counter+=2;
            }
        }
        if (divisor * divisor == i) {
            counter++;
        }
        //std::cout << i << " has " << counter << " different divisors." << std::endl;

        bool isPrime = true; //check if the number of divisors is a prime number
        for (int x = 2; x * x <= counter; x++) {
            if (counter % x == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime and counter >= 2) answer++;
    }
    std::cout << answer << std::endl;
    return 0;
}
