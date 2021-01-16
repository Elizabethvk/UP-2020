#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;


/*Зад 1. Да се имплементира програма, която чете от входа char масив
 (с големина да 100 символа) и извежда всяка дума от този масив на нов ред.
 
 Зад 2. Валидирайте (посредством функция) char* дали представлява валидна 
 последователност от ходове на шахматен кон.  Ход на коня се представя като 
 двойка char символи симвори от вида 
 A1B3 -> true
 A1B1 -> false
 
  Зад 3. Напишете функция, която приема масив от 8 думи с по-малко от 20 символа всяка 
  (т.е. приема матрица от символи) и сортира думите по дължина.

 Зад 4. Напишете функция, която проверява колко пъти се среща дадена дума (<10 символа) в съответен низ.
        Примерен вход: C++TesttesTCC++C++JavaC++    и C++
        Изход: 4
*/

void printWords(const char arr[], int i = 0);
bool isValidMove(const char* arr);
void sortWords(char arr[8][20],int start = 0);
int strLen(char* word);
int findMin(char arr[8][20], int start);
void swap(char arr[8][20], int i, int j);
int cntWord(char arr[], char word[], int wordLnen);

int main()
{
    //1
    // char arr1[100];
    // cin.getline(arr1, 100);
    // printWords(arr1);

    //2
    // char arr[5];
    // cin.getline(arr, 5);
    // cout<<((isValidMove(arr)==1)?"true":"false")<<endl;

    //3
    // char arr [8][20];
    // for (int i = 0; i < 8; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // sortWords(arr);
    
    // for(int i=0; i<8; i++){
    //     cout<<arr[i]<<" ";
    // }

    //4
    char word[10];
    char arr[100];
    cin>>arr;
    cin>>word;
    
    cout<<cntWord(arr,word,strLen(word));
    return 0;
}

void printWords(const char arr[], int i)
{
    if(!arr[i]) return;
    if(arr[i] == ' ') cout<<','<<endl;
    else cout<<arr[i];
    printWords(arr, i+1);
}

bool isValidMove(const char* arr)
{
    if(arr[0]> 'H' || arr[0] < 'A' || arr[2] < 'A' || arr[2] > 'H' 
        || arr[1] < '1' || arr[1] > '8' || arr[3] < '1' || arr[3] > '8') return 0;

    if((abs((int)(arr[0]) - (int)(arr[2])) == 2 && abs((int)(arr[1]) - (int)(arr[3])) == 1) || ((abs((int)(arr[0]) - (int)(arr[2])) == 1) && (abs((int)(arr[1]) - (int)(arr[3]))== 2))) return 1;

    return 0;
}

void sortWords(char arr[8][20], int start)
{
    if(start == 7) return;
    swap(arr, findMin(arr, start), start);
    sortWords(arr, start+1);
}

int strLen(char * word)
{
    int cnt = 0;
    for (int i = 0; i < 20; i++)
    {
        if(word[i]!=0) ++cnt;
        else break;
    }
    return cnt;
}

void swap(char arr[8][20], int i, int j)
{
    char temp;
    for (size_t k = 0; k < 20; k++)
    {
        temp = arr[i][k];
        arr[i][k] = arr[j][k];
        arr[j][k] = temp;
    }
    
}


int findMin(char arr[8][20], int start)
{
    int curr, minIndex = start, min = strLen(arr[start]);
    for (int i = start+1; i < 8; i++)
    {
        curr = strLen(arr[i]);
        if(curr<min){
            min = curr;
            minIndex=i;
        }
    }

    return minIndex;   
}

int cntWord(char arr[], char word[], int wordLen)
{
    int arrLen = strlen(arr);
    int cnt = 0;
    bool isEqual = true;
    for (int i = 0; i <= arrLen - wordLen; i++)
    {
        for (int k = 0; k < wordLen; k++)
        {
            if(arr[i+k] != word[k]) {
                isEqual = false;
                break;
            }
        }
        if(isEqual) {
            cnt++;
        }
        isEqual=true;
    }
    return cnt;
}
