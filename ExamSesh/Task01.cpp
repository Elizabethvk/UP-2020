#include <iostream>
#include <new>
using std::cout;
using std::cin;
using std::endl;
using std::nothrow;

int smallerNum(int n1, int n2);

int main(){
    int n1=0, n2=0;
    cin >> n1 >> n2;
    if(n1>n2 || n1 < n2){
        if(smallerNum(n1,n2) == n1){
            cout << n1;
        }
        else cout << n2;
        
    }
    /*else if (n1 < n2){
        
    }*/
    else {
        cout << "Same bate, same";
    }

    return 0;
}

int smallerNum(int n1, int n2){
    int cnt1even=0, cnt2even=0;
    int cnt1odd=0, cnt2odd=0;
    int cpyN1 = n1;
    int cpyN2 = n2;

    if((n1 == 0 && n1!=n2) || (n2==0 && n1!=n2)){
        return -1;
    }
    else {
        while(cpyN1 >= 0 && cpyN2 >= 0){
            if(cpyN1 & 1){
                cnt1even++;
            }
            if(cpyN2 & 1){
                cnt2even++;
            }
            cpyN1 = (cpyN1 >> 2);
            cpyN2 = (cpyN2 >> 2);
        }
        if(cnt1even==cnt2even){
            cpyN1 = n1;
            cpyN2 = n2;
            cpyN1 = (cpyN1 >> 1);
            cpyN2 = (cpyN2 >> 1);
            while(cpyN1 >= 0 && cpyN2 >= 0){     //cpyN1 == 0 && cpyN2==0
                if(cpyN1 & 1){
                    cnt1odd++;
                }
                if(cpyN2 & 1){
                    cnt2odd++;
                }
                cpyN1 = (cpyN1 >> 2);
                cpyN2 = (cpyN2 >> 2);
            }
            return ((cnt1odd < cnt2odd)? n1 : n2);
        }
        else{
            return ((cnt1even < cnt2even)? n1 : n2);
        }
    }
}
