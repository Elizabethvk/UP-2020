/* Задача 2:
Да предположим, че един часовник показва 12 часа. Да се направи програма, която въвежда от клавиатурата 
естествено число n (не по-голямо от 10000) и извежда на екрана броя на пълните завъртания на малката стрелка 
на часовника за n часа и кое число ще сочи малката стрелка след n часа.*/

#include <iostream>

int main(){
    int h=12, n;
    std::cin>> n;
    if (n>=0 && n<=10000) {
        n%=12;
        h = (12 + n);
    }
    else {
            std::cout<<"Error";
        }
    std::cout<<h;
    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
    int N,o,h;
    do
    {
        cout<<"N(0..10000)=";cin>>N;
    }
    while(N<0||N>10000);
    o=N/12;
    h=N%12;
    if(h==0) h=12;
    cout<<o<<" "<<h<<endl;
    return 0;
}
*/
