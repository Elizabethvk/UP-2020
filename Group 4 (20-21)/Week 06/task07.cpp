//ne e fix dokraq

#include <iostream>
#include <cmath>

//void writeArray(int a[], size_t size);

int main() {
    const unsigned MAX_SIZE = 200;
    unsigned n;
    bool flag = true;
    int array[MAX_SIZE];
    std::cin >> n;
    for (unsigned i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        if (array[i] > array[i + 1]) {
            flag = true;
        }
        else if (array[i + 1] < array[i]) {
            flag = false;
        }
        else {
            std::cout << "random" << std::endl;
        }
    }
    if (flag == true) {
        
        std::cout << "Namalqwa" << std::endl;
    }
    else if (flag == false) {
        std::cout << "Raste" << std::endl;
    }

    return 0;
}
