#include <iostream>
#include <cmath>

const int MAX_SIZE = 1000;
unsigned readSize();
void readUnsignedMatrix(unsigned matrix[][MAX_SIZE], unsigned rows, unsigned columns);
void readIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns);
void readRealMatrix(double matrix[][MAX_SIZE], unsigned rows, unsigned columns);

void printUnsignedMatrix(unsigned matrix[][MAX_SIZE], unsigned rows, unsigned columns);
void printIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns);
void printRealMatrix(double matrix[][MAX_SIZE], unsigned rows, unsigned columns);

bool isPrime(int n);
bool isRootOf(int n);
bool isFibonacci(int n);
int indexOfFib(int n);

int main(){
    //int rows, columns;
    unsigned n, product=1;
    unsigned matrix[MAX_SIZE][MAX_SIZE];
    //rows = readSize();
    //columns = readSize();
    n = readSize();
    readUnsignedMatrix(matrix, n, n);
    /*
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            unsigned checkinNum=matrix[i][j];
            bool hasIt=false;
            while (checkinNum){
                unsigned num=0;
                num = checkinNum%10;
                checkinNum /=10;
                if(num == 3 || num == 7){
                    hasIt = true;
                    break;
                }
            }
            if (hasIt){
                product = product * matrix[i][j];
            }
        }
    }
    std::cout << "The product is: " << product << std::endl; */
    /*
    unsigned sum = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<(n-1)-i; j++){
            if (isPrime(matrix[i][j])){
                sum = sum + matrix[i][j];
            }
        }
    }
    std::cout << "The sum: " << sum << std::endl;*/

    unsigned sum = 0;
    for(int i=n-1; i>0; i--){
        if(isFibonacci(matrix[i][i])){
            std::cout << indexOfFib(matrix[i][i]);
        }
    }
    return 0;
}



unsigned readSize(){
    unsigned n;
    do {
        std::cout << "N = ";
        std::cin >> n;
    } while (n == 0 || n > MAX_SIZE);
    return n;
}

void readUnsignedMatrix(unsigned matrix[][MAX_SIZE], unsigned rows, unsigned columns){
    for (unsigned i = 0; i < rows; ++i) {
        for(unsigned j=0; j<columns; j++){
            std::cin >> matrix[i][j];
        }
        
    }
}

void readIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns){
    for (unsigned i = 0; i < rows; ++i) {
        for(unsigned j=0; j<columns; j++){
            std::cin >> matrix[i][j];
        }
        
    }
}

void readRealMatrix(double matrix[][MAX_SIZE], unsigned rows, unsigned columns){
    for (unsigned i = 0; i < rows; ++i) {
        for(unsigned j=0; j<columns; j++){
            std::cin >> matrix[i][j];
        }
    }
}

void printUnsignedMatrix(unsigned matrix[][MAX_SIZE], unsigned rows, unsigned columns){
    for (unsigned i = 0; i < rows; ++i) {
        for(unsigned j=0; j<columns; j++){
            std::cout << matrix[i][j];
        }
    }
}

void printIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns){
    for (unsigned i = 0; i < rows; ++i) {
        for(unsigned j=0; j<columns; j++){
            std::cout << matrix[i][j];
        }
    }
}

void printRealMatrix(double matrix[][MAX_SIZE], unsigned rows, unsigned columns){
    for (unsigned i = 0; i < rows; ++i) {
        for(unsigned j=0; j<columns; j++){
            std::cout << matrix[i][j];
        }
    }
}

bool isPrime(int n){
    bool prime = true;
    if(n<2){
        prime = false;
    }
    else if(n%2==0){
        prime = (n==2);
    }
    else {
        for(int i=3; i*i<n; i=i+2){
            if(n%i == 0){
                prime = false;
                break;
            }
        }
    }
    return prime;
}

bool isFibonacci(int n){
    return (isRootOf(5*n*n+4) || isRootOf(5*n*n-4));
}

bool isRootOf(int n){
    int root = sqrt(n);
    return (root*root == n);
}

int indexOfFib(int n){
    int index=2;
    int n3, n1 = 1, n2=1;
    while(n3<n){
        n3 = n1 + n2;
        index++;
        n1 = n2;
        n2= n3;
    }
    return index;
}
