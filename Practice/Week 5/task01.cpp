#include <iostream>
#include <cmath>

int main() {
    const unsigned max_size = 500;
    int arr[max_size] = { 0 };
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
        
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i]<<'\t';
    }
    std::cout << std::endl;
    std::cout << "\nmin:" << arr[0] << "  max:" << arr[n - 1];

    return 0;
}
