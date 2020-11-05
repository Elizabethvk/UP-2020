/* N-тото prime number */

#include <iostream>
#include <cmath>

int main(){
    //int n1, n2, a[0], primeCount=0, primeCandidate;
    
    int N=0, primeCount=0, primeCandidate=2;
    bool prime=true;

    std::cin >> N;

    while (primeCount < N) {
        int limit = sqrt(primeCandidate);
        
        for (int divider=2; divider <= limit; divider++) {
            
            if (primeCandidate%divider == 0) {
                prime = false;
                break;
            }
        }

        if (prime) primeCount++;

        if (primeCount == N) {
            std::cout << primeCandidate;
        }
        primeCandidate++;
        prime=true;
    }
    
    return 0;
}
