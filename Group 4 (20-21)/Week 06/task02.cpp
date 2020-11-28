#include <iostream>
#include <cmath>

void writeArrray(int a[], size_t size);

int main() {
    const size_t maxSize = 300;
    int n[maxSize] = { 0 };
    int size;
    std::cin >> size;
    writeArrray(n, size);
    for (int i = 0; i < size; i++) {
        std::cout << n[i] << '\t';
    }
    
    std::cout << std::endl;
    return 0;
}
void writeArrray(int a[], size_t size) {
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }
}
