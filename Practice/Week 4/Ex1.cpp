#include <iostream>
#include <cmath>

int main(){
    int num1, num2;
    int range[300] = {0};
    int numbers, smallerNum, biggerNum;
    std::cin >> num1 >> num2;
    numbers = abs(num1-num2) + 1;
    smallerNum = (num1 < num2) ? num1 : num2;
    biggerNum = (num1 > num2) ? num1 : num2;
    for(int i=smallerNum; i <= biggerNum; i++){
        int cnt=0;
        range[cnt] = i;
        cnt++;
    }
    for (int i = 0; i < numbers; i++){
        for(int i = 0){
            range[i] 
        }
        
    }
}


/*int main()
{
    int a[10]={0};
    int b[10]={0};
    int c[10]={0};
    int d[10]={0};
    int cnt = 1;
    for (int i=0; i<10; i++ ){
        std::cin >> a[i];
    }

    for (int i=0; i<10; i++ ){
        std::cin >> b[i];
    }

    for (int i = 0; i<10; i++){
        //int n = a[0];
        c[0] = a[0];
        if (c[0] != a[i]){
            c[cnt] = a[i];
            cnt++;
        }
    }
    /*for (int i = 0; i<10; i++){
        int n = b[0];
        if (c[i] != n) {
            c[i] = n;
        }
        if (n != b[i]){
            c[cnt] = b[i];
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++){
        std::cout << c[i] << " ";
    }
 */
/*
10
1 1 1 1 1 2 2 2 2 1
2 2 2 2 2 2 2 2 2 3
1 2 3
 */
