#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::nothrow;
/*
Зад. 1 Да се пресметне n!
Зад. 2 Да се пресметне n-тото число на Фибоначи.
Зад. 3 Да се пресметне сумата от цифрите на положително целочислено число.
Зад. 4 Да се обърне огледално дадено число (без да има последни цифри 0). Пример. 12356 -> 65321
Зад. 5 По зададени N и M, да се изведат всички възможни N-торки от цифри, чиято сума е равна на M.
Зад 6. Да се провери дали един низ от char-ове е палиндром.
Зад 7. Да се реализира в двумерна матрица (с размерност N*N), как последователно шахматен код ще обиколи всички възможни 
позиции на "дъската". Интересува ни само едно възможно решение, не всички, започвайки от позиция (1,1).
*/

unsigned long long fac(unsigned long long n);
static unsigned long long fibRec(unsigned n, unsigned long long f1, unsigned long long f2);
unsigned int digitsSum(unsigned int num);
unsigned int reverseNum(unsigned int num, unsigned int acc);
void printAllCombs(int n, int m, int * arr, int currLen = 0);
void print(int * arr, int n);
bool isPalindrome(char * arr);
bool isPalindrRec(char * arr, int length);
int fillBoard(int ** board, int size, int x, int y, int currStep=1);

void printAllCombs1(int n, int m, int * arr, int currLen, int start);

int main()
{
    /*  1
    cout<<fac(20);
    */

    /*  2
    cout<<fibRec(5, 1, 0);
    */

   /*   3
   cout<<digitsSum(123456789);
   */
   
   /*   4
   cout<<reverseNum(123456789, 0);
   */
   
   /*   5
   int * arr = new(nothrow) int[5];
    if(!arr) return -1;
    printAllCombs1(3, 7, arr, 0,0);
    delete [] arr;
   */
   

   /*   6
   char arr[] = "abcddcba";
   cout<<isPalindrome(arr)<<endl;
   */
   
   /*   7
   */
   bool alloc = true;
   int ** board = new(nothrow) int*[8];
   if(!board) return -1;
   for (size_t i = 0; i < 8; i++)
   {
       board[i] = new(nothrow) int[8];
       if(!board[i]) alloc = false;
   }
   
   if(!alloc){
       for (int i = 0; i < 8; i++)
        delete[] board[i];
       delete[] board;
       board = nullptr;
       return -1;
   }

   for (int i = 0; i < 8; i++)
   {
       for(int j = 0; j<8; ++j){
           board[i][j] = 0;
       }
   }
   fillBoard(board, 8, 1, 1);
   for (int i = 0; i < 8; i++)
   {
       for(int j = 0; j<8; ++j){
           if((board[i][j]/10) == 0) cout<<' ';
           cout<<board[i][j]<<" ";
       }
       cout<<endl;
   }
   
   
   return 0;
}

unsigned long long fac(unsigned long long n){
    if(n<2) return 1;
    return n*fac(n-1);
}

static unsigned long long fibRec(unsigned n, unsigned long long f1, unsigned long long f2)
{
    if (n == 1)
        return f1 + f2;
    else
        return fibRec(n-1, f1+f2, f1);
}

unsigned int digitsSum(unsigned int num){
    if(num == 0) return 0;
    return num%10 + digitsSum(num/10);
}

unsigned int reverseNum(unsigned int num, unsigned int acc){
    if(num==0) return acc;
    else{
        return reverseNum(num/10, acc*10 + num%10);
    }
}

void printAllCombs(int n, int m, int * arr, int currLen)
{
    if(currLen == n){
        if(m == 0) print(arr, n);
        return;
    }
    int toDig = m > 9? 9 : m;
    for (int i = 0; i <= toDig; i++)
    {
        if(m - i >= 0){
            arr[currLen] = i;
            printAllCombs(n, m-i, arr, currLen+1);
        }
        else return;
    }
    
}

void printAllCombs1(int n, int m, int * arr, int currLen, int start)
{
    if(m == 0) 
    {
        print(arr, currLen);
        return;
    }
    int toDig = m > 9? 9 : m;
    for (int i = start; i <= toDig; i++)
    {
        if(m - i >= 0){
            arr[currLen] = i;
            printAllCombs1(n, m-i, arr, currLen+1, i+1);
        }
    }
    
}

void print(int * arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

bool isPalindrome(char * arr){
    int len = 0;

    while(arr[len]!='\0') len++;

    return isPalindrRec(arr, len);
}

bool isPalindrRec(char * arr, int length){
    if(length <= 0) return true;
    
    if(arr[0] == arr[length -1]){
        return isPalindrRec(arr+1, length -2);
    }
    else return false;
}

const int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
const int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};
const int numMoves = sizeof(dx)/sizeof(dx[0]);

int fillBoard(int ** board, int size, int x, int y, int currStep)
{
    if(x >= size || y >= size || x < 0 || y < 0 || board[x][y] != 0) return 2;

    if(currStep== size*size){
        board[x][y] = currStep;
        return 1;
    }

    int isCorrect = 0;
    
    board[x][y] = currStep;
    for(int i = 0; i < numMoves; i++){

        isCorrect = fillBoard(board, size, x+ dx[i], y+dy[i], currStep+1);
        if(isCorrect == 1) return isCorrect;
    }
    
    board[x][y] = 0;
    return 0;
}
