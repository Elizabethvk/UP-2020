//нуждае се от леки корекции
#include <iostream>
//#include <cmath>

const int MAX_SIZE = 100;

unsigned readSize();
void readIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns);
void minimalSum(int matrix[][MAX_SIZE], unsigned rows, unsigned columns, unsigned minMatrix);
//void printIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns);


int main() {
    unsigned n, minMatrix=0;
    int matrix[MAX_SIZE][MAX_SIZE];
    n = readSize();
    std::cin >> minMatrix;
    readIntMatrix(matrix, n, n);
    minimalSum(matrix, n, n, minMatrix);
}
unsigned readSize() {
    unsigned n;
    do {
        std::cout << "N = ";
        std::cin >> n;
    } while (n == 0 || n > MAX_SIZE);
    return n;
}

void readIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void minimalSum(int matrix[][MAX_SIZE], unsigned rows, unsigned columns, unsigned minMatrix) {
    //rows--;
    //columns--;
    int sum=0,smallestSum = 0;
    int firstNum = 0, row=0, column=0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            for (int k = 0; k <= minMatrix; ++k) {
                sum = sum + matrix[i + k][j + k];     // + matrix[i][j + 1] + matrix[i + 1][j] + matrix[i + 1][j + 1]);
                smallestSum = sum;
                if (smallestSum >= sum) {       //2 3
                    smallestSum = sum;          //4 5
                    firstNum = matrix[i][j];
                    row = i;
                    column = j;
                }
                sum = 0;
            }
        }
    }
    for (int i = row; i < minMatrix; ++i) {
        for (int j = column; j < minMatrix; ++j) {
            for (int k = 0; k <= minMatrix; ++k) {
                std::cout << matrix[i + k][j + k];
            }
        }
    }
    //std::cout << matrix[row][column] << '\t' << matrix[row][column + 1] << '\n' << matrix[row + 1][column] << '\t' << matrix[row + 1][column + 1] << std::endl;
    std::cout << std::endl << "--------" << '\n' << " -> " << smallestSum;
}


/*
void printIntMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned columns) {
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < columns; j++) {
            std::cout << matrix[i][j];
        }
    }
}
*/
/*#include <iostream>

const int MAX_SIZE = 1000;

int main(){
    int matrix[MAX_SIZE][MAX_SIZE];
    int n=0;
    int sum=0;
    std::cin>>n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            std::cin>> matrix[i][j];
            sum += matrix[i][j];
        }
    }
    std::cout << "The sum of all the elements is: " << sum << std::endl;
    sum=0;
    for(int i=0; i<n; i+=2){
        for(int j=0; j<n; ++j){
            sum+=matrix[i][j];
        }
        std::cout << "The sum of column nr." << i << " is: " << sum << std::endl;
    }
}*/
