/*
Задача 3:
Напишете програма, която прочита от стандартния вход размера (цяло число n, по-малко от
1000000) и елементите на масив от числа с плаваща точка. След това програмата ви трябва
да провери дали има такoва число k (0 < k < n-1), за което всички числа в масива, намиращи
се на разстояние k едно от друго, се различават с една и съща стойност - m (например, ако k
= 2 и m = 2, то модул от разликата на всички числа на позиции i и i+2 трябва да е 2). Ако има
такова k, изведете го на екрана заедно със стойността на m. При повече от една стойност на
k с това свойство изведете най-голямата. Ако няма такова k, изведете текста “No solution”.
Пример:
Вход: Изход:
5 2 3
1 2 4 5 7
*/
//
// �� "��. ������� ��������"
// �������� �� ���������� � �����������
// ���� ���� � �������������� 2020/21
// ��������� 1
// 2020-11-29
//
// ������� ���: 09:00
// ���: �������� �������� ������
// ��: 82173
// �����������: ���������� �����
// ����: 1 ����
// ��������������� �����: 3.
// ��������� ����������: Visual C
//

// note:
// if k is allowed to be =n-1, there is always a solution when m=abs(input[0] - input[n-1])
// for the problem to make any sense, I've decided to set k<=n-2
#include <iostream>
#include <cmath>

const unsigned max_size = 1000000; //it's out because I have some error issues 

int main() {
    double arr[max_size];

    unsigned n = 0;
    int k=0, m=0; 
    std::cin >> n; //cin the size of the array
    if (n < 0 || n>1000000) {
        std::cout << "Bad input!" << std::endl;
    }
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];     //input the array
    }
    bool solutionFound = false;
    for (int k = n - 2; k >= 1; k--) {
        const double diff = abs(arr[0] - arr[k]); //abs difference because we don't know which is bigger, absolute diff
        bool fail = false;  //bool if the output we want, would be correct
        for (int i = 0; i < n-k; i++) {
            if (abs(arr[i] - arr[i + k]) != diff) {
                fail = true;    //checking the step
                break;
            }
        } 
        if (!fail) { //if everything work fine - success!
            std::cout << k << ' ' << diff << std::endl;
            solutionFound = true;
            break;
        }
    }
    if (!solutionFound) { //if there're no numbers matching 
        std::cout << "No solution" << std::endl;
    }
    return 0;
}
