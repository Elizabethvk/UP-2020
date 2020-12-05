#include <iostream>
#include <cmath>

//void writeArray(int a[], size_t size);

int main() {
    const unsigned MAX_SIZE = 200;

    unsigned n;
    int array[MAX_SIZE];

    //const size_t maxSize = 300;
    //int а[maxSize] = { 0 };
    int k;
    std::cin >> n >> k;
    //writeArray(array, n);
    for (unsigned i = 0; i < n; ++i) {
//        cout << "a[" << i << "]=";
        std::cin >> array[i];   
    }

    for (int i=0; i<n; i++){
        if (array[i] == k){
            for(int j=i;j<n;j++){
                array[j]=array[j+1];
            }
        }
        n--;
        i--;
    }
    return 0;
}
/*void writeArray(int a[], size_t size) {
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }
}
*/
