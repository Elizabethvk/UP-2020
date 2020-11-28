#include <iostream>
#include <cmath>

int main() {
    const unsigned max_size = 500;
    int a[max_size] = { 0 };
    int b[max_size] = { 0 };
    int c[max_size] = { 0 };
    int n = 0, cnt = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        c[n + i] = b[i];
    }
    
    for (int i = 0; i < (2 * n -1); i++) {
        for (int j = i+1; j < 2 * n; j++) {
            if (c[i] > c[j]) {
                c[i] += c[j];
                c[j] = c[i] - c[j];
                c[i] -= c[j];
            }
        }
    }

    for (int i = 0; i <2*n; i++) {
        if (c[i] != c[i + 1]) {
            std::cout << c[i] << " ";
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < n; i++) {

    }
    return 0;
}
