//грешна

#include <iostream>
#include <cmath>

void writeArrray(int a[], size_t size);
void printElements(int a[], size_t size);

int main() {
    const size_t maxSize = 300;
    int n[maxSize] = { 0 };
    int size;
    std::cin >> size;
    writeArrray(n, size);
    printElements(n, size);
    
    std::cout << std::endl;
    return 0;
}
void writeArrray(int a[], size_t size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j < size; j++) {
            if (j % 5 == 0) {
                a[i] = j;
            }
        }
    }
}
void printElements(int a[], size_t size) {
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << '\t';
    }
}
