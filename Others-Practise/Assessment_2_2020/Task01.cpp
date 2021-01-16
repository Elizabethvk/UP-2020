/*
Задача 1. Напишете програма, която прочита две числа N и M, създава матрица с N реда и M колони от
цели числа без знак в динамичната памет и прочита елементите ѝ. След това трябва да проверява дали
тази матрица има две колони, които са пермутация една на друга (т.е. са съставени от едни и същи
елементи, но евентуално в различен ред. Да се изведат индексите на всички такива двойки колони.
Пример:
Вход:     Изход:              Вход:     Изход:
3 3                           2 3
1 4 3     0 2                 1 2 3      No
2 3 2                         4 5 6
3 1 1
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::nothrow;

int** allocMatrix(unsigned n);
void readMatrix(int** matrix, unsigned int n);
void clearMatrix(int ** matrix, unsigned int n);
unsigned minFrom(int** matrix, unsigned column, unsigned from, unsigned to);
void swap(int** matrix, unsigned column, unsigned row, unsigned min);
void sortMatrix(int** matrix, unsigned int n);
void printMatrix(int** matrix, unsigned int n);
void isIn(int** matrix, unsigned int n);

int main(){
    unsigned int n = 0;
    cin >> n;
    int** matrix = nullptr;
    matrix = allocMatrix(n);
    readMatrix(matrix, n);
    
    //cout << " -------- " << endl; //за прегледност, визуализация
    //printMatrix(matrix, n);
    //cout << " -------- " << endl;
    sortMatrix(matrix, n);
    isIn(matrix, n);
    //cout << " -------- " << endl;
    //printMatrix(matrix, n);
    
    clearMatrix(matrix, n);
    return 0;
}

int** allocMatrix(unsigned n){
  int** matrix = new(nothrow) int*[n];
  if(!matrix) {
    cout<<"Memory problem!" << endl;
    return matrix;
  }
  for(unsigned int i =0; i < n; i++){
    matrix[i] = new(nothrow) int[i];
    if(!matrix[i]){
      cout << "mem prob!" << endl;
      clearMatrix(matrix, i);
      return nullptr;
    }
  }
  return matrix;
}

void clearMatrix(int ** matrix, unsigned int n){
    for(unsigned int i = 0; i < n; ++i){
        delete[] matrix[i];
    }
    delete[] matrix;
}

void readMatrix(int** matrix, unsigned int n){
    for(unsigned int i = 0; i<n; ++i){
        for(unsigned int j = 0; j<n; ++j){
            cin >> matrix[i][j];
        }
    }
}

void swap(int** matrix, unsigned column, unsigned row, unsigned min){
    if (min != row) {
        int t = matrix[min][column];
        matrix[min][column] = matrix[row][column];
        matrix[row][column] = t;
    }
}

void sortMatrix(int** matrix, unsigned int n){
  int tmp=0;
  for(unsigned int column = 0; column < n; column++){
    for(unsigned int row = 0; row < n-1; row++ ){
      int m = minFrom(matrix, column, row, n);
      swap(matrix, column, row, m);
      }
    }
}

unsigned minFrom(int** matrix, unsigned column, unsigned from, unsigned to){
    unsigned min = from;
    for (unsigned i = from + 1; i < to; ++i) {
        if (matrix[i][column] < matrix[min][column])
            min = i;
    }
    return min;
}

void printMatrix(int** matrix, unsigned int n)
{
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}

void isIn(int** matrix, unsigned int n){
  bool isin = 0;
  int cnt = 0, sameNum=0;
    for(unsigned column = 0; column<n-1; ++column){
      for(unsigned col = column+1; col< n; ++col){
        for(unsigned row = 0; row < n; row++){
            if(matrix[row][column]==matrix[row][col]) {
              //sin=1;
              sameNum++;
            }
        }
        if(sameNum==n){
          cout << column << " " << col << endl;
          cnt++;
        }
        sameNum = 0;
      }
    }
    if(!cnt){
      cout << cnt << " No :(" << endl;
    }
}
