/* 30.10.20г. задачки УП Семинар 
Зад. 1 - Потребител въвежда N числа, намираме -> най-голямото
-> най-малкото -> сумата -> произведението -> средно аритметично -> кои от във са прости числа

Зад.2 - Да се напише функция, която дава N-тото просто число
int nThPrime(int N); 1 -> 2 // 2 -> 3 // 3 -> 5 // Решето на Ератостен*/

/*
 Имаме число -> колко на брой цифри има;
    12335 -> 5
 Имаме число -> колко на брой различни цифри има;
    12335 -> 4
 Имаме две числа -> колко на брой цифри им съвпадат
    -> кои ?
    1223450
    133892
 -> 3; 1,2,3
 "Бикове и крави"
    Имам две числа, първото е "основно", колко бика и колко крави при дадено второ
    1223450
    133892
 */

#include <iostream>
using namespace std;
int main(){
    /*int num, maxNum, total;
    std::cin >> total >> num;
    maxNum = num;
    for (int i=0; i < total; i++) {
        std::cin >> num;
        if (maxNum < num) {
            maxNum = num;
        }
    } 
    std::cout << maxNum;
    */
   /*int n;
   std::cin >> n;

    switch(n)
   {
      case 1:
         std::cout << 'A';
      case 2:
         
      case 3:
         std::cout << 'B';
   }
   int x;
x = 13;
switch (x%3)
{
     case 1: cout << 1;
     case 2: cout << 2;
     case 3: cout << 3; break;
     case 0: cout << 0; break;
     default: cout << "def"; break;
}
int x = 10;
if (x > 5 || x < 20)
    x += x;
    cout << "x = " << x;
else
    cout << "not in range.\n";*/
    int found = 0, count = 5; 
    cout << !found;
if (1) 
    cout << "danger" << ','; 
cout << "count = " << count;
/*int X = 42;
if (X % 2 && X < 100) X = 10;
if (X < 20) X += 25;
else if (X < 0 || X > 50) X = 15;
else X = 7;
X = X % 10;
cout<< X;*/
    return 0;
}
