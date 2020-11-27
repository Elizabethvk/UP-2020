#include <iostream>
#include <cmath>

int main()
{
    unsigned long int num=0, newNum =0, reorderedNum=0;
    int biggestNum = 0, smallestNum=0;
    std::cin >> num;
    newNum = num;
    if (num > 0) {
        while(num %  == 0){
            int i = 0;
            unsigned long int divisor = pow(10,i);
            //biggestNum = 0;
            if (smallestNum > ((num/divisor)%divisor)){
                smallestNum = ((num/divisor)%divisor);
            }
            i++;
            if (num%divisor == 0){
                i=2;
                //std::cout<<biggestNum;
                biggestNum = 0;
            }
        }
    }
    else {
        std::cout << "Invalid number" << std::endl;
    }
}
