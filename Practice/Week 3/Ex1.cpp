/*число и каноничното му представяне със спейсове и звездички*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int num = 0, newNum=0;
    std::cin >> num;
    
    if (num == 0) {
        std::cout << num << " has no divisors. ";
    }
    else {
    std::cout << num << " = 1";

    while (num%2==0){
        std::cout << "2 * ";
        num /= 2;
    }

    for (int i = 3; i <= num; i = i+2){
      while (num%i == 0){
         cout<<" * " << i;
         num = num/i;
      }
    }

    }
	return 0;
}
