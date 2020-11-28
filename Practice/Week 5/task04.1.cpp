#include <iostream>
#include <cmath>

int main() {
    int n, start1, start2, position1, position2;
    bool possibru = false;
    std::cin >> n;
    std::cin >> start1 >> start2;
    for (int i = 0; i < n-1; i++) {
        std::cin >> position1 >> position2;
        if ((abs(start1 - position1) == 2 && abs(start1 - position1) == 1) || (abs(start1 - position1) == 1 && abs(start1 - position1) == 2)) {
            //std::cout << "Yea!";
            possibru = true;
            start1 = position1;
            start2 = position2;
        }
        else 
            break;
    }
    if (possibru == true) {
        std::cout << "Yea!";
    }
    else {
        std::cout << "Nay!";
    }
    return 0;
}
